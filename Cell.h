#ifndef CELL
#define CELL

#include <vector>

void initializeArray(std::vector< std::vector<int>>& vect, const unsigned int nbrCell);
void randAB(const int row, const int column,unsigned int& posRow,unsigned int& posCol);
void displayBoard(std::vector<std::vector<int>> vect);
void changeStateCell(std::vector<std::vector<int>> v, const unsigned int col, const unsigned int row);

#endif
