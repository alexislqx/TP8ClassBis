#include <iostream>
using namespace std;
#include <stdlib.h>
#include "ours.h"


ours::ours(int maxX, int maxY):animal(maxX, maxY){
   this->nom = "ours";
}
ours::ours(int maxX, int maxY, int a, int b):animal( maxX,  maxY,  a,  b){
   this->nom = "ours";
}
void ours::deplace(int maxX, int maxY){

   int _x = rand()%5-2;//- 2 à 2
   int _y = rand()%5-2; //- 2 à 2
  
    int aleatoire1 = rand()%2;// aleatoire pour savoir si abs(x) est 1 ou 2 et le restant sera abs(y)
    int signex = rand()%2;// aleatoire pour savoir determiner le signe de x
    int signey = rand()%2;// aleatoire pour savoir determiner le signe de y
  int potx, poty;
//Determination de valeur absolue du déplacement
  if(aleatoire1){
    potx=1;
    poty=2;
  }
  else{
    potx=2;
    poty=1;
  }
//Determination du signe
  if(signex){
    potx=potx*(-1);
  }
  if(signey){
    poty=poty*(-1);
  }

   //Mise à jour de la position
   this->x = (this->x + potx)%maxX;
   this->y = (this->y + poty)%maxY;
}


void ours::setAttaque(){

   int attaqueAH = 1; //attaque de feuille uniquement
   attaque _typeAttaque(attaqueAH);
   this->typeAttaque = _typeAttaque;
}
