#include <iostream>
#include <string>

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
friend bool operator==( Ville &v1, Ville &v2);
};