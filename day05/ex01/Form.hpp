// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 18:21:15 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 18:21:15 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    const std::string   _name;
    bool                _signed;
    const int           _gradeSing;
    const int           _gradeExecute;

public:
    Form();
    Form(Form const &);
    Form(std::string, int , int);
    ~Form();
    Form& operator=(Form const&);

    const std::string& getName() const;
    int          getGradeSign() const;
    int          getGradeExecute() const;
    bool         getIsSigned() const;

    void        beSigned(Bureaucrat const &);

    class GradeTooHighException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("grade is too hight");
            }
    };
    class GradeTooLowException: public std::exception{
        public:
            virtual const char* what() const throw(){
                return ("grade is too low");
            }
    };

};

std::ostream & operator<<(std::ostream &o, const Form &);


#endif