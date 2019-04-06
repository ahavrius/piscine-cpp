// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:06:07 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:06:07 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Cure : virtual public AMateria
{

	public:

		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &obj);
		~Cure(void);
		Cure &operator=(Cure const &r);

		Cure*		clone(void) const;
		void		use(ICharacter& target);

};

#endif