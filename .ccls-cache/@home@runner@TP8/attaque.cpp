#include <iostream>
#include "attaque.h"
#include <random>
using namespace std;

#define Pierre 0
#define Feuille 1
#define Ciseaux 2

// Attaque random
attaque::attaque(){
  int val = rand()%3; // val [0,1,2]
  this->type = val;
}
// Attaque spécifique
attaque::attaque(int a){
  this->type =a;
}
//Recupere le type d'attaque
int attaque::getTypeAttaque() const{
  return this->type;
}


bool attaque::resoudreAttaque(attaque &a) const {
bool res=false;
//machine à état
switch(this->type) {
  /// PIERRE /// 
  case Pierre :
  //pierre vs pierre
  if (a.getTypeAttaque() == 0) {
   int aleatoire =rand()%2+1; // 1 ou 2 (feuille ou ciseaux)
   if (aleatoire == 1) return false;
   if (aleatoire == 2 ) return true;
  }
  //pierre vs feuille
  if (a.getTypeAttaque() == 1) {
    res = false;
  }
  //pierre vs Ciseaux
 if (a.getTypeAttaque() == 2) {
    res = true;
  }
  break;


   /// FEUILLE /// 
  case Feuille :
  //Feuille vs pierre
  if (a.getTypeAttaque() == 0) {
   res = true;
  }
  //Feuille vs feuille
  if (a.getTypeAttaque() == 1) {
   int alea =rand()%2; // disons dans ce cas que 0 est une pierre et 1 un ciseaux
   if (alea == 0) return true;
   if (alea == 1) return false;
  }
 //feuille vs Ciseaux
 if (a.getTypeAttaque() == 2) {
    res = false;
  }
 break;


 /// CISEAUX /// 
  case Ciseaux :
 //Ciseaux vs pierre
  if (a.getTypeAttaque() == 0) {
   res = false;
  }
  //Ciseaux vs feuille
  if (a.getTypeAttaque() == 1) {
    res=true;
  }
 //Ciseaux vs Ciseaux
 if (a.getTypeAttaque() == 2) {
   int alea =rand()%2;// 0 ou 1 (pierre ou feuille)
   if (alea == 0) return false;
   if (alea == 1 ) return true;   
  }
  break;
  }
  return res;
}



string attaque::getNomAttaque() const{
     string nom;
   if(this->type == 0){
       nom = "Pierre";
   }
   if(this->type == 1){
       nom = "Feuille";
   }
   if(this->type == 2){
       nom = "Ciseaux";
   }
   return nom;
}

