#include <iostream>
#include <string>
#ifndef _XXX_
#define _XXX_
#endif
#include "../headers/horaire.h"

using namespace std;

Horaire::Horaire(){
    this->heure = 0;
    this->minute = 0;
}
Horaire::Horaire(int h_depart, int minute){
    this->heure = h_depart;
    this->minute = minute;
}
int Horaire::getHeure(){
    return this->heure;
}
int Horaire::getMinute(){
    return this->minute;
}
void Horaire::setHeure(int h){
    this->heure = h;
}
void Horaire::setMinute(int m){
    this->minute = m;
}
void Horaire::affiche_horaire(){
    cout << " " << this->heure;
    cout <<"h";
    cout <<this->minute << endl;
}
void Horaire::saisir_horaire(){
    cout <<"Saisie Horaire: \n"<<endl;
    cout << "Entrer l'heure : ";
    cin>>this->heure;
    cout << "Entrer la minute : ";
    cin>>this->minute;
}
bool operator==( Horaire &h1, Horaire &h2){
    if ((h1.getHeure() == h2.getHeure())&&(h1.getMinute() == h2.getMinute())){
        return true;
    }
    else {return false;}
}