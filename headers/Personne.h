#include <iostream>
#include <string>
#ifndef PRESONNE_H
#define PERSONNE_H
#endif
#include "Trajet.h"
using namespace std;

class Personne{
    protected:
    string name;
    string email;
    string phone_number;
    Trajet trajet;
    public:
    // virtual void virtual_function() = 0;
    Personne();
    Personne(string name,string email,string phone, Trajet t);
    string getName();
    string getEmail();
    string getPhone_number();
    Trajet getTrajet();
    void setName(string name);
    void setEmail(string email);
    void setPhone_number(string phone);
    void setTrajet(Trajet t);
    friend ostream& operator<<(ostream& os, const Personne& p);
    ~Personne();
    virtual int satisfaction(){return 0;} ;

};