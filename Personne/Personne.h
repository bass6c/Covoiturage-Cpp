#include <iostream>
#include <string>
using namespace std;

class Personne{
    protected:
    string name;
    string email;
    string phone_number;
    public:
    Personne();
    Personne(string name,string email,string phone);
    friend ostream& operator<<(ostream& os, const Personne& p);
    virtual int satisfaction();

};