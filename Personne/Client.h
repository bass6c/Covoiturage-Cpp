#include <iostream>
#include <string>
#include "Personne.h"

using namespace std;

class Client:public Personne {
    protected:
    string num_ticket ;
    public:
    Client();
    Client(string namee,string emaill,string phonee, string num_ticket = "");
    void affiche_client(Client c);
    void choisir_trajet();
    int satisfaction();
    void annuler_voyage();

};