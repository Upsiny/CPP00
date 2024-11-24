# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hguillau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 05:43:09 by hguillau          #+#    #+#              #
#    Updated: 2024/08/01 06:45:34 by hguillau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET =		megaphone

CXX =			c++

CXXFLAGS =		-Wall -Wextra -Werror

SRCS =			Megaphone.cpp

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
