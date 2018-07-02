#include <iostream>
#include <vector>
#include "Cel.h"

class Board{

public :
  using vecBoard = std::vector<Cel>;

  Board() : width(0), height(0), lifeBoard(height, vecBoard(width)) {};
  Board(int Iwidth, int Iheight) :
    width(Iwidth), height(Iheight), lifeBoard(height, vecBoard(width)) {};

private :
  int width;
  int height;
  std::vector<vecBoard> lifeBoard;
//represent the number of cell in board for initialisation
  static unsigned int nbrCell;

};
