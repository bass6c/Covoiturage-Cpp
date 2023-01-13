#include <iostream>
#include <string>
#ifndef HORAIRE_H
#define HORAIRE_H
#endif
using namespace std;

class Horaire{
    protected:
    int heure;
    int minute;
    public:
    Horaire();
    Horaire(int h_depart,int h_arrivee);
    int getHeure();
    int getMinute();
    void setHeure(int h);
    void setMinute(int m);
    void affiche_horaire();
    void saisir_horaire();
    friend bool operator==( Horaire &h1, Horaire &h2);
};