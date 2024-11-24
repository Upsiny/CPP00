# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hguillau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 05:43:09 by hguillau          #+#    #+#              #
#    Updated: 2024/08/01 06:58:15 by hguillau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET =		PhoneBook

CXX =			c++

CXXFLAGS =		-Wall -Wextra -Werror -I.

SRCS =			Contact.cpp		\
				PhoneBook.cpp	\
				main.cpp

OBJS =			$(SRCS:.cpp=.o)

all: 			$(TARGET)

$(TARGET):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
				$(CXX) $(CXXFLAGS) -std=c++98 -c $< -o $@

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f ${TARGET}

re:				fclean all

.PHONY:			all clean fclean re
