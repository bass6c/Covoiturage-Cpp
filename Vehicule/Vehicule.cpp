#include <iostream>
#include <string>
#include "Vehicule.h"

Vehicule::Vehicule(){
    this->imat = "";
    this->type = "";
    this->etat = "";
    this->number_places = 0;
    this->number_max_places = 0;

}
Vehicule::Vehicule(string imat, string type, string etat, int n_places, int max_places){
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
    this->imat;
}
int Vehicule::getNumber_places(){
    this->number_places;
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