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

#include <string>

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
    class GradeTooHighException : public std::exception
		{
			public:
				
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &obj);
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException &operator=(GradeTooHighException const &r);
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &obj);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException &operator=(GradeTooLowException const &r);
				virtual const char* what() const throw();
			
		};

};

std::ostream & operator<<(std::ostream &o, const Bureaucrat & );


#endif