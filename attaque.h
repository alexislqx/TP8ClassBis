#include <iostream>

using namespace std;

#ifndef attaque_h
#define attaque_h

class attaque{
private :
int type; // 0 :pierre, 1: Feuille, 2:Ciseaux

public :
attaque(); //crée une attaque random
attaque(int a); //crée une attaque spécifique
int getTypeAttaque() const;
bool resoudreAttaque(attaque &a) const;
string getNomAttaque() const;

/*
Autre idée
//Virtuelle
virtual void setAttaque()=0;
virtual bool attaque(Animal &a);
virtual void deplace(int maxX, int maxY)=0;
*/


};

#endif


