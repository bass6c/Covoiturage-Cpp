#include <iostream>
#include <string>
#include "Ville.h"

using namespace std;

Ville::Ville(){
    this->name = "";
    this->id_ville = "";
}
Ville::Ville(string name){
    this->name = name;
    this->id_ville = name + to_string(rand()%10);
}
string Ville::getVilleName(){
    return this->name;
}
string Ville::getIdVille(){
    return this->id_ville;
}
void Ville::setVilleName(string nam){
    this->name = nam;
}
void Ville::affiche_ville(){
    cout <<" "<<this->name;
}
bool operator==( Ville &v1, Ville &v2){
    if (v1.id_ville == v2.id_ville){
        return true;
    }
    else{return false;}
}
