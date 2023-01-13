#include <iostream>
#include <string>
#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H
#endif
#include "Vehicule.h"
#include "Client.h"
// #include "Personne.h"

using namespace std;

class Conducteur:public Personne{
    protected :
    string Id;
    char permis; //type de permis {A;B;...}
    Vehicule vehicule;
    public:
    Conducteur();
    Conducteur(string name,string email,string phone, string ID, char permi,Vehicule v, Trajet t);
    string getId_Conducteur();
    char getPermis();
    Vehicule getVehicule();
    void setId_conducteur(string id);
    void setPermis(char p);
    void setVehicule(Vehicule v);
    void affiche_conducteur();
    Conducteur saisie_conducteur();
    void accepter(int n);
    int satisfaction () override;



};