#include <iostream>
#include <string>
#include <vector>
#include <time.h>

void randAB(const int row, const int column, int& posRow, int& posCol){

  posRow = rand()%row;
  posCol = rand()%column;

}

void initialize_array(std::vector< std::vector<int>>& vect, const unsigned int nbrCell){

}
