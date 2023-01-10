#include <iostream>
#include <string>
#include "../Vehicule/Vehicule.h"
#include "Client.h"
#include "Personne.h"

using namespace std;

class Conducteur:public Personne{
    protected :
    string Id;
    char permis; //type de permis {A;B;...}
    Vehicule vehicule;
    public:
    Conducteur();
    Conducteur(string name,string email,string phone, string ID, char permi,Vehicule v);
    string getId_Conducteur();
    char getPermis();
    Vehicule getVehicule();
    void setId_conducteur(string id);
    void setPermis(char p);
    void setVehicule(Vehicule v);
    void affiche_conducteur();
    bool accepter(Client c);
    bool refuser(Client c);
    int satisfaction ();



};