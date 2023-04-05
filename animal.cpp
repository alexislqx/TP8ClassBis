#include <iostream>
#include "animal.h"
#include <random>
using namespace std;
//Constructeur avec position aléatoire
animal::animal(int maxX, int maxY){
  this->vivant = true;
  this->x = rand()%maxX;
  this->y = rand()%maxY;
}
//Constructeur avec position défini
animal::animal(int maxX, int maxY, int a, int b){
  if (a<maxX && a>=0 && b<maxY && b>=0){
    this->x = a;
    this->y = b;
    this->vivant = true;
  }
  else{
    cout<<"L'animal :"<<this->getNom()<<"n'a pas été ajouter sur la taille du plateau définit"<<endl;
  }
}
//Accesseurs
string animal::getNom() const{
  return this->nom;
}
int animal::getX() const{
  return this->x;
}
int animal::getY() const{
  return this->y;
}
bool animal::getVivant() const{
  return this->vivant;
}
attaque animal::getAttaque() const{
  return this->typeAttaque;
}
void animal::setVivant(bool v) {
  this->vivant = v;
}
bool animal::attack(animal &a){
    //set des attaques d'animaux
   this->setAttaque();
   a.setAttaque();
  
   //get de l'attaque de a et de l'animal
   attaque attaque_a = a.getAttaque();
   attaque attaque_animal = this->typeAttaque;


   //comparaison des attaques de l'animal et de l'adversaire
   bool res = attaque_animal.resoudreAttaque(attaque_a);
  
   if(res==1){
       a.setVivant(false);//l'adversaire est mort
       cout<<this->getNom()<<"a gagné contre "<<a.getNom()<<endl;
   }
  
   if(res==0){
       this->setVivant(false); //l'animal meurt
       cout<<a.getNom()<<"a gagné contre "<<this->getNom()<<endl;
   }
    return res;
}