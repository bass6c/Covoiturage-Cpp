#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

Date::Date(){
    int jour = 0;
    int mois = 0;
    int annee = 0;

}
Date::Date(int jour, int mois, int annee){
    if ((jour > 0) && (jour < 31)){
        this->jour = jour;
    }
    else {cout << "saisie de mois incorrect "<<endl;}
    if ((mois > 0) && (mois < 12)){
        this->mois = mois;
    }
    else {cout << "saisie de mois incorrect "<<endl;}
    this->annee = annee;
}
int Date::getJour(){
    return this->jour;
}
int Date::getMois(){
    return this->mois;
}
int Date::getAnnee(){
    return this->annee;
}
void Date::setJour(int j){
    this->jour = j;
}
void Date::setMois(int m){
    this->mois = m;
}
void Date::setAnnee(int ann){
    this->annee = ann;
}
void Date::affiche_date(){
    cout << this->jour;
    cout<<"/";
    cout << this->mois;
    cout<<"/";
    cout << this->annee;
}
bool operator==( Date &d1, Date &d2){
    if ((d1.jour == d2.jour)&&(d1.mois == d2.mois)&&(d1.annee == d2.annee)){
        return true;
    }
    else {return false;}
}