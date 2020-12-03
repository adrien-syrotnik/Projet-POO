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

    String^ Nom;
    String^ Prenom;
  
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
    void setMontantTVA(double);
    double getMontantTVA();
    void setMontantTTC(double);
    double getMontantTTC();
    void setMontantHT(double);
    double getMontantHT();
    void setID_Client(int);
    int getID_Client();
    void setID_AdresseLivraison(int);
    int getID_AdresseLivraison();
    void setID_AdresseFacturation(int);
    int getID_AdresseFacturation();

    void setNom(String^);
    String^ getNom();
    void setPrenom(String^);
    String^ getPrenom();


};

