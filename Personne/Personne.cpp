#include <iostream>
#include <string>
#include "Personne.h"

Personne::Personne(){
    this->name = "";
    this->email = "";
    this->phone_number = "";
}
Personne::Personne(string nam,string emel,string phone){
    this->name = nam;
    this->email = emel;
    this->phone_number = phone;
}
ostream& operator<<(ostream& os, const Personne& p){
    os << "Nom: " << p.name << endl;
    os << "email: " << p.email << endl;
    os << "telephone: " << p.phone_number << endl;
    return os;

}
