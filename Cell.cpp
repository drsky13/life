#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Cell.h"

//send two hazard number
void randAB(const int row, const int column,unsigned int& posRow,unsigned int& posCol){

  posRow = rand()%row;
  posCol = rand()%column;

}

//initialize all cell in a board
void initializeArray(std::vector< std::vector<int>>& vect, const unsigned int nbrCell){

  unsigned int posRow;
  unsigned int posCol;

  for (unsigned int i=0 ; i < nbrCell ; i++) {
    do{
      randAB(vect.size(),vect[0].size(),posRow, posCol);
    }while(vect[posRow][posCol] == 1);
    vect[posRow][posCol] = 1;
  }
}

//display board with initial information
void displayBoard(std::vector<std::vector<int>> vect){

  std::vector<std::vector<int>>::iterator itRow;
  std::vector<int>::iterator itCol;

  for (itRow = vect.begin() ; itRow != vect.end() ; itRow++){
    for (itCol = itRow->begin() ; itCol != itRow->end() ; itCol++){
      std::cout << *itCol;
    }
    std::cout << std::endl;
  }
}


void sumCalcul(std::vector<std::vector<int>> v, const unsigned int col, const unsigned int row){
  unsigned int sum = 0;
  for (unsigned int i=0 ; i<row ; i++){
    for (unsigned int j=0 ; j<col ; j++){

      sum = 0;

      if(i-1 >= 0)                   sum += v[i-1][j];
      if(j-1 >= 0)                   sum += v[i][j-1];
      if(i+1 < row)                  sum += v[i+1][j];
      if(j+1 < col)                  sum += v[i][j+1];

      if((i-1 >= 0) && (j-1 >= 0))   sum += v[i-1][j-1];
      if((i+1 < row) && (j-1 >= 0))  sum += v[i+1][j-1];
      if((i-1 >= 0) && (j+1 < col))  sum += v[i-1][j+1];
      if((i+1 < row) && (j+1 < col)) sum += v[i+1][j+1];

      ChangStateCell(sum, v, i, j);
    }
  }
}

void ChangStateCell(unsigned int sum, std::vector<std::vector<int>>& v, const unsigned int col, const unsigned int row){

  if (sum == 3 )                    v[row][col]=1;
  else if (sum < 2 && sum > 3)      v[row][col]=0;

}
