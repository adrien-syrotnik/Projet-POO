#pragma once



using namespace System::Data;
using namespace System;

ref class Personnel {
private:
    int ID;
    String^ Nom;
    String^ Prenom;
    String^ DateEmbauche;
    int ID_Superieur;
    int ID_Adresse;
public:
    Personnel();
    Personnel(Personnel^ P);
    Personnel(DataRow^ DR);
    void setID(int);
    int getID();
    void setNom(String^);
    String^ getNom();
    String^ getPrenom();
    void setPrenom(String^ prenom);
    String^ getDateEmbauche();
    void setDateEmbauche(String^ Date);
    void setID_Superieur(int);
    int getID_Superieur();
    void setID_Adresse(int);
    int getID_Adresse();


    bool IsSuperieur;
    bool Supprimer;


};
