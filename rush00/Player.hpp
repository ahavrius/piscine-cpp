#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

#include "SpaceEntity.hpp"

class Player : public SpaceEntity {

public:
	Player(void);
	Player(const Player &copy);
	~Player(void);
	Player &operator=(const Player &rhs);
	void		nearBorder(void);
	bool		canMove(int shiftX, int shiftY) const;


};

#endif
