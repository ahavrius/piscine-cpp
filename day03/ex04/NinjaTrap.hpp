// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 14:47:53 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 14:47:53 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap:  public virtual ClapTrap{
public:

    NinjaTrap(void);
    NinjaTrap(std::string);
    NinjaTrap(NinjaTrap const &);
    ~NinjaTrap(void);
    NinjaTrap& operator=(NinjaTrap const &);
    void    rangeAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    comboAttack(std::string const & target); 
    void    flyAttack(std::string const & target);
    void    bombAttack(std::string const & target);
    
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    
    void    ninjaShoebox(ClapTrap &);
    void    ninjaShoebox(NinjaTrap &);
    void    ninjaShoebox(ScavTrap &);
    void    ninjaShoebox(FragTrap &);
};


#endif