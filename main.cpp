#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Cell.h"
#include "Stats.h"

int main () {

  int column = 20;
  int row = 10;
  unsigned int nbrCell = 80;
  unsigned int turn = 5;
  srand(time(NULL));
  std::vector<int> sumCell;
  std::vector< std::vector<int>> board(row, std::vector<int>(column));
  initializeArray(board, nbrCell);
  for(unsigned int i =0 ; i < turn ; i++){
    displayBoard(board);
    formatDisplay(board);
    sumCell.push_back(countCell(board));
    sumCalcul(board, column, row);
    getchar();
  }
  displayStats(board, sumCell);

  return 0;
}
