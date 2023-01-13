#include <iostream>
#include <string>

 
#include "../headers/Date.h"

using namespace std;
bool TestAnneeBiss(int annee) {
    // tester si l'annee est bissextile
    if (annee % 4 != 0) {
        return false;
    } else if (annee % 100 != 0) {
        return true;
    } else if (annee % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

bool TestDate(int jour, int mois, int annee) {
    // test si la date saisie est valide
    if (mois < 1 || mois > 12) {
        cout <<"Saisie incorrect";
        return false;
    }
    if (jour < 1) {
        cout <<"Saisie incorrect";
        return false;
    }
    if (mois == 2) {
        if (TestAnneeBiss(annee)) {
            if (jour > 29) {
                cout <<"Saisie incorrect";
                return false;
            }
        } else {
            if (jour > 28) {
                cout <<"Saisie incorrect";
                return false;
            }
        }
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        if (jour > 30) {
            cout <<"Saisie incorrect";
            return false;
        }
    } else {
        if (jour > 31) {
            cout <<"Saisie incorrect";
            return false;
        }
    }
    return true;
}


Date::Date(){
    int jour = 0;
    int mois = 0;
    int annee = 0;

}
Date::Date(int jour, int mois, int annee){
    if (TestDate(jour,mois,annee)){
        this->jour = jour;
        this->mois = mois;
        this->annee - annee; 
    }
    else {cout <<"Saisie incorrect";}
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
    cout << this->annee<<"\n";
}
void Date::saisir_date(){
    int j,m,a;
    cout <<"Saisir la date \n";
    cout << "le jour: ";
    cin>>j;
    cout << "le mois: ";
    cin>>m;
    cout << "l'annee: ";
    cin>>a;
    if (TestDate(j,m,a)){
        this->jour = j;
        this->mois = m;
        this->annee;
    }

}
bool operator==( Date &d1, Date &d2){
    if ((d1.jour == d2.jour)&&(d1.mois == d2.mois)&&(d1.annee == d2.annee)){
        return true;
    }
    else {return false;}
}