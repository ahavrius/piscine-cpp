// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 10:18:42 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 10:18:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <string>

class Peon: public Victim{
public:
    Peon(std::string name);
    ~Peon(void);
    Peon(Peon const &);
    Peon& operator=(Peon const &);
    void getPolymorphed() const;

protected:
    Peon(void);
};

#endif