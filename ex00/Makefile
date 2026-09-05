NAME		= animal

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp poly.cpp dog.cpp cat.cpp wrongpoly.cpp wrongcat.cpp
OBJS		= $(SRCS:.cpp=.o)
HDRS		= poly.hpp dog.hpp cat.hpp wrongpoly.hpp wrongcat.hpp

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o:		%.cpp $(HDRS)
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
