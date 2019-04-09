// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 19:50:02 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 19:50:02 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(RobotomyRequestForm const & copy);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm& operator=(RobotomyRequestForm const & copy);

        void executeAction(Bureaucrat const & executor) const;
};



#endif