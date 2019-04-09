// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 17:32:28 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 17:32:33 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include "string"
#include <iostream>

class Form;

class Bureaucrat{
    std::string const _name;
    int               _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string , int);
    Bureaucrat(Bureaucrat const &);
    ~Bureaucrat();
    Bureaucrat& operator=(Bureaucrat const&);

    int getGrade() const;
    std::string const getName() const;

    void    incrementGrade();
    void    decrementGrade();

    void    signForm(Form &) const;

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

std::ostream & operator<<(std::ostream &o, const Bureaucrat &);

#endif