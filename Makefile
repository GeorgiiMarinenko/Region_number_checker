NAME = find_reg
HEADER = INCLUDES/header.h
SRCS = SRCS/main.cpp SRCS/parser.cpp

CFLAGS = -Wall -Werror -Wextra

CC = g++

run:
	g++ $(SRCS) -I $(HEADER) -o $(NAME)

binrun:
	./$(NAME)

all: run binrun

fclean:
	rm -f $(NAME)

.PHONY: run binrun
.SILENT: run binrun
