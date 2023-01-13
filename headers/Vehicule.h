#include <iostream>
#include <string>
#ifndef VEHICULE_H
#define VWHICULE_H
#endif
using namespace std;

class Vehicule {
    protected:
    string type;
    string etat;
    string imat;
    int number_places;
    int number_max_places;
    public:
    Vehicule();
    Vehicule(string imat,string type, string etat, int max_places,int n_places=0);
    string getVehiculeType();
    string getVehiculeEtat();
    string getVehiculeImat();
    int getNumber_places();
    int getNumber_max_places();

    void setVehiculeType(string type);
    void setVehiculeEtat(string etat);
    void setVehiculeImat(string imat);
    void setNumber_places(int n);
    void setNumber_max_places(int N);
    void saisir_vehicule();
    

    friend ostream& operator<<(ostream& os, const Vehicule& v);
    bool test_nplaces();
};