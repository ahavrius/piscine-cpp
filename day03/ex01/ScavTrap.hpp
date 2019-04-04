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

class ScavTrap {
public:

    ScavTrap(void);
    ScavTrap(std::string);
    ScavTrap(ScavTrap const &);
    ~ScavTrap(void);

 ScavTrap& operator=(ScavTrap const &);

    void    rangeAttack(std::string const &);
    void    meleeAttack(std::string const &);
    void    comboAttack(std::string const &); 
    void    flyAttack(std::string const &);
    void    bombAttack(std::string const & );

    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const &);
private:
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


#endif