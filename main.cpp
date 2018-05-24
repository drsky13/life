#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Cell.h"

int main () {

  unsigned int column = 15;
  unsigned int row = 10;
  unsigned int nbrCell = 20;

  srand(time(NULL));

  std::vector< std::vector<int>> v(row, std::vector<int>(column));

  initializeArray(v, nbrCell);
  displayBoard(v);
  getchar();
  return 0;
}
