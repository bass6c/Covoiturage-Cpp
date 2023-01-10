#include <iostream>
#include <string>
#include "P_carte.h"

using namespace std;
//creer un carte vide
P_carte::P_carte(){
    this->carte_number = "";
    this->date_validate = Date();
    this->code = 0;
}
// creer une carte avec les parametres number,date_validate, code.
P_carte::P_carte(string number, Date date_validate, int code){
    this->carte_number = number;
    this->date_validate = date_validate;
    this->code = code;
}
string P_carte::getCarteNumber(){
    return this->carte_number;
}
Date P_carte::getDateValidate(){
    return this->date_validate;
}
int P_carte::getCode(){
    return this->code;
}
void P_carte::serCarteNumber(string carte){
    this->carte_number = carte;
}
void P_carte::setDateValidate(Date dval){
    this->date_validate = dval;
}
void P_carte::setCode(int code){
    this->code = code;
}
void P_carte::affiche_carte(){
    cout << "Carte info: \n" << endl;
    cout << "Number: " << this->carte_number <<endl;
    cout << "date de validite: ";
    this->date_validate.affiche_date();
    cout << "Code : " << this->code <<endl;
}
void P_carte::payer(){
    string num;
    int j; int mois; int annee;
    cout << " Donner le numero de la carte: "<<endl;
    cin>> num;
    cout << " Donner la date de valite: "<<endl;
    cout << "jour: ";
    cin>>j;
    cout << "mois: ";
    cin>>mois;
    cout << "annee: ";
    cin>>annee;
     
    cout << " Paiement effectuee "<<endl;


    
}