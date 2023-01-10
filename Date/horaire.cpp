#include <iostream>
#include <string>
#include "horaire.h"

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
bool operator==( Horaire &h1, Horaire &h2){
    if ((h1.heure == h2.heure)&&(h1.minute == h2.minute)){
        return true;
    }
    else {return false;}
}