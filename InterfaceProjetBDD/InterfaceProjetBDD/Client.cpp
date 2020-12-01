#include "pch.h"

//Client.cpp
#include "Client.h"
#include "CL_CAD.h"



Client::Client()
{
    this->id = -1;
    this->Nom = "";
    this->Prenom = "";
    this->DateAnniversaire = "";
    this->DatePremierAchat = "";
    this->Supprimer = false;
}

Client::Client(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->Nom = Convert::ToString(DR->ItemArray[1]);
    this->Prenom = Convert::ToString(DR->ItemArray[2]);
    this->DateAnniversaire = Convert::ToString(DR->ItemArray[3]);
    this->DatePremierAchat = Convert::ToString(DR->ItemArray[4]);

}
void Client::setID(int id)
{
    this->id = id;
}
int Client::getID()
{
    return this->id;
}
String^ Client::getPrenom()
{
    return this->Prenom;
}

void Client::setPrenom(String^ prenom)
{
    this->Prenom = prenom;
}

void Client::setNom(String^ nom)
{
    this->Nom = nom;
}
String^ Client::getNom()
{
    return this->Nom;
}
String^ Client::getDateAnniversaire() {
    return this->DateAnniversaire;
}
void Client::setDateAnniversaire(String^ date) {
    this->DateAnniversaire = date;
}
String^ Client::getDatePremierAchat() {
    return this->DatePremierAchat;
}
void Client::setDatePremierAchat(String^ date) {
    this->DatePremierAchat = date;
}
