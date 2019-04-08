// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyVertical.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/04/06 20:04:34 by ahavrius          #+#    #+#             //
//   Updated: 2019/04/06 20:04:34 by ahavrius         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMYVERTICAL_HPP
#define ENEMYVERTICAL_HPP

#define HP_ENEMY_V (-1)

#include "SpaceEntity.hpp"

class EnemyVertical : public SpaceEntity {

public:
	EnemyVertical(void);
	EnemyVertical(const EnemyVertical &copy);
	~EnemyVertical(void);
	EnemyVertical &operator=(const EnemyVertical &rhs);

	void 		nearBorder(void);
	void		death(void);
};


#endif