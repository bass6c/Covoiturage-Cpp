#include <iostream>
#include <string>
#include "Paiement.h"
#include "../Date/Date.h"

using namespace std;

class P_carte:Paiement{
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
    P_carte(string cnumber, Date datev, int cod);
    void affiche_carte();
    void payer();

};
