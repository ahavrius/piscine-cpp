// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 18:21:09 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 18:21:10 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("_"), _signed(false), _gradeSing(1), _gradeExecute(1){}

Form::Form(std::string name, int grade1, int grade2):
 _name(name), _signed(false), _gradeSing(grade1), _gradeExecute(grade2){
    
    if (grade1 > 150 || grade2 > 150)
        throw Form::GradeTooLowException();
    if (grade1 < 1 || grade2 < 1)
        throw Form::GradeTooHighException();
}
Form::Form(Form const & other):
_name(other.getName()), _signed(other.getIsSigned()),
_gradeSing(other.getGradeSign()), _gradeExecute(other.getGradeExecute()) {}
Form::~Form(){}

Form& Form::operator=(Form const&other){
    this->_signed = other.getIsSigned();
    return *this;
}

int     Form::getGradeSign() const{
    return _gradeSing;
}
int     Form::getGradeExecute() const{
    return _gradeExecute;
}
const std::string& Form::getName() const{
    return _name;
}
bool        Form::getIsSigned() const{
    return _signed;
}


std::ostream & operator<<(std::ostream &o, const Form &other){

    o << (other.getIsSigned() ? " signed " : " unsigned ") << " form, named " << other.getName();
    o << ", with " << other.getGradeSign() << " - a grade required to sign it, and ";
    o << other.getGradeExecute() << " - a grade required to execute" ;
    return o;
}

void    Form::beSigned(Bureaucrat const & guy){
    if (_gradeSing < guy.getGrade())
        throw Form::GradeTooLowException();
    _signed = true;
}