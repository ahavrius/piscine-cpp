#ifndef WINDOW_H
#define WINDOW_H

#include <ncurses.h>
#include <string>

#include "SpaceEntity.hpp"

class Window {

public:
	Window(void);

	Window(const Window &copy);

	~Window(void);

	Window &operator=(const Window &rhs);

	WINDOW*	getSpace(void) const;

	WINDOW*	getHeader(void) const;

	WINDOW*	getEndGame(void) const;

	void	run(SpaceEntity & player);

	void	drawFramesTimer(int frames);

	void	drawScore(int score);

	void	drawSpaceEntity(SpaceEntity & entity, int color);

	void	drawStartMenu(void);

	void	drawGameOver(void);

	void	drawHealthLine(int amount);

	void 	initEndGame(void);

private:
	WINDOW* _space;

	WINDOW* _header;

	WINDOW* _endGame;

	void	_addBorder(void);

	void 	_initSpace(void);

	void 	_initHeader(void);

	void	_buildHeader(SpaceEntity & player);



};

#endif
