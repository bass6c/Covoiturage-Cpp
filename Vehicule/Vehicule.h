#include <iostream>
#include <string>
using namespace std;

class Vehicule {
    protected:
    string type;
    string etat;
    string imat;
    int number_places;
    int number_max_places;
    public:
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
    Vehicule();
    Vehicule(string imat,string type, string etat, int n_places, int max_places);

    friend ostream& operator<<(ostream& os, const Vehicule& v);
    bool test_nplaces();
};