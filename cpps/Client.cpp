#include <iostream>
#include <string>
#include <cstdlib>
 #ifndef _XXX_
 #define _XXX_

#include "../headers/Client.h"
#endif
using namespace std;

Client::Client(){
    Personne();
}
Client::Client(string namee,string emaill,string phonee,Trajet t){
    Personne(namee,emaill,phonee,t);
    this->num_ticket = this->name + to_string(rand()%10);
}
string Client::getNum_ticket(){
    return this->num_ticket;
}
    void Client::setNum_ticket(string num){
        this->num_ticket = num;
    }
void Client::affiche_client(){
    // cout << "Name: "<<this->name;
    // cout << "email: "<<this->email;
    // cout << "Numero de telephone: "<<this->phone_number;
    cout<<*this;
    this->trajet.affiche_trajet();
    // cout << "Numero de ticket " << this->num_ticket << endl;
}
Client Client::saisir_client(){
    string name;
    string email;
    string phone;
    Trajet t;
    
    cout <<"saisissez votre nom: ";
    cin>>name;
    cout <<"\nsaisissez votre email: ";
    cin>>email;
    cout <<"\nsaisissez votre numero de telephone: ";
    cin>>phone;
    cout<< "\n Saisie Trajet" <<endl;
    t.saisir_trajet();
    return Client(name,email,phone,t);
}
void Client::annuler_voyage(){
    string it;
    cout << "voulez-vous annuler votre voyage y/n ?" <<endl;
    getline(cin,it);
    if (it=="y"){
        cout << "Voygage annulé" << endl;
    }
    

}
int Client::satisfaction() {
    string it;
    string it2;
    int it3;
    cout << "\nEtes vous satisfait de votre voyage y/n\n";
    cin>>it;
    cout << "Avez vous ete bien accueilli par votre conducteur y/n\n";
    cin>>it;
    cout << "Noter votre conducteur sur 10: ";
    cin>>it3;
    cout<< "\nMerci!!!\n";
    
    return 1;
}