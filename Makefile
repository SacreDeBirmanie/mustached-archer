CC=g++
FLAG=-std=c++11
FILE=src/main.cpp
NAME=bin/Citadelle
LAUNCH=./bin/Citadelle
RM=rm

all: compil

compil: 
	$(CC) $(FLAG) $(FILE) -o $(NAME)
run: 
	$(LAUNCH)
clean: 
	find . -name \*~ -exec rm -rf {} \;
	$(RM) $(NAME)

