// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMateriaSource.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:07:32 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:07:32 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource{
public:
       virtual ~IMateriaSource() {}
       virtual void learnMateria(AMateria*) = 0;
       virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif