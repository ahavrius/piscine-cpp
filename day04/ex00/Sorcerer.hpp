// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 10:17:27 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 10:17:28 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer{
public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);
    Sorcerer(Sorcerer const &);
    Sorcerer& operator=(Sorcerer const &);
    std::string getName(void) const;
    std::string getTitle(void) const;
    void polymorph(Victim const &) const;

protected:
    Sorcerer(void);
    std::string name_;
    std::string title_;
};

std::ostream& operator<<(std::ostream &, Sorcerer const &);

#endif