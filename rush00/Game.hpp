#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "Player.hpp"
#include "Window.hpp"
#include "SpaceEntity.hpp"
#include "Star.hpp"
#include "EnemyVertical.hpp"
#include "EnemyHorizontal.hpp"


#define NUM_STARS 50
#define NUM_ENEMIES_H 3
#define NUM_ENEMIES_V 10


class Game {

public:
	Game(void);

	Game(Window& window, Player & player);

	Game(const Game &copy);

	~Game(void);

	Game &operator=(const Game &rhs);

	void		start(void);

	Player*		getPlayer(void) const;

	Window*		getWindow(void) const;

private:

	Player* _player;

	SpaceEntity* _stars;

	SpaceEntity** _enemies;

	Window*	_window;

	int		_tick;

	int		_score;

	void	_starsInSpace(void);

	void	_bulletsInSpace(SpaceEntity** bullets, SpaceEntity *other);

	void	_enemiesInSpace(void);

	void	_enemiesBirth(void);

	void	_playerInSpace(int shiftX, int shiftY);

	void	_keyOperation(int key);

	bool	_checkCollision(SpaceEntity* object1, SpaceEntity* object2);

};

#endif
