// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 19:50:18 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 19:50:19 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALRARDONFORM_HPP
#define PRESIDENTIALRARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(PresidentialPardonForm const & copy);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm& operator=(PresidentialPardonForm const & copy);

        void executeAction(Bureaucrat const & executor) const;

};

#endif