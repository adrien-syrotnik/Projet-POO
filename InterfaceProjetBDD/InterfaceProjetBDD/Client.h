#pragma once



using namespace System::Data;
using namespace System;

ref class Client {
private:
    int id;
    String^ Nom;
    String^ Prenom;
    String^ DateAnniversaire;
    String^ DatePremierAchat;
    bool Supprimer;
public:
    Client();
    Client(DataRow^ DR);
    void setID(int);
    int getID();
    void setNom(String^);
    String^ getNom();
    String^ getPrenom();
    void setPrenom(String^ prenom);
    String^ getDateAnniversaire();
    void setDateAnniversaire(String^ prenom);
    String^ getDatePremierAchat();
    void setDatePremierAchat(String^ prenom);

    
};

