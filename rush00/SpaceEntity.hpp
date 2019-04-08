#ifndef SPACE_ENTITY_H
#define SPACE_ENTITY_H

#include <string>
#include <iostream>

#define MAX_X 150
#define MAX_Y 60
#define HORIZ 7
#define SIGN(x) (((x) > 0) ? 1 : -1)
#define BULLETS 10

class SpaceEntity {

public:
	SpaceEntity( int x, int y, int x_shift, int y_shift, int color, int len, std::string *form, bool weapon);
	SpaceEntity(const SpaceEntity &copy);
	virtual ~SpaceEntity(void);
	SpaceEntity &operator=(const SpaceEntity &rhs);

	virtual void		step(void);
	virtual void		nearBorder(void);
	virtual void		attack(void);
	virtual void		death(void);

	void		createWeapon(void);
	bool 		isActive(void);

	int				getX(void) const;
	int				getY(void) const;
	std::string		*getForm(void) const;
	int				getColor(void) const;
	int				getLen(void) const;
	int				getHealth(void) const;
	SpaceEntity**	getWeapon(void) const;
	void			setShiftX(int x);
	void			setShiftY(int y);
	SpaceEntity(void);

	static int	randomDot(int min, int max);
	virtual bool outOfBorder() const;
	bool		hasWeapon(void) const;

protected:
	bool		_hasWeapon;
	int			_health;
	int			_color;
	int			_x;
	int			_y;
	int			_x_shift;
	int			_y_shift;
	int			_len_chars;
	std::string	*_form;
	SpaceEntity **_weapon;	
};

#endif
