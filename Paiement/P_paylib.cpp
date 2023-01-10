#include <iostream>
#include <string>
#include "P_paylib.h"


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
    string p_num ;
    cout << "donner votre numero de telephone associe a votre compte bancaire : " << endl ;
    cin>> p_num;
    cout <<"Paiement effectuee"<<endl;

}