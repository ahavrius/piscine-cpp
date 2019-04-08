#include "Window.hpp"

Window::Window(void) {

	initscr();
	this->_initHeader();
	this->_initSpace();
	cbreak();
	curs_set(0);
	start_color();
	noecho();
	clear();

	init_pair(8, COLOR_BLACK, COLOR_BLACK);
	init_pair(0, COLOR_WHITE, COLOR_BLACK);

	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
	init_pair(5, COLOR_GREEN, COLOR_BLACK);
	init_pair(7, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(9, COLOR_CYAN, COLOR_BLACK);


	return;
}

void   Window::_initHeader() {
	this->_header = newwin(12, 150, 60, 0);
	wattron(this->_header, A_BOLD);
	wattroff(this->_header, A_BOLD);
	keypad(this->_header, true);
	nodelay(this->_header, true);
	box(this->_header, 0, 0);
	wrefresh(this->_header);
    return;
}

void   Window::initEndGame() {
	this->_endGame = newwin(60, 150, 0, 0);
	wattron(this->_endGame, A_BOLD);
	wattroff(this->_endGame, A_BOLD);
	keypad(this->_endGame, true);
	nodelay(this->_endGame, true);
	box(this->_endGame, 0, 0);
	wrefresh(this->_endGame);
	return;
}

void   Window::_initSpace(){
	this->_space = newwin(60, 150, 0, 0);
	wattron(this->_space, A_BOLD);
	wattroff(this->_space, A_BOLD);
	keypad(this->_space, true);
	nodelay(this->_space, true);
	box(this->_space, 0, 0);
	wrefresh(this->_space);
    return;
}

Window::~Window(void) {
	endwin();
	return;
}

void   Window::run(SpaceEntity & player) {

	this->_buildHeader(player);
	wrefresh(this->_header);
	return;
}

void   Window::_buildHeader(SpaceEntity &player){

	this->drawHealthLine(player.getHealth());
    return;
}

void   Window::drawHealthLine(int amount){


	int i = 0;
	int yPos = 10;
	while(i < 5) {
		if (i < amount) {
			wattron(this->_header, COLOR_PAIR(i + 1));
			mvwaddstr(this->_header, yPos, 6, "=========");
			yPos--;
			mvwaddstr(this->_header, yPos, 6, "=========");
			yPos--;
			wattroff(this->_header, COLOR_PAIR(i + 1));
		} else {
			wattron(this->_header, COLOR_PAIR(8));
			mvwaddstr(this->_header, yPos, 6, "=========");
			yPos--;
			mvwaddstr(this->_header, yPos, 6, "=========");
			yPos--;
			wattroff(this->_header, COLOR_PAIR(8));
		}
		i++;
	}
    return;
}

void   Window::drawFramesTimer(int frames) {
	wattron(this->_header, A_BOLD);
	mvwaddstr(this->_header, 1, 20, "TIME: ");
	mvwprintw(this->_header, 1, 37, "%d", frames);
	wattroff(this->_header, A_BOLD);
    return;
}

void   Window::drawScore(int score) {
	wattron(this->_header, A_BOLD);
	mvwaddstr(this->_header, 3, 20, "SCORE: ");
	mvwprintw(this->_header, 3, 37, "%d", score);
	wattroff(this->_header, A_BOLD);
	return;
}

void   Window::drawGameOver( void )  {
	wattron(this->_endGame, COLOR_PAIR(1));
	mvwaddstr(this->_endGame, 10, 39, " ######     .#####      #      #    ######");
	mvwaddstr(this->_endGame, 11, 39, "#           #     #     ##    ##    #     ");
	mvwaddstr(this->_endGame, 12, 39, "#           #     #     # #  # #    #     ");
	mvwaddstr(this->_endGame, 13, 39, "#  ####     #######     #   #  #    ######");
	mvwaddstr(this->_endGame, 14, 39, "#  #  #     #     #     #      #    #     ");
	mvwaddstr(this->_endGame, 15, 39, "#     #     #     #     #      #    #     ");
	mvwaddstr(this->_endGame, 16, 39, " #####      #     #     #      #    ######");

	mvwaddstr(this->_endGame, 19, 39, " #####      #     #     ########    #####" );
	mvwaddstr(this->_endGame, 20, 39, "#     #     #     #     #           #    #");
	mvwaddstr(this->_endGame, 21, 39, "#     #     #     #     #           #    #");
	mvwaddstr(this->_endGame, 22, 39, "#     #     #     #     ########    ##### ");
	mvwaddstr(this->_endGame, 23, 39, "#     #     #     #     #           ##    ");
	mvwaddstr(this->_endGame, 24, 39, "#     #      #   #      #           #  #  ");
	mvwaddstr(this->_endGame, 25, 39, " #####        # #       ########    #   # ");
	wattroff(this->_endGame, COLOR_PAIR(1));
	return;
}


WINDOW*		Window::getSpace( void ) const {

	return this->_space;
}

WINDOW*		Window::getHeader( void ) const {

	return this->_header;
}

WINDOW*		Window::getEndGame( void ) const {

	return this->_endGame;
}

void   Window::_addBorder(){

    return;
}

Window::Window(const Window &copy) {
	*this = copy;
	return;
}

Window &Window::operator=(const Window &rhs) {
	this->_space = rhs.getSpace();
	this->_header = rhs.getHeader();
	return *this;
}

void   Window::drawSpaceEntity(SpaceEntity & entity, int color)  {
	int	x = entity.getX();
	int y = entity.getY();
	std::string *lines = entity.getForm();
	for (int i = 0; i < entity.getLen(); i++) {
		if (!entity.outOfBorder()) {
			wattron(this->_space, COLOR_PAIR(color));
			mvwaddstr(this->_space, y, x, lines[i].c_str());
			wattroff(this->_space, COLOR_PAIR(color));
		}
		y++;
	}
    return;
}