// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 09:51:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 09:51:35 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class   FragTrap{
public:
    FragTrap(void);
    FragTrap(std::string);
    FragTrap(FragTrap const &);
    ~FragTrap(void);
    FragTrap& operator=(FragTrap const &);

    void    rangeAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    comboAttack(std::string const & target); 
    void    flyAttack(std::string const & target);
    void    bombAttack(std::string const & target);

    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const & target);
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

typedef void (FragTrap::*attacks_t)(std::string const & target);

#endif
