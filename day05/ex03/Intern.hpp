// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/09 21:26:36 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/09 21:26:37 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern{
    public:
        Intern(void);
        Intern(Intern const & copy);
        ~Intern(void);
        Intern& operator=(Intern const & copy);

        Form * makeForm(std::string, std::string);
};

#endif
