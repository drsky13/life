#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Cell.h"

int main () {

  int column = 20;
   int row = 20;
  unsigned int nbrCell = 100;
  unsigned int turn = 50;
  srand(time(NULL));

  std::vector< std::vector<int>> v(row, std::vector<int>(column));
  initializeArray(v, nbrCell);
  for(unsigned int i =0 ; i < turn ; i++){
    displayBoard(v);
    formatDisplay(v);
    sumCalcul(v, column, row);
    getchar();
  }

  return 0;
}
