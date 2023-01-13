#include <iostream>
#include <string>
 #ifndef _XXX_
 #define _XXX_
  #endif
#include "../headers/Appli.h"
// #include "../Personne/Client.h"
using namespace std;

Appli::Appli(){
    this->n_client = 0;
    this->n_max_client = 10;
    this->n_conducteur = 0;
    this->n_max_conducteur = 10;
    this->Clients = new Client[n_max_client];
    this->Conducteurs = new Conducteur[n_max_conducteur];
}
Appli::Appli(int n_client, int n_max_clients, int n_conducteur, int n_max_conducteur){
   this->n_client = n_client;
    this->n_max_client = n_max_clients;
    this->n_conducteur = n_conducteur;
    this->n_max_conducteur = n_max_conducteur;
    this->Clients = new Client[n_max_clients];
    this->Conducteurs = new Conducteur[n_max_conducteur];
}
int Appli::getN_clients(){
    return this->n_client;
}
int Appli::getN_max_clients(){
    return this->n_max_client;
}
void Appli::setN_clients(int n){
    this->n_client = n;
}
void Appli::setN_max_clients(int n){
    this->n_max_client = n;
}
int Appli::getN_conducteurs(){
    return this->n_conducteur;
}
int Appli::getN_max_conducteurs(){
    return this->n_max_conducteur;
}
void Appli::setN_conducteurs(int n){
    this->n_conducteur = n;
}
void Appli::setN_max_conducteurs(int n){
    this->n_max_conducteur = n;
}
Client* Appli::getClient(){
    return this->Clients;
}
void Appli::setClient(Client* M){
    this->Clients = M;
}
Conducteur* Appli::getConducteur(){
    return this->Conducteurs; 
}
void Appli::setConducteurs(Conducteur* M){
    this->Conducteurs = M;
}

int  Appli::recherche_personnes(Trajet t){
    int temp = 0;
    cout <<"\nClients: "<<endl;
    for (int i=0; i < this->n_client; ++i){
        Trajet t2 = this->Clients[i].getTrajet();
        if (t2 == t){
            cout<<this->Clients;
            temp+=1;


        }
        cout <<"\n Conducteurs: "<<endl;
    }
    for (int i=0; i < this->n_conducteur; ++i){
        Trajet t2 = this->Conducteurs[i].getTrajet();
        if (t2 == t){
            cout<<this->Conducteurs;
            temp+=1;


        }
    }
    return temp;
}

void  Appli::add_client(Client c){
     if (this->n_client < this->n_max_client) {
            this->Clients[n_client] = c;
            this->n_client++;
        }
        // return *this;

}
void  Appli::add_conducteur(Conducteur c){
     if (this->n_conducteur < this->n_max_conducteur) {
            this->Conducteurs[n_conducteur] = c;
            this->n_conducteur++;
        }
        // return *this;

}


Appli::~Appli(){
    delete this->Clients;
    delete this->Conducteurs;
}

