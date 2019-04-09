// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 19:49:27 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 19:49:27 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>
#include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("_", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other){
    *this = other;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
    Form::operator=(other);
    return *this;
}

void ShrubberyCreationForm::executeAction(Bureaucrat const & executor) const{
    std::ofstream ofile(executor.getName() + "_shrubbery");

    ofile << "               ,@@@@@@@,                " << std::endl;
    ofile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    " << std::endl;
    ofile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o   " << std::endl;
    ofile << "   ,%&\%&&%&&%,@@@\\@@@/@@@88\\88888/888'  " << std::endl;
    ofile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'  " << std::endl;
    ofile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'   " << std::endl;
    ofile << "   `&%\\ ` /%&'    |.|        \\ '|8'     " << std::endl;
    ofile << "       |o|        | |         | |       " << std::endl;
    ofile << "       |.|        | |         | |       " << std::endl;
    ofile << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/" << std::endl;

    ofile.close();
}

