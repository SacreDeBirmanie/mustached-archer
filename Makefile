CC=g++
FLAG=-std=c++11
FILE=main.cpp
NAME=Citadelle
LAUNCH=./Citadelle
RM=rm

all: compil

compil: 
	$(CC) $(FLAG) $(FILE) -o $(NAME)
run: 
	$(LAUNCH)
clean: 
	find . -name \*~ -exec rm -rf {} \;
	$(RM) $(NAME)
