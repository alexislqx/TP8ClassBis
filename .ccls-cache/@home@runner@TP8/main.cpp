#include <iostream>
#include "attaque.h"
#include <random>
using namespace std;

#define largeurPlateau 10
#define longueurPlateau 10


int main() {

  //Test de la classe attaque
  attaque feuille(1);
  attaque ciseau(2);
  if(ciseau.resoudreAttaque(feuille)){
    cout<<"Ciseaux à gagné"<<endl;
  }
  else{
    cout<<"Ciseaux à perdu"<<endl;
  }
char a;
  do {
    
  }while(a=='O'|| a=='O'|| );

  
  
}