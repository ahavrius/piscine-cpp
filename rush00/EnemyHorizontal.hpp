// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyHorizontal.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 19:53:20 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 19:53:32 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMYHORIZONTAL_HPP
#define ENEMYHORIZONTAL_HPP

#define HP_ENEMY_H (-1)

#include "SpaceEntity.hpp"
#include <string>

class EnemyHorizontal : public SpaceEntity {

public:
	EnemyHorizontal(void);
	EnemyHorizontal(const EnemyHorizontal &copy);
	~EnemyHorizontal(void);
	EnemyHorizontal &operator=(const EnemyHorizontal &rhs);

	void 		nearBorder(void);
	void		death(void);
};


#endif