#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
 #ifndef _XXX_
 #define _XXX_
  #endif
#include "./headers/Appli.h"

// #include "./headers/P_carte.h"
// #include "./headers/P_paylib.h"
#include <cstdlib>
#include <ctime>

int randomInt(int n) {
    //"retourn aleatoirement un entier <n"
    srand(time(0));
    return rand() % n;
}

using namespace std;



// std::vector<Trajet> Liste_trajet;
// void init_saisie(){
//     int numberTrajet = 3;
//     Trajet t;
//     for (int i=0;i<numberTrajet;++i){
//         t.saisir_trajet();
//         Liste_trajet.push_back(t);
//     }

// }
// void init_affich(){
//     cout <<"\nAFFICHAGE DE NOS TRAJETS\n";
//     for (auto it = begin (Liste_trajet); it != end (Liste_trajet); ++it){
//         it->affiche_trajet();
//         cout <<"----------------\n"<<endl;
//     }
// }
int Voyage(){
        Appli Application;
        while(true){
            std::cout << "Etes vous un client ou conducteur?\n";
            std::cout << "1 - Client\n";
            std::cout << "2 - Conducteur\n";
            

            int choice;
            std::cin >> choice;

            if (choice == 1)
            {
                Client client;
                client.saisir_client();
                char pay;
                cout <<"Comment voulez-vous payer "<<endl;
                cout <<"Saisir C pour carte, P pour Paylib" << endl;
                cin>>pay;
                if (pay == 'C'){
                    P_carte p;
                    p.payer();
                }
                else if (pay == 'P'){
                    P_paylib p;
                    p.payer();
                }
                else{cout<<"Saisie incorrect";}

                Application.add_client(client);
            } 
            else if (choice == 2)
            {
                Conducteur conducteur;
                conducteur.saisie_conducteur();
                // Application.add_conducteur(conducteur);
                int n = randomInt(10); //choisir n<4
                if (n == 0){cout << "Il n'y'a personne sur ce trajet ";}
                else{
                    cout << "Il y'a " <<n<<"clients interessee par ce trajet"<<endl;
                    char answer;
                    cout << "Voulez-vous les prendres y/n:";
                    cin>>answer;
                    if (answer == 'y'){
                        conducteur.accepter(n);
                        cout <<"Clients acceptee !";
                    }
                    if (answer == 'n'){
                        cout <<"Clients refuses ";

                    }
                } 
                Application.add_conducteur(conducteur);
                break;
            } 
            else {
                std::cout << "Saisie incorrecte. Entrer 1 ou 2.\n";
            }
            break;
        } 
    return 0;
    }
int affichage(){
    Appli application = Appli();
    Client c1,c2,c3;
    Conducteur C1,C2;
    c1.setName("Brandon");
    c1.setEmail("Brandon@gmail.com");
    c1.setPhone_number("0756780472");
    Date d = Date(12,4,2023);
    Horaire h = Horaire(10,35);
    Trajet t = Trajet(Ville("Toulouse"),Ville("Paris"),d,h,'A');
    c1.setTrajet(t);

    c2.setName("Lucie");
    c2.setEmail("Lucie@gmail.com");
    c2.setPhone_number("0756780472");

    c2.setTrajet(Trajet(Ville("Toulouse"),Ville("Lyon"),d,h,'A'));
    c3.setName("bass");
    c3.setEmail("bass@gmail.com");
    c3.setPhone_number("0656780472");
    c3.setTrajet(Trajet(Ville("Toulouse"),Ville("Marseille"),d,h,'A'));
    
    C1.setName("Conducteur1");
    C1.setEmail("C1@gmail.com");
    C1.setPhone_number("0256780472");

    C2.setName("Conducteur2");
    C2.setEmail("C2@gmail.com");
    C2.setPhone_number("0656780472");
    
    application.add_client(c1); 
    application.add_client(c2); 
    application.add_client(c3); 
    // application.setN_clients(3);
    // application.setN_conducteurs(2);
    
    
    application.add_conducteur(C1); 
    application.add_conducteur(C2); 
    cout<<"\nAFFICHAGE DES CLIENTS: \n";
    for (int i = 0; i<application.getN_clients();++i){
        application.getClient()[i].affiche_client();
    }
    cout<<"\nAFFICHAGE DES CONDUCTEURS: \n";
    for (int i = 0; i<application.getN_conducteurs();++i){
        application.getConducteur()[i].affiche_conducteur();
    }
    application.~Appli(); //destruction of Application
    return 0;
    }

void displayTitle(string title) {
    cout << string(60, '=') << endl;
    cout << "= " << left << setw(58) << title << " =" << endl;
    cout << string(60, '=') << endl;
}
void displayOption(string option){
    cout <<"\t "<<option<<endl;
}
void displayTrajet(){
        string Trajet1,Trajet2,Trajet3,Trajet4;
        Trajet1 = " 1:Toulouse-Paris: 100 euros";
        Trajet2 = "2: Toulouse-Lyon: 75 euros";
        Trajet3 = "3: Toulouse-Marseille: 75 euros";
        Trajet4 = "4: Toulouse-Cahors: 200 euros";
        displayTitle("Bienvenue sur notre appli de covoiturage.");
        cout <<"\n Choisissez un trajet \n";
        displayOption(Trajet1);
        displayOption(Trajet2);
        displayOption(Trajet3);
        displayOption(Trajet4);
        int choice;
        cout << "Choisissez votre trajet entre 1 et 4: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Trajet 1" << endl;
            // do something
            Voyage();
        } 
        else if (choice == 2) {
            cout << " Trajet 2" << endl;
            // do something
            Voyage();
        } 
        else if (choice == 3) {
            cout << "Trajet 3" << endl;
            // do something
            Voyage();
        } 
        else if (choice == 4) {
            cout << "Trajet 4" << endl;
            Voyage();
            // do something
        } 
        else {
            cout << "Choix invalide" << endl;
        }

        
    }

int chooseOption() {
    //choisir une option entre 1 et 2
    int choice;
    do {
        std::cout << "Choisissez une option svp (1 ou 2): ";
        std::cin >> choice;
    } while (choice != 1 && choice != 2);
    return choice;
}

int main() {
    displayOption("1: Voyage");
    displayOption("2: Consulter le Reseau");
    int option = chooseOption();
    if (option == 1) {
        displayOption("1: Choisir un trajet");
        displayOption("2: Noter votre voyage");
        int option = chooseOption();
        if (option == 1) {
            std::cout << "1: Choisir un trajet" << std::endl;
            //--------do something
                displayTrajet();
            }   
        else if (option == 2) {
            std::cout << "2: Noter votre voyage" << std::endl;
            // Do something for option 2---------------------------------
            displayOption("1: Client");
            displayOption("2: Conducteur");
            int option = chooseOption();
            if (option == 1){
                Client c;
                int i = c.satisfaction();

            }
            else if (option == 2){
                Conducteur c;
                int i = c.satisfaction();

            }
            else{
                cout <<"Saisie incorrect\n";
            }

            }
        } 
    else if (option == 2) {
        std::cout << "\nAffichage du reseau: "<< std::endl;
        affichage();
        // Do something for option 2
    }
    return 0;
}



