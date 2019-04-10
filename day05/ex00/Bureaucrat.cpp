// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 17:32:38 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 17:32:39 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(): _name("_"), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const & other): _name(other.getName()){
    *this = other;
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const&other){
    this->_grade = other.getGrade();
    return *this;
}
void    Bureaucrat::incrementGrade(){
    if (_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}
void    Bureaucrat::decrementGrade(){
    if (_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}
int     Bureaucrat::getGrade() const{
    return _grade;
}
std::string const Bureaucrat::getName() const{
    return _name;
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &other){
    o << other.getName() << ", bureaucrat grade " << other.getGrade();
    return o;
}

/**//**//**//**/

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj){
	*this = obj;}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &) {
	return (*this);}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("error: grade too high (<1)");
}


Bureaucrat::GradeTooLowException::GradeTooLowException(void){}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj){
	*this = obj;}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &) {
	return (*this);}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("error: grade too low (>150)");
}