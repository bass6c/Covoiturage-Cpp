#include <iostream>
#include <string>
#include "../headers/Personne.h"

Personne::Personne(){
    this->name = "";
    this->email = "";
    this->phone_number = "";
    this->trajet = Trajet();
}
Personne::Personne(string nam,string emel,string phone,Trajet t){
    this->name = nam;
    this->email = emel;
    this->phone_number = phone;
    this->trajet = t;
}
string Personne::getName(){
    return this->name;
}
string Personne::getEmail(){
    return this->email;
}
string Personne::getPhone_number(){
    return this->phone_number;
}
Trajet Personne::getTrajet(){
    return this->trajet;
}
void Personne::setName(string name){
    this->name = name;
}
void Personne::setEmail(string email){
    this->email = email;
}
void Personne::setPhone_number(string phone){
    this->phone_number = phone;
}
void Personne::setTrajet(Trajet t){
    this->trajet = t;
}
ostream& operator<<(ostream& os, const Personne& p){
    os << "Nom: " << p.name << endl;
    os << "email: " << p.email << endl;
    os << "telephone: " << p.phone_number << endl;
    return os;

}
Personne::~Personne(){
    
}