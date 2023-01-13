#include <iostream>
#include <string>
#ifndef _XXX_
#define _XXX_
#endif
#include "../headers/Vehicule.h"

Vehicule::Vehicule(){
    this->imat = "";
    this->type = "";
    this->etat = "";
    this->number_places = 0;
    this->number_max_places = 0;

}
Vehicule::Vehicule(string imat, string type, string etat, int max_places,int n_places){
    this->imat = imat;
    this->type = type;
    this->etat = etat;
    this->number_places = n_places;
    this->number_max_places = max_places;


}
string Vehicule::getVehiculeType(){
    return this->type;
}
string Vehicule::getVehiculeEtat(){
    return this->etat;
}
string Vehicule::getVehiculeImat(){
    return this->imat;
}
int Vehicule::getNumber_places(){
    return this->number_places;
}
int Vehicule::getNumber_max_places(){
    return this->number_max_places;
}

void Vehicule::setVehiculeType(string type){
    this->type = type;
}
void Vehicule::setVehiculeEtat(string etat){
    this->etat = etat;
}
void Vehicule::setVehiculeImat(string imat){
    this->imat = imat;
}
void Vehicule::setNumber_places(int n){
    this->number_places = n;
}
void Vehicule::setNumber_max_places(int N){
    this->number_max_places = N;
}
void Vehicule::saisir_vehicule(){
    int max_places;
    cout <<"\nSaisie Vehicule"<<endl;
    cout <<"saisir voire immatricule: ";
    cin>>this->imat;
    cout <<"saisir le type de votre vehicule {P: particulier; B:Bus}: ";
    cin>>this->type;
    cout <<"saisir l'etat de votre vehicule{N:noeuf; M:autre} ";
    cin>>this->etat;
    cout <<"saisir le nombre de places maximum: ";
    cin>>this->number_max_places;
     
}
ostream& operator<<(ostream& os, const Vehicule& v){
    os << "MATRICULE: " << v.imat << endl;
    os << "TYPE: "<< v.type << endl;
    os << "ETAT: "<< v.etat << endl;
    os << "NOMBRE DE PLACES: " <<v.number_places <<endl;
    os << "NOMBRE DE PLACES MAX: " << v.number_max_places <<endl;

    return os;
}
bool Vehicule::test_nplaces(){
    if (this->number_places < this->number_max_places){
        return true;
    }
    else{
        return false;
    }
}