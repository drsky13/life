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
  std::vector<std::vector<int>>::iterator itRow;
  std::vector<int>::iterator itCol;

  for (itRow = v.begin() ; itRow != v.end() ; itRow++){
    for (itCol = itRow->begin() ; itCol != itRow->end() ; itCol++){
      std::cout << *itCol;
    }
    std::cout << std::endl;
  }


  return 0;
}
