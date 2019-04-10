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

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int main(){
    srand (time(NULL));

    Bureaucrat ted("Ted", 60);
    Intern  someRandomIntern;
    Form*   form1;
    Form*   form2;
    Form*   form3;
    Form*   form4;

    form1 = someRandomIntern.makeForm("robotomy request", "Bender");
    form2 = someRandomIntern.makeForm("presidential pardon", "Bender");
    form3 = someRandomIntern.makeForm("shrubbery creation", "Bender");
    form4 = someRandomIntern.makeForm("request", "Bender");

    ted.signForm(*form1);
    ted.signForm(*form2);
    ted.signForm(*form3);

    delete form1;
    delete form2;
    delete form3;
    return 0;
}