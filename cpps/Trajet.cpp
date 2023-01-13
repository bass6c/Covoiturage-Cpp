#include <iostream>
#include <string>
#ifndef _XXX_
#define _XXX_
#endif
#include "../headers/Trajet.h"

using namespace std;

Trajet::Trajet(){
    Ville origine = Ville();
    Ville destination = Ville();
    Date date = Date();
    Horaire horaire = Horaire();
    char sens;
}
Trajet::Trajet(Ville origine, Ville destination, Date d, Horaire h,char s){
    this->origine = origine;
    this->destination = destination;
    this->date = d;
    this->horaire = h;
    this->sens = s;
}
Ville Trajet::getDestination(){
    return this->destination;
}
Ville Trajet::getOrigine(){
    return this->origine;
}
void Trajet::setDestination(Ville v){
    this->destination = v;
}
void Trajet::setOrigine(Ville v){
    this->origine = v;
}
Date Trajet::getDate(){
    return this->date;
}
void Trajet::setDate(Date d){
    this->date = d;
}
Horaire Trajet::getHoraire(){
    return this->horaire;
}
void Trajet::setHoraire(Horaire h){
    this->horaire = h;
}
char Trajet::getSens(){
    return this->sens;
}
void Trajet::setSens(char A){
    this->sens = A;
}
void Trajet::affiche_trajet(){
    cout <<"Affichage Trajet: \n"<<endl;
    this->origine.affiche_ville();
    cout << " - ";
    this->destination.affiche_ville();
    this->horaire.affiche_horaire();
    this->date.affiche_date();
    cout << "Sens: "<<this->sens<<endl;

}
void Trajet::saisir_trajet(){
    cout<<"Origine: \n";
    this->origine.saisir_ville();
    cout<<"Destination: \n";
    this->destination.saisir_ville();
    this->horaire.saisir_horaire();
    this->date.saisir_date();
    cout << "Entrer le sens de votre trajet (A:allée, D:double)";
    cin>>this->sens;
}
bool operator==( Trajet &t1, Trajet &t2){
    Horaire a = t1.getHoraire();
    Horaire b = t2.getHoraire();
    if ((t1.origine == t2.origine)&&(t1.destination == t2.destination)&&(t1.date == t2.date)&&(&a == &b)&&(t1.sens == t2.sens)){
        return true;
    }
    else{return false;}
}

