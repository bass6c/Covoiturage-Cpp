#include <iostream>
#include <string>
// #include "Personne.h"
#include "Conducteur.h"
// #include "../Vehicule/Vehicule.h"

using namespace std;

Conducteur::Conducteur(){
    Personne();
    this->permis;
    this->vehicule = Vehicule();
}
Conducteur::Conducteur(string name, string email, string phone, string ID, char permis, Vehicule v){
    Personne(name,email,phone);
    this->Id = ID;
    this->permis = permis;
    this->vehicule = v; 
}
string Conducteur::getId_Conducteur(){
    return this->Id;
}
char Conducteur::getPermis(){
    return this->permis;
}
Vehicule Conducteur::getVehicule(){
    return this->vehicule;
}
void Conducteur::setId_conducteur(string id){
    this->Id = id;
}
void Conducteur::setPermis(char p){
    this->permis=p;
}
void Conducteur::setVehicule(Vehicule v){
    this->vehicule = v;
}

void Conducteur::affiche_conducteur(){
    cout << Personne(this->name, this->email, this->phone_number);
    cout << "Permis : " <<this->permis << endl;
    cout << "Vehicule: " << this->vehicule ;
}
bool Conducteur::accepter(Client c){
    bool b = false;
    if (this->vehicule.test_nplaces()){
        cout << "Client acceptee " << endl;
        this->vehicule.setNumber_places(this->vehicule.getNumber_places()+1);
        b = true;
    }
    return b;
}
bool Conducteur::refuser(Client c){
    bool b = false;
    if (this->vehicule.test_nplaces() == false){
        cout << "Voiture pleine !" << endl;
        b = true;
    }
    return b;
}
int Conducteur::satisfaction(){
    string it;
    cout << "Etes vous satisfait de votre trajet y/n" <<endl;
    getline(cin,it);
    if (it=="y"){
        return 1;}
    else {
        return 0;
    }
}