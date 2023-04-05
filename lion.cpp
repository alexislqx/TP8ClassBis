#include <iostream>
using namespace std;
#include <stdlib.h>
#include "lion.h"


lion::lion(int maxX, int maxY):animal(maxX, maxY){
   this->nom = "lion";
}
lion::lion(int maxX, int maxY, int a, int b):animal( maxX,  maxY,  a,  b){
   this->nom = "lion";
}
void lion::deplace(int maxX, int maxY){
   
  int _x = rand()%3-1;//- 1 à 1
  int _y = rand()%3-1; //- 1 à 1
  //ne pas avoir _x ou _y = 0 
  do { _x = rand()%3-1;  } while (_x==0);
  do { _y = rand()%3-1;  } while (_y==0);

  //si on dépasse les limites
  this->x = (this->x + _x)%maxX;
  this->y = (this->y + _y)%maxY;
}


void lion::setAttaque(){

   int attaqueAH = rand()%2+1; //feuille ou ciseau 1 ou 2
   attaque _typeAttaque(attaqueAH);
   this->typeAttaque = _typeAttaque;
}
