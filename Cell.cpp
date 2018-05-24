#include <iostream>
#include <string>
#include <vector>
#include <time.h>

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
