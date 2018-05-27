#ifndef CELL
#define CELL

#include <vector>

void initializeArray(std::vector< std::vector<int>>& vect, const unsigned int nbrCell);
void randAB(const int row, const int column,unsigned int& posRow,unsigned int& posCol);
void displayBoard(std::vector<std::vector<int>> vect);
void sumCalcul(std::vector<std::vector<int>>& v, const int col, const int row);
void ChangStateCell(unsigned int sum, std::vector<std::vector<int>>& v, const int row, const int col);
void formatDisplay(std::vector<std::vector<int>> vect);
#endif
