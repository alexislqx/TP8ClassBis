#include <iostream>
#include "attaque.h"
using namespace std;

#ifndef Animal_h
#define Animal_h


class animal {
protected : 
string nom;
int x; // abscisse de l'animal
int y; // ordonnée de l'animal
bool vivant;
attaque typeAttaque;

public:
animal(int maxX, int maxY);
animal(int maxX, int maxY, int a, int b);
string getNom() const;
int getX() const;
int getY() const;
bool getVivant() const;
attaque getAttaque()const;
void setVivant(bool v);
bool attack(animal &a);
virtual void setAttaque() const = 0; //virtuelle pure
virtual void deplace(int maxX, int maxY) const = 0; //virtuelle pure
};

#endif
