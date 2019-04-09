// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 19:49:22 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 19:49:23 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(ShrubberyCreationForm const & copy);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const & copy);

        void executeAction(Bureaucrat const & executor) const;

};

#endif