// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Star.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 19:48:35 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 19:48:36 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef STAR_HPP
#define STAR_HPP

#include "SpaceEntity.hpp"

class Star : public SpaceEntity {

public:
	Star(void);
	Star(const Star &copy);
	~Star(void);
	Star &operator=(const Star &rhs);

	void		nearBorder(void);

};



#endif