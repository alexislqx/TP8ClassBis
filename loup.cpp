#include <iostream>
using namespace std;
#include <stdlib.h>
#include "loup.h"

//Position aléatoire
loup::loup(int maxX, int maxY):animal(maxX, maxY){
   this->nom = "loup";
}
//Position selon paramètre
loup::loup(int maxX, int maxY, int a, int b):animal( maxX,  maxY,  a,  b){
   this->nom = "loup";
}

void loup::deplace(int maxX, int maxY){


   int _x = rand()%maxX;//random selon max du plateau
   int _y = rand()%maxY; //random selon max du plateau

   //acutalisation de la position
   this->x = (this->x + _x)%maxX;
   this->y = (this->y + _y)%maxY;
}


void loup::setAttaque(){

   int attaqueAH = rand()%3; //toutes les attaques
   attaque _typeAttaque(attaqueAH);
   this->typeAttaque = _typeAttaque;
}
