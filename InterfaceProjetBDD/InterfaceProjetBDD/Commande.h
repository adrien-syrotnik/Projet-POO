#pragma once
using namespace System::Data;
using namespace System;

ref class Commande {
private:
    int ID;
    String^ Reference;
    String^ DatePrevueLivraison;
    String^ DateReglementEnregistre;
    String^ DateAchatCommande;
    double MontantTVA;
    double MontantTTC;
    double MontantHT;
    int ID_Client;
    int ID_AdresseLivraison;
    int ID_AdresseFacturation;
  
public:
    Commande();
    Commande(DataRow^ DR);
    void setID(int);
    int getID();
    void setReference(String^);
    String^ getReference();
    String^ getDatePrevueLivraison();
    void setDatePrevueLivraison(String^ prenom);
    String^ getDateReglementEnregistre();
    void setDateReglementEnregistre(String^ Date);
    String^ getDateAchatCommande();
    void setDateAchatCommande(String^ Date);
    void setMontantTVA(int);
    int getMontantTVA();
    void setMontantTTC(int);
    int getMontantTTC();
    void setMontantHT(int);
    int getMontantHT();
    void setID_Client(int);
    int getID_Client();
    void setID_AdresseLivraison(int);
    int getID_AdresseLivraison();
    void setID_AdresseFacturation(int);
    int getID_AdresseFacturation();

    


};

