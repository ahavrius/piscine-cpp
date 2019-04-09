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

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int main(){
    srand (time(NULL));

    Bureaucrat ted("Ted", 2);
    Bureaucrat bob("Bob", 40);
    Bureaucrat ken("Ken", 70);
    
    Form *form1 = new PresidentialPardonForm("form 1");
    Form *form2 = new RobotomyRequestForm("form 2");
    Form *form3 = new ShrubberyCreationForm("form 3");

    ted.executeForm(*form1);
    bob.signForm(*form1);
    bob.signForm(*form3);
    ted.signForm(*form1);
    ken.signForm(*form2);

    ted.executeForm(*form1);
    bob.executeForm(*form3);
    ken.executeForm(*form2);
    bob.executeForm(*form2);

    delete form1;
    delete form2;
    delete form3;
    return 0;
}