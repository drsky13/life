test : main.o Cell.o Stats.o
	g++ -std=c++11 -g -Wall -o test main.o Cell.o Stats.o

main.o : main.cpp Cell.h
	g++ -std=c++11 -g -c -Wall -o main.o main.cpp

Stats.o : Stats.cpp
	g++ -std=c++11 -g -c -Wall Stats.cpp -o Stats.o

Cell.o : Cell.cpp
	g++ -std=c++11 -g -c -Wall -o Cell.o Cell.cpp
