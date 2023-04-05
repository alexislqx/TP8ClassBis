#include <iostream>
#include "animal.h"
using namespace std;

#ifndef pierre_h
#define pierre_h

class pierre:public animal{


public:
   pierre(int maxX, int maxY);
   pierre(int maxX, int maxY, int a, int b);

   //virtuelle
  void setAttaque() const;
  void deplace(int maxX, int maxY) const;
};

#endif
