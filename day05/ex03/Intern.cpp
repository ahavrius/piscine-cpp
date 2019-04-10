// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 21:26:31 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 21:26:32 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Intern.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

Intern::Intern(void){}

Intern::Intern(Intern const &other){
    *this = other;
}
Intern::~Intern(void){}

Intern& Intern::operator=(Intern const &){
    return *this;
}

Form * Intern::makeForm(std::string form, std::string name){
    if (form != "robotomy request" && form != "presidential pardon" && form != "shrubbery creation")
    {
        std::cout << "Intern failed to create " << form << std::endl;
        return NULL;
    }
    std::cout << "Itern creates " << form << std::endl;
    if (form == "robotomy request")
        return (new RobotomyRequestForm(name));
    if (form == "presidential pardon")
        return (new PresidentialPardonForm(name));
    if (form == "shrubbery creation")
        return (new ShrubberyCreationForm(name));
    
    return (NULL);
}
