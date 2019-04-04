// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 12:54:28 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 12:54:29 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCANTRAP_HPP
#define SCANTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:

    ScavTrap(void);
    ScavTrap(std::string);
    ScavTrap(ScavTrap const &);
    ~ScavTrap(void);
    ScavTrap& operator=(ScavTrap const &);
    
    void    challengeNewcomer(std::string const &);
};


#endif