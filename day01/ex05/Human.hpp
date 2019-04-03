// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 16:17:07 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 16:17:08 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Brain.hpp"
#include <string>

class Human{
public:

    std::string identify(void);
    Brain     & getBrain(void);
    Brain this_brain;
};

#endif