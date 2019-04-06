// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:05:27 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:05:27 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria{
protected:
    std::string type_;
    unsigned int xp_;
    AMateria();

public:
    AMateria(std::string const & type);
    AMateria(AMateria const &);
    AMateria & operator=(AMateria const &);
    virtual ~AMateria();

    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif