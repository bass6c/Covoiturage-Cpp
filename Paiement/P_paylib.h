#include <iostream>
#include <string>
#include "Paiement.h"

using namespace std;


class P_paylib:Paiement{
	protected:
	string phone_number;
	public:
	P_paylib();
	P_paylib(string p_number);
    string getPhoneNumber();
    void setPhoneNumber(string phone);
	void affiche_number();
	void payer();
};