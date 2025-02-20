NAME     := Materias
SRCS	:=	base/ICharacter.cpp \
			base/AMateria.cpp \
			base/IMateriaSource.cpp \
			concrete/character.cpp \
			concrete/cure.cpp \
			concrete/ice.cpp \
			concrete/MateriaSource.cpp \
			main.cpp
OBJS     := $(SRCS:.cpp=.o)
CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Project cleaned"

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re
