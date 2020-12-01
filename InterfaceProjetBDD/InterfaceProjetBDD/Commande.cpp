#include "pch.h"
#include "Commande.h"



Commande::Commande()
{
    this->ID = -1;
    this->Reference = "";
    this->DateAchatCommande = "";
    this->DateReglementEnregistre = "";
    this->DatePrevueLivraison = "";
    this->MontantHT = 0;
    this->MontantTTC = 0;
    this->MontantTVA = 0;


}

Commande::Commande(DataRow^ DR)
{
    this->ID = Convert::ToInt32(DR->ItemArray[0]);
    this->Reference = Convert::ToString(DR->ItemArray[1]);
    this->DatePrevueLivraison = Convert::ToString(DR->ItemArray[2]);
    this->DateReglementEnregistre = Convert::ToString(DR->ItemArray[3]);
    this->DateAchatCommande = Convert::ToString(DR->ItemArray[4]);
    this->MontantHT = Convert::ToDouble(DR->ItemArray[5]);
    this->MontantTVA = Convert::ToDouble(DR->ItemArray[6]);
    this->MontantTTC = Convert::ToDouble(DR->ItemArray[7]);

    this->ID_Client = Convert::ToInt32(DR->ItemArray[8]);
    this->ID_AdresseFacturation = Convert::ToInt32(DR->ItemArray[9]);
    this->ID_AdresseLivraison = Convert::ToInt32(DR->ItemArray[10]);

}
void Commande::setID(int id)
{
    this->ID = id;
}
int Commande::getID()
{
    return this->ID;
}
String^ Commande::getReference()
{
    return this->Reference;
}
void Commande::setReference(String^ Ref)
{
    this->Reference = Ref;
}
String^ Commande::getDatePrevueLivraison()
{
    return this->DatePrevueLivraison;
}
void Commande::setDatePrevueLivraison(String^ Ref)
{
    this->DatePrevueLivraison = Ref;
}
String^ Commande::getDateReglementEnregistre()
{
    return this->DateReglementEnregistre;
}
void Commande::setDateReglementEnregistre(String^ Ref)
{
    this->DateReglementEnregistre = Ref;
}
String^ Commande::getDateAchatCommande()
{
    return this->DateAchatCommande;
    
}
void Commande::setDateAchatCommande(String^ Ref)
{
    this->DateAchatCommande = Ref;
}

void Commande::setMontantTVA(int M)
{
    this->MontantTVA = M;
}
int Commande::getMontantTVA()
{
    return this->MontantTVA;
}
void Commande::setMontantTTC(int M)
{
    this->MontantTTC = M;
}
int Commande::getMontantTTC()
{
    return this->MontantTTC;
}
void Commande::setMontantHT(int M)
{
    this->MontantHT = M;
}
int Commande::getMontantHT()
{
    return this->MontantHT;
}

void Commande::setID_Client(int M)
{
    this->ID_Client = M;
}
int Commande::getID_Client()
{
    return this->ID_Client;
}
void Commande::setID_AdresseLivraison(int M)
{
    this->ID_AdresseLivraison = M;
}
int Commande::getID_AdresseLivraison()
{
    return this->ID_AdresseLivraison;
}
void Commande::setID_AdresseFacturation(int M)
{
    this->ID_AdresseFacturation = M;
}
int Commande::getID_AdresseFacturation()
{
    return this->ID_AdresseFacturation;
}

