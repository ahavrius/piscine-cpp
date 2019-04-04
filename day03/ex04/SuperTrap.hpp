// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/04 15:21:15 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/04 15:21:16 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap{
public:

    SuperTrap(void);
    SuperTrap(std::string);
    SuperTrap(SuperTrap const &);
    SuperTrap& operator=(SuperTrap const &);
    ~SuperTrap(void);

    void    rangeAttack(std::string const & target);
    void    meleeAttack(std::string const & target);

};

#endif