#include <iostream>
#include <string>
#ifndef VILLE_H
#define VILLE_H
#endif
using namespace std;

class Ville{
    protected:
    string name;
    string id_ville;
    public:
    Ville();
    Ville(string name);
    string getVilleName();
    string getIdVille();
    void setVilleName(string nam);
    void affiche_ville();
    void saisir_ville();
friend bool operator==( Ville &v1, Ville &v2);
};