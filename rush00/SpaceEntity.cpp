#include "Weapon.hpp"

SpaceEntity::SpaceEntity(void) {
	return;
}

SpaceEntity::SpaceEntity( int x, int y, int x_shift, int y_shift, int color, int len, std::string *form, bool weapon):
	 _x(x), _y(y), _x_shift(x_shift), _y_shift(y_shift), _color(color), _len_chars(len), _form(form), _health(-1),
	 _hasWeapon(weapon), _weapon(NULL) {

		if (this->hasWeapon())
		 	this->createWeapon();
	 }
void	SpaceEntity::createWeapon(){
	this->_weapon = new SpaceEntity*[BULLETS];
	for(int i = 0; i < BULLETS; i++)
	{
		this->_weapon[i] = NULL;
	}
}

void SpaceEntity::death(void)
{
	this->_health -= SIGN(this->_health);
}

SpaceEntity::SpaceEntity(const SpaceEntity &copy) {
	*this = copy;
	return;
}

SpaceEntity::~SpaceEntity(void) {
	delete [] this->_form;
	if (this->hasWeapon())
		delete [] this->_weapon; 
	return;
}
void	SpaceEntity::attack(void){
	if (!this->hasWeapon())
		return;

	int j = 0;
	while (j < BULLETS && this->_weapon[j] && this->_weapon[j]->isActive())
		j++;
	if (j < BULLETS) {
		if (this->_weapon[j] != NULL) {
			this->_weapon[j]->_x = this->_x + this->_form->size()/2;
			this->_weapon[j]->_y = this->_y + SIGN(this->_health) * this->_len_chars / 2;
			this->_weapon[j]->_y_shift = -SIGN(this->_health);
			this->_weapon[j]->_color = (SIGN(this->_health) > 0 ) ? 4 : 1;
		}
		else
			this->_weapon[j] = new Weapon(this->_x + this->_form->size() / 2,
											this->_y + SIGN(this->_health) * this->_len_chars / 2, SIGN(this->_health));
	}
}

void	SpaceEntity::step(void){

	if (this->outOfBorder())
        this->nearBorder();
	else
	{	
		this->_x += this->_x_shift;
		this->_y += this->_y_shift;
	}
}

SpaceEntity**		SpaceEntity::getWeapon( void ) const {
	return this->_weapon;
}
bool	SpaceEntity::hasWeapon(void) const{
	return this->_hasWeapon;
}

SpaceEntity &SpaceEntity::operator=(const SpaceEntity &rhs) {

	this->_health = rhs.getHealth();
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	this->_color = rhs.getColor();
	this->_x_shift = rhs._x_shift;
	this->_y_shift = rhs._y_shift;
	this->_len_chars = rhs.getLen();
	this->_form = rhs.getForm();
	this->_hasWeapon = rhs.hasWeapon();
	this->_weapon = rhs.getWeapon();
	return *this;
}

bool SpaceEntity::isActive(void){
	return this->_color != 8;
}


bool	SpaceEntity::outOfBorder(void) const {
	return (this->_x < 1 || this->_y < 1 || this->_x >= MAX_X - this->_form->size() || this->_y >= MAX_Y - this->_len_chars);
}

int		SpaceEntity::getHealth(void) const{
	return this->_health;
}


int		SpaceEntity::getX( void ) const {
	return this->_x;
}

int		SpaceEntity::getColor(void) const{
	return this->_color;
}

int		SpaceEntity::getY( void ) const {
	return this->_y;
}

int		SpaceEntity::getLen(void) const{
	return this->_len_chars;
}

std::string		*SpaceEntity::getForm( void ) const {
	return this->_form;
}

int   SpaceEntity::randomDot(int min, int max){

    return rand() % (max) + min;
}

void   SpaceEntity::nearBorder() {

    return;
}

void		SpaceEntity::setShiftX( int x ) {
	this->_x_shift = x;
}

void		SpaceEntity::setShiftY( int y ) {
	this->_y_shift = y;
}