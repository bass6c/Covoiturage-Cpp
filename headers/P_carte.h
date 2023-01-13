#include <iostream>
#include <string>
#ifndef P_CARTE_H
#define P_CARTE_H
#endif
// #include "Paiement.h"
#include "Date.h"

using namespace std;

class P_carte{
    protected:
    string carte_number;
    Date date_validate;
    int code; 
    public:
    string getCarteNumber();
    Date getDateValidate();
    int getCode();
    void serCarteNumber(string carte);
    void setDateValidate(Date dval);
    void setCode(int code);
    P_carte();
    P_carte(string cnumber, Date datev);
    void affiche_carte();
    void payer();

};
