#include <iostream>
using namespace std;
#include <stdlib.h>
#include "pierre.h"


pierre::pierre(int maxX, int maxY):animal(maxX, maxY){
   this->nom = "pierre";
}
pierre::pierre(int maxX, int maxY, int a, int b):animal( maxX,  maxY,  a,  b){
   this->nom = "pierre";
}
void pierre::deplace(int maxX, int maxY){
//ne bouge pas
}

void pierre::setAttaque(){
  
   int attaqueAH = 0; //pierre
   attaque _typeAttaque(attaqueAH);
   this->typeAttaque = _typeAttaque;
}
