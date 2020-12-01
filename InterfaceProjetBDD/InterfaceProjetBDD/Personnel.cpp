#include "pch.h"
#include "Personnel.h"
#include "CL_CAD.h"



Personnel::Personnel()
{
    this->ID = -1;
    this->Nom = "";
    this->Prenom = "";
    this->DateEmbauche = "";
    this->IsSuperieur = false;
    this->Supprimer = false;
    this->ID_Superieur = -1;
    this->ID_Adresse = -1;
}

Personnel::Personnel(Personnel^ P) {
    
    this->ID = P->getID();
    this->Nom = P->getNom();
    this->Prenom = P->getPrenom();
    this->DateEmbauche = P->getDateEmbauche();
    this->IsSuperieur = P->IsSuperieur;
    this->Supprimer = P->Supprimer;
    this->ID_Superieur = P->getID_Superieur();
    this->ID_Adresse = P->getID_Adresse();

}

Personnel::Personnel(DataRow^ DR)
{
    this->ID = Convert::ToInt32(DR->ItemArray[0]);
    this->Nom = Convert::ToString(DR->ItemArray[1]);
    this->Prenom = Convert::ToString(DR->ItemArray[2]);
    this->IsSuperieur = Convert::ToBoolean(DR->ItemArray[3]);
    this->DateEmbauche = Convert::ToString(DR->ItemArray[4]);
    this->Supprimer = Convert::ToBoolean(DR->ItemArray[5]);
    //6 -> IsSupérieur supprimer -> Est ce qu'il n'a plus de supérieur   <=> ID_Superieur = -1
    if(Convert::ToBoolean(DR->ItemArray[6])) {}
    else {
        this->ID_Superieur = Convert::ToInt32(DR->ItemArray[7]);
    }
    this->ID_Adresse = Convert::ToInt32(DR->ItemArray[8]);
}
void Personnel::setID(int id)
{
    this->ID = id;
}
int Personnel::getID()
{
    return this->ID;
}
String^ Personnel::getPrenom()
{
    return this->Prenom;
}

void Personnel::setPrenom(String^ prenom)
{
    this->Prenom = prenom;
}

void Personnel::setNom(String^ nom)
{
    this->Nom = nom;
}
String^ Personnel::getNom()
{
    return this->Nom;
}
String^ Personnel::getDateEmbauche() {
    return this->DateEmbauche;
}
void Personnel::setDateEmbauche(String^ Date) {
    this->DateEmbauche = Date;
}
void Personnel::setID_Superieur(int id) {
    this->ID_Superieur = id;
}
int Personnel::getID_Superieur() {
    return this->ID_Superieur;
}
void Personnel::setID_Adresse(int id) {
    this->ID_Adresse = id;
}
int Personnel::getID_Adresse() {
    return this->ID_Adresse;
}
