// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 17:32:48 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 17:32:48 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int main() {
        Intern      idiotOne;
        Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
        Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
        OfficeBlock ob;
        ob.setIntern(idiotOne);
        ob.setSigner(bob);
        ob.setExecutor(hermes);

        OfficeBlock obb;

    try
    {
        ob.doBureaucracy("mutant pig termination", "Pigley");
        obb.doBureaucracy("presidential pardon", "sas");
    }	
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

}