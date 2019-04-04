// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 14:03:42 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 14:03:43 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class   ClapTrap{
public:
    ClapTrap(void);
    ClapTrap(std::string);
    ClapTrap(ClapTrap const &);
    ~ClapTrap(void);
    ClapTrap& operator=(ClapTrap const &);

    void    rangeAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    comboAttack(std::string const & target); 
    void    flyAttack(std::string const & target);
    void    bombAttack(std::string const & target);

    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

protected:
    void    setAll(int hp, int max_hp, int ep, int max_ep, int md, int rd, int ar);    
    int hit_point_;
    int max_hit_point_;
    int energy_points_;
    int max_energy_points_;
    int level_;
    std::string name_;
    int melee_damage_;
    int ranged_damage_;
    int armor_reduction_;
};

typedef void (ClapTrap::*attacks_t)(std::string const & target);

#endif