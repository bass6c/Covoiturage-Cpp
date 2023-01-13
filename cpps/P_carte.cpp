#include <iostream>
#include <string>
#ifndef _XXX_
#define _XXX_
#endif
#include "../headers/P_carte.h"
int TestCode3chiffres() {
    while (true) {
        std::string input;
        std::cout << "Entrer le code a 3 chiffres: ";
        cin>>input;

        if (input.length() != 3) {
            std::cout << "Erreur saisi 3 chiffres svp !" << std::endl;
            continue;
        }
        int num;
        try {
            num = std::stoi(input); //Convertir la saisie en entier
        } catch (std::exception e) { //if any exception occurs during conversion
            std::cout << "Erreur : Saisir 3 chiffres: " << std::endl;
            continue;
        }
        if (num >= 100 && num <= 999) {
            return num;
        } else {
            std::cout << "Erreur : saisir 3 chiffres" << std::endl;
        }
    }
}
string TestCardNumber(string cardNumber) {
    // string cardNumber;
    cout << "Entrer votre carte a 16 chiffres sans espaces: \n"<<endl;
    cin>>cardNumber;
    if (cardNumber.length() != 16) {
        std::cout << "Carte invalide" << std::endl;
        
    }
    
    return cardNumber;
    
}

using namespace std;
//creer un carte vide
P_carte::P_carte(){
    this->carte_number = "";
    this->date_validate = Date();
    this->code = 0;
}
// creer une carte avec les parametres number,date_validate, code.
P_carte::P_carte(string number, Date date_validate){
    this->carte_number = TestCardNumber(number);
    this->date_validate = date_validate;
    this->code = TestCode3chiffres();
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
    string carte = TestCardNumber(num);
    // cin>> num;
    cout << " Donner la date de valite: "<<endl;
    cout << "jour: ";
    cin>>j;
    cout << "mois: ";
    cin>>mois;
    cout << "annee: ";
    cin>>annee;
    Date dateval = Date(j,mois,annee);
    int code = TestCode3chiffres();
     
    cout << " Paiement effectuee "<<endl;


    
}