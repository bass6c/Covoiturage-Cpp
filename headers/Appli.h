#include <iostream>
#include <string>
// #include "Client.h"
#include "Conducteur.h"
// #include "Trajet.h"
using namespace std;

class Appli{
    protected:
    int n_max_client;
    int n_client;
    int n_conducteur;
    int n_max_conducteur;
    Conducteur* Conducteurs;
    Client* Clients;
    public:
    Appli();
    Appli(int n_client, int n_max_clients, int n_conducteur, int n_max_conducteur);
    int getN_clients();
    int getN_max_clients();
    void setN_clients(int n);
    void setN_max_clients(int n);
    int getN_conducteurs();
    int getN_max_conducteurs();
    void setN_conducteurs(int n);
    void setN_max_conducteurs(int n);
    Client* getClient();
    void setClient(Client* M);
    Conducteur* getConducteur();
    void setConducteurs(Conducteur* M);
    int recherche_personnes(Trajet t);
    void add_client(Client c);
    void add_conducteur(Conducteur c);
    // friend Appli operator+(Client c);
    // friend Appli operator+(Conducteur c);
    ~Appli();
    
};