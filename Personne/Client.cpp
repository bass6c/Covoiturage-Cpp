#include <iostream>
#include <string>
#include <cstdlib>
#include "Client.h"
using namespace std;

Client::Client(){
    Personne();
}
Client::Client(string namee,string emaill,string phonee,string num_ticket = ""){
    Personne(namee,emaill,phonee);
    this->num_ticket = this->name + to_string(rand()%10);
}
string Client::getNum_ticket(){
    return this->num_ticket;
}
    void Client::setNum_ticket(string num){
        this->num_ticket = num;
    }
void Client::affiche_client(Client c){
    cout << c << endl;
    cout << "Numero de ticket " << c.num_ticket << endl;
}
void Client::annuler_voyage(){
    string it;
    cout << "voulez-vous annuler votre voyage y/n ?" <<endl;
    getline(cin,it);
    if (it=="y"){
        cout << "Voygage annulé" << endl;
    }
    

}
int Client::satisfaction(){
    string it;
    cout << "Etes vous satisfait de votre voyage y/n" <<endl;
    getline(cin,it);
    if (it=="y"){
        return 1;}
    else {
        return 0;
    }
}