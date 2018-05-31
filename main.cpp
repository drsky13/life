#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Cell.h"
#include "Stats.h"

int main () {

  int column = 5;
   int row = 5;
  unsigned int nbrCell = 8;
  unsigned int turn = 5;
  srand(time(NULL));
  std::vector<int> sumCell;
  std::vector< std::vector<int>> v(row, std::vector<int>(column));
  initializeArray(v, nbrCell);
  for(unsigned int i =0 ; i < turn ; i++){
    displayBoard(v);
    formatDisplay(v);
    sumCalcul(v, column, row);
    sumCell.push_back(countCell(v));
    getchar();
  }
  std::cout << "Plus grand nombre de cellules : " << greaterNumberCell(sumCell) << std::endl;

  return 0;
}
