test : main.o Cell.o
	g++ -std=c++11 -Wall -o test main.o Cell.o

main.o : main.cpp Cell.h
	g++ -std=c++11 -c -Wall -o main.o main.cpp

Cell.o : Cell.cpp
	g++ -std=c++11 -c -Wall -o Cell.o Cell.cpp
