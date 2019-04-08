#include "Game.hpp"

Game::Game(void) {
	srand(time(NULL));
	this->_window = new Window;
	this->_player = new Player;
	this->_stars = new Star[NUM_STARS];
	this->_enemies = new SpaceEntity*[NUM_ENEMIES_H + NUM_ENEMIES_V];
	this->_score = 0;
	this->_tick = 0;
	this->_enemiesBirth();
	return;
}

void   Game::_enemiesBirth(){

	int i = 0;
	while(i < NUM_ENEMIES_V) {
		this->_enemies[i] = new EnemyVertical();
		i++;
	}
	while(i < NUM_ENEMIES_H + NUM_ENEMIES_V) {
		this->_enemies[i] = new EnemyHorizontal();
		i++;
	}
    return;
}

Game::Game(const Game &copy) {
	*this = copy;
	return;
}

Game::~Game(void) {
	delete this->_window;
	delete this->_player;
}

Game &Game::operator=(const Game &rhs) {

	this->_window = rhs.getWindow();
	this->_player = rhs.getPlayer();
	return *this;
}

void   Game::start() {
	int 	key = 0;
	bool	exitGame = false;
	while(!exitGame) {
		key = wgetch(this->_window->getSpace());
		exitGame = key == 'q';
		this->_keyOperation(key);
		if(this->_tick % 5 == 0) {
			this->_starsInSpace();
		}
		if(this->_tick % 5 == 0) {
			this->_enemiesInSpace();
		}
		this->_bulletsInSpace(this->_player->getWeapon(), NULL);
		this->_window->drawSpaceEntity(*this->_player, this->_player->getColor());
		this->_window->run(*this->_player);
		usleep(10000);
		this->_tick++;
		this->_score++;
		this->_window->drawFramesTimer(this->_tick);
		this->_window->drawScore(this->_score);
		if (this->_player->getHealth() <= 0) {
			break;
		}
		this->_window->drawHealthLine(this->_player->getHealth());
		wrefresh(this->_window->getSpace());
	}
	this->_window->initEndGame();
	while (1) {
		key = wgetch(this->_window->getEndGame());
		this->_window->drawGameOver();
		if (key == 'q') {
			break;
		}
	}
	return;
}

bool   Game::_checkCollision(SpaceEntity* object1, SpaceEntity* object2) {


	int	l1_x = object1->getX();
	int	l1_y = object1->getY();

	int	l2_x = object1->getX() + object1->getForm()->size();
	int	l2_y = object1->getY() + object1->getLen();

	int	r1_x = object2->getX();
	int	r1_y = object2->getY();

	int	r2_x = object2->getX() + object2->getForm()->size();
	int	r2_y = object2->getY() + object2->getLen();
	
	if((
				  (
						  (
								  ( l1_x>=r1_x && l1_x<=r2_x )||( l2_x>=r1_x && l2_x<=r2_x  )
						  ) && (
								  ( l1_y>=r1_y && l1_y<=r2_y )||( l2_y>=r1_y && l2_y<=r2_y )
						  )
				  )||(
						  (
								  ( r1_x>=l1_x && r1_x<=l2_x )||( r2_x>=l1_x && r2_x<=l2_x  )
						  ) && (
								  ( r1_y>=l1_y && r1_y<=l2_y )||( r2_y>=l1_y && r2_y<=l2_y )
						  )
				  )
		  )||(
				  (
						  (
								  ( l1_x>=r1_x && l1_x<=r2_x )||( l2_x>=r1_x && l2_x<=r2_x  )
						  ) && (
								  ( r1_y>=l1_y && r1_y<=l2_y )||( r2_y>=l1_y && r2_y<=l2_y )
						  )
				  )||(
						  (
								  ( r1_x>=l1_x && r1_x<=l2_x )||( r2_x>=l1_x && r2_x<=l2_x  )
						  ) && (
								  ( l1_y>=r1_y && l1_y<=r2_y )||( l2_y>=r1_y && l2_y<=r1_y )
						  )
				  )
		  )) {



		object1->death();
		object2->death();
		return true;
	}
	return false;
}

void   Game::_keyOperation(int key){

	switch(key) {
		case KEY_UP:
		case 'w':
			this->_playerInSpace(0, -1);
			break;
		case KEY_DOWN:
		case 's':
			this->_playerInSpace(0, 1);
			break;
		case KEY_LEFT:
		case 'a':
			this->_playerInSpace(-1, 0);
			break;
		case KEY_RIGHT:
		case 'd':
			this->_playerInSpace(1, 0);
			break;
		case ' ':
			this->_player->attack();
			break;
		default:
			break;
	}
    return;
}

Player*		Game::getPlayer( void ) const {

	return this->_player;
}

Window*		Game::getWindow( void ) const {

	return this->_window;
}

void   Game::_starsInSpace() {
	for (int i = 0; i < 50; i++) {
		this->_window->drawSpaceEntity(this->_stars[i], 8);
		this->_stars[i].step();
		this->_window->drawSpaceEntity(this->_stars[i], this->_stars[i].getColor());

	}
    return;
}

void   Game::_enemiesInSpace(){
	for (int i = 0; i < NUM_ENEMIES_V + NUM_ENEMIES_H; i++) {
		if(this->_tick % 2 == 0) {
			this->_enemies[i]->attack();
		}
		this->_window->drawSpaceEntity(*this->_enemies[i], 8);
		this->_enemies[i]->step();
		if (!this->_checkCollision(this->_enemies[i], this->_player)) {
			this->_window->drawSpaceEntity(*this->_enemies[i], this->_enemies[i]->getColor());
		} else {
			this->_window->drawHealthLine(this->_player->getHealth());
		}
		this->_bulletsInSpace(this->_player->getWeapon(), this->_enemies[i]);
		this->_bulletsInSpace(this->_enemies[i]->getWeapon(), this->_player);
	}
    return;
}

void   Game::_playerInSpace(int shiftX, int shiftY) {

	if (this->_player->canMove(shiftX, shiftY)) {
		this->_window->drawSpaceEntity(*this->_player, 8);
		this->_player->setShiftX(shiftX);
		this->_player->setShiftY(shiftY);
		this->_player->step();
	}
	this->_window->drawSpaceEntity(*this->_player, this->_player->getColor());
    return;
}

void   Game::_bulletsInSpace(SpaceEntity **bullets, SpaceEntity *other){
	if (!bullets)
		return ;

	for (int i = 0; i < BULLETS; i++) {
		if (bullets[i]) {
			this->_window->drawSpaceEntity(*bullets[i], 8);
			bullets[i]->step();
			if (other == NULL || !this->_checkCollision(bullets[i], other)) {
				this->_window->drawSpaceEntity(*bullets[i], bullets[i]->getColor());
			} else {
				this->_score += 10;
				this->_window->drawHealthLine(this->_player->getHealth());
				this->_window->drawSpaceEntity(*other, 8);
			}
		}
	}
}