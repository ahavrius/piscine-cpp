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

protected:

    virtual  void executeAction(Bureaucrat const & executor) const = 0;

public:
    Form();
    Form(Form const &);
    Form(std::string, int , int);
    virtual ~Form();
    Form& operator=(Form const&);

    const std::string& getName() const;
    int          getGradeSign() const;
    int          getGradeExecute() const;
    bool         getIsSigned() const;

    void        beSigned(Bureaucrat const &);
    void        execute(Bureaucrat const & executor) const;

    class ExecuteUnsignedException : public std::exception
		{
			public:
				
				ExecuteUnsignedException(void);
				ExecuteUnsignedException(ExecuteUnsignedException const &obj);
				virtual ~ExecuteUnsignedException(void) throw();
				ExecuteUnsignedException &operator=(ExecuteUnsignedException const &r);
				virtual const char* what() const throw();
		};
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

std::ostream & operator<<(std::ostream &o, const Form &);


#endif