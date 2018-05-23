test : main.o
	g++ -std=c++11 -Wall -o test main.o
main.o : main.cpp Cell.h
	g++ -std=c++11 -c -Wall -o main.o main.cpp
