#include <ncurses.h>
#include <string>
#include <iostream>

#include "SpaceEntity.hpp"
#include "Window.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "EnemyHorizontal.hpp"
#include "EnemyVertical.hpp"
#include "Star.hpp"
#include "Weapon.hpp"

#include <time.h>

int main( void ) {

	srand (time(NULL));
	Game	game;
	game.start();
	return 0;
}

