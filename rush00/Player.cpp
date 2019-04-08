#include "Player.hpp"
#include "SpaceEntity.hpp"

Player::Player(void): SpaceEntity(MAX_X/2 - 5, MAX_Y - 5, 0, 0, 9, 4, NULL, true) {
	this->_health = 5;

	std::string *form = new std::string [4];
	form[0] = "   _   ";
	form[1] = "|-(_)-|";
	form[2] = "  / \\ ";
	form[3] = "   ^   ";
	this->_form = form;
}

Player::Player(const Player &copy) {
	*this = copy;
	return;
}

Player::~Player(void) {
	return;
}

Player &Player::operator=(const Player &rhs) {
	this->SpaceEntity::operator=(rhs);
	return *this;
}

void		Player::nearBorder(void) {

}

bool   Player::canMove(int shiftX, int shiftY) const {

	return (this->_x + shiftX > 0 && this->_y + shiftY > 0 && this->_x + shiftX < MAX_X - this->_form->size() && this->_y + shiftY < MAX_Y - this->_len_chars);
}
