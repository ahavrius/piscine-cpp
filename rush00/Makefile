CC = clang++

CFLAGS = -Wall -Wextra -Werror -lncurses

SRC = Game.cpp \
      Window.cpp \
      Player.cpp \
	  SpaceEntity.cpp \
	  Star.cpp \
	  EnemyHorizontal.cpp \
	  EnemyVertical.cpp \
	  Weapon.cpp \



OBJ = $(SRC:.cpp=.o)
	EXECUTABLE = ft_retro

all: $(SRC) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJ)
	$(CC) $(CFLAGS) main.cpp $(OBJ) -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(EXECUTABLE)

re: fclean all
