#include <iostream>
#include <vector>

int countCell(std::vector<std::vector<int>> board){

  std::vector<std::vector<int>>::iterator itRow;
  std::vector<int>::iterator itCol;
  int totalCell = 0;

  for (itRow = board.begin() ; itRow != board.end() ; itRow++){
    for (itCol = itRow->begin() ; itCol != itRow->end() ; itCol++){
      if(*itCol == 1)   totalCell++;
    }
  }

  return totalCell;
}

int greaterNumberCell(std::vector<int> numberCell){
  int greater = 0;
  std::vector<int>::iterator itV;
  for( itV = numberCell.begin() ; itV != numberCell.end() ; itV++){
    if(*itV > greater){
      greater = *itV;
    }
  }

  return greater;
}

int smallestNumberCell(std::vector<int> numberCell){
  std::vector<int>::iterator itV = numberCell.begin();
  int smaller = *itV;
  for( itV = numberCell.begin() ; itV != numberCell.end() ; itV++){
    if(*itV < smaller){
      smaller = *itV;
    }
  }
  return smaller;
}
