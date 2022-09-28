.PHONY: all
all: square

square.o: square.cpp square.hpp
	c++ -c square.cpp

main.o: main.cpp square.hpp
	c++ -c main.cpp

square: main.o square.o
	c++ -o square main.o square.o

