// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 19:50:22 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 19:50:23 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm(void): Form("_", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other){
    *this = other;
}
PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
    Form::operator=(other);
    return *this;
}

void PresidentialPardonForm::executeAction(Bureaucrat const & executor) const{
    std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;   
}