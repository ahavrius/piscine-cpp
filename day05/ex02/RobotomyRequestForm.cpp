// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 19:49:42 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 19:49:43 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>

RobotomyRequestForm::RobotomyRequestForm(void): Form("_", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other){
    *this = other;
}
RobotomyRequestForm::~RobotomyRequestForm(void){}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
    Form::operator=(other);
    return *this;
}

void RobotomyRequestForm::executeAction(Bureaucrat const & executor) const{
    int chance = rand()%2;

    std::cout << "* Bzzt...  VrrrrRrRRRRRrrrr... *" << std::endl;

    std::cout << executor.getName();
    if (chance)
        std::cout << " has been robotomized successfully" << std::endl;   
    else
        std::cout << " has failed to be robotomized" << std::endl;
}