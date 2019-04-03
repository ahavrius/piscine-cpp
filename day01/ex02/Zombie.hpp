// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/02 13:03:46 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/02 13:03:47 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void announce(void);

private:
    std::string _name;
    std::string _type;
};

#endif