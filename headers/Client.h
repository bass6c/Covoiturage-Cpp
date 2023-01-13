#include <iostream>
#include <string>
#ifndef CLIENT_H
#define CLIENT_H
#endif
#include "Personne.h"


using namespace std;

class Client:public Personne {
    protected:
    string num_ticket ;
    public:
    Client();
    Client(string namee,string emaill,string phonee, Trajet t);
    string getNum_ticket();
    void setNum_ticket(string num);
    void affiche_client();
    Client saisir_client();
    void choisir_trajet();
    int satisfaction() override;
    void annuler_voyage();

};