#include <iostream>
#include "animal.h"
using namespace std;
#ifndef ours_h
#define ours_h

class ours:public animal{


public:
   ours(int maxX, int maxY);
   ours(int maxX, int maxY, int a, int b);

   //virtuelle
   virtual void setAttaque();
   virtual void deplace(int maxX, int maxY);
};

#endif
