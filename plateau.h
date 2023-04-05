#ifndef Plateau_h
#define Plateau_h
#include "animal.h"

using namespace std;

//bibliothèque pour utiliser les vecteurs
#include <vector>


class Plateau{
private:
 //taille du plateau
 int maxX;
 int maxY;
 int AnimauxEnVie;
 //vecteur constitué d'animaux
 vector<animal> AnimauxPossibles;


public:
 //constructeur
 Plateau(int maxX, int maxY);
 //accesseur
 int getMaxX () const;
 int getMaxY() const;
 int getAnimauxEnVie() const;
 vector<animal> getAnimauxPossibles() const;
 //fonctions de la classe
 void bagarres();
 void deplacerAnimaux();
 void affichagePlateau() const;
};


#endif
