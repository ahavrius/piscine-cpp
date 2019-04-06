// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:06:26 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:06:27 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter{
	public:
		Character(std::string const &name);
		Character(Character &obj);
		~Character(void);
		Character &operator=(Character const &r);
        
		std::string const &getName() const;
		void equip(AMateria* obj);
		void unequip(int i);
		void use(int i, ICharacter& target);

	private:
		Character(void);
        void deleteMateria(void);
		AMateria	*_mat[4];
		std::string	_name;

}; 


#endif