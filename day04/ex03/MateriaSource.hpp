// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/05 23:06:41 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/05 23:06:42 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include <string>

class	MateriaSource : public IMateriaSource{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource &obj);
		virtual ~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &r);

		void learnMateria(AMateria*);
		AMateria *createMateria(std::string const & type);

	private:
        void deleteMateria(void);
		AMateria	*_mat[4];

};

#endif
