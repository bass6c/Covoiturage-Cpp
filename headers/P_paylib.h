#include <iostream>
#include <string>
#ifndef P_PAYLIB_H
#define P_PAYLIB_H
#endif
// #include "Paiement.h"

using namespace std;


class P_paylib{
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