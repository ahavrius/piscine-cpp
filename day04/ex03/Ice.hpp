// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:05:47 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:05:49 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Ice : virtual public AMateria
{

	public:

		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &obj);
		~Ice(void);
		Ice &operator=(Ice const &r);

		Ice*		clone(void) const;
		void		use(ICharacter& target);

};

#endif