#include <iostream>
#include <string>
// #include "Personne.h"
 #ifndef _XXX_
 #define _XXX_
  #endif
#include "../headers/Conducteur.h"
// #include "../Vehicule/Vehicule.h"

using namespace std;

Conducteur::Conducteur(){
    Personne();
    this->permis;
    this->vehicule = Vehicule();
}
Conducteur::Conducteur(string name, string email, string phone, string ID, char permis, Vehicule v,Trajet t){
    Personne(name,email,phone, t);
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
    cout << Personne(this->name, this->email, this->phone_number,this->trajet);
    // cout <<"Name: "<<this->name <<endl;
    // cout <<"email: "<<this->email <<endl;
    // cout <<"phone: "<<this->phone_numbe. <<endl;
    this->trajet.affiche_trajet();
    // cout << "Permis : " <<this->permis << endl;
    // cout << "Vehicule: " << this->vehicule ;
}
Conducteur Conducteur::saisie_conducteur(){
    string name;
    string email;
    string phone;
    string ID;
    char permi;
    Vehicule v; 
    Trajet t;
    
    cout <<"saisissez votre nom: ";
    cin>>name;
    cout <<"\nsaisissez votre email: ";
    cin>>email;
    cout <<"\nsaisissez votre numero de telephone: ";
    cin>>phone;
    cout <<"\nsaisissez votre type de permis: ";
    cin>>permi;
    cout <<"\nsaisissez votre ID: ";
    cin>>ID;
    cout<< "\nSaisie Trajet" <<endl;
    t.saisir_trajet();
    cout<< "\nSaisie Vehicule" <<endl;
    v.saisir_vehicule();
    return Conducteur(name,email,phone,ID,permi,v,t);
}
void Conducteur::accepter(int n){
    
    if (this->vehicule.test_nplaces()){
        // cout << "Client acceptee " << endl;
        this->vehicule.setNumber_places(this->vehicule.getNumber_places()+1);
        
    }
    
}

int Conducteur::satisfaction  (){
    string it;
    string it2;
    string it3;
    int it4;
    cout << "\nEtes vous satisfait de votre trajet ? y/n: " <<endl;
    cin>>it;
    cout << "Est ce que les clients ont ete agreables avec vous ? y/n: " <<endl;
    cin>>it2;
    cout << "Avez-vous quelque chose a signaler concernant un client ? y/n: " <<endl;
    cin>>it3;
    cout << "Noter votre voyage sur 10: " <<endl;
    cin>>it4;
    cout <<"\n Merci!!!\n";


    return 1;
}