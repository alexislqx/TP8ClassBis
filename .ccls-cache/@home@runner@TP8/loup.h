#include <iostream>
#include "animal.h"
using namespace std;
#ifndef loup_h
#define loup_h

class loup:public animal{

public:
   loup(int maxX, int maxY);
   loup(int maxX, int maxY, int a, int b);

   //virtuelle
   virtual void setAttaque();
   virtual void deplace(int maxX, int maxY);
};

#endif
