#include <iostream>
#include "loup.h"
#include "pierre.h"
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
//Implémentation du jeu
  
  pierre atri(10,10);
  /*
  char a;
  bool fin= false;
  int nbrcase = largeurPlateau*longueurPlateau;
  int nbranimal = nbr/8;//25% du jeu rempli avec 2 animaux
  list<animal*> ListeAnimaux;

  for (int i=0; i<nbranimal ; i++){
    ListeAnimaux.push_back(new loup(longueurPlateau,largeurPlateau));
  ListeAnimaux.push_back(new pierre(longueurPlateau,largeurPlateau));
  }

  
  do {


    cout<<"Continuer la partie ? [O/N] : "<<endl;
    cin>>a;
  }while(a=='O'|| a=='O'|| !fin );
cout<<"Fin du jeux relancer le programme pour recommencer une partie"<<endl;
  */
  
}