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
#include "ClapTrap.hpp"

class   FragTrap : public virtual ClapTrap{
public:
    FragTrap(void);
    FragTrap(std::string);
    FragTrap(FragTrap const &);
    ~FragTrap(void);
    FragTrap& operator=(FragTrap const &);
    void    rangeAttack(std::string const & target);
    
    void    vaulthunter_dot_exe(std::string const & target);
};
typedef void (ClapTrap::*frag_attack_t)(std::string const & target);


#endif
