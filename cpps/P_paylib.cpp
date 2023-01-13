#include <iostream>
#include <string>
 #ifndef _XXX_
 #define _XXX_
  #endif
#include "../headers/P_paylib.h"

string Testphonenumber() {
    string input;
    cout << "Entrer votre numero de telephone a 10 chiffres: ";
    cin>>input;
    if (input.length() == 10) {
        return input;
    } else {
        return "Saisie incorrect";
    }
}

using namespace std;


P_paylib::P_paylib(){
    this-> phone_number="";
}

P_paylib::P_paylib(string phone_number){
    this-> phone_number=phone_number;
}
string P_paylib::getPhoneNumber(){
    return this->phone_number;
}
void P_paylib::setPhoneNumber(string phone){
    this->phone_number = phone;
}

void P_paylib::affiche_number(){
    cout << "information paylib: \n"<< endl;
    cout << "phone number :" <<this-> phone_number << endl ;
}

void P_paylib::payer(){
    string p_num = Testphonenumber();
    cout <<"Paiement effectuee"<<endl;

}