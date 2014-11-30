CC=g++
FLAG=-std=c++11
FILE=src/main.cpp
NAME=Citadelle
LAUNCH=./src/Citadelle
RM=rm

all: compil

compil: 
	$(CC) $(FLAG) $(FILE) -o $(NAME)
run: 
	$(LAUNCH)
clean: 
	find . -name \*~ -exec rm -rf {} \;
	$(RM) $(NAME)
