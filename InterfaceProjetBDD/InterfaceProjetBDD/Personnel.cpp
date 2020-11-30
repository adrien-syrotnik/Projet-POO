#include "pch.h"
#include "Personnel.h"
#include "CL_CAD.h"



Personnel::Personnel()
{
    this->ID = -1;
    this->Nom = "";
    this->Prenom = "";
}

Personnel::Personnel(DataRow^ DR)
{
    this->ID = Convert::ToInt32(DR->ItemArray[0]);
    this->Nom = Convert::ToString(DR->ItemArray[1]);
    this->Prenom = Convert::ToString(DR->ItemArray[2]);
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
