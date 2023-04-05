#include <iostream>
#include "animal.h"
using namespace std;
#ifndef lion_h
#define lion_h


class lion:public animal{
public:
   lion(int maxX, int maxY);
   lion(int maxX, int maxY, int a, int b);
   //virtuelle
   virtual void setAttaque();
   virtual void deplace(int maxX, int maxY);
};

#endif