#include <iostream>
#include <vector>

class Cel{

public :
  Cel() : vie(0), sum(0) {};

  int getVie()  { return vie; }
  int getSum()  { return sum; }
  void setVie(int Cvie)  { vie = Cvie; }
  void setSum(int Csum)  { sum = Csum; }


private :
  int vie;
  int sum;
};
