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

class ScavTrap: public virtual ClapTrap{
public:

    ScavTrap(void);
    ScavTrap(std::string);
    ScavTrap(ScavTrap const &);
    ~ScavTrap(void);
    ScavTrap& operator=(ScavTrap const &);

    void    rangeAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    comboAttack(std::string const & target); 
    void    flyAttack(std::string const & target);
    void    bombAttack(std::string const & target);
    
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    
    void    challengeNewcomer(std::string const &);
};


#endif