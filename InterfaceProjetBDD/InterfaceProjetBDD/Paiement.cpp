#include "pch.h"
#include "Paiement.h"

Paiement::Paiement() {
	this->ID = -1;
	this->Date = "";
	this->Moyen = "";
	this->Montant = 0;
}

Paiement::Paiement(DataRow^ DR) {
	this->ID = Convert::ToInt32(DR->ItemArray[0]);
	this->Date = Convert::ToString(DR->ItemArray[1]);
	this->Moyen = Convert::ToString(DR->ItemArray[2]);
	this->Montant = Convert::ToDouble(DR->ItemArray[3]);
}

int Paiement::getID() {
	return ID;
}

void Paiement::setID(int id) {
	this->ID = id;
}

void Paiement::setMontant(double M) {
	this->Montant = M;
}
double Paiement::getMontant() {
	return this->Montant;
}

void Paiement::setDate(String^ M) {
	this->Date = M;
}
String^ Paiement::getDate() {
	return this->Date;
}

void Paiement::setMoyen(String^ M) {
	this->Moyen = M;
}
String^ Paiement::getMoyen() {
	return this->Moyen;
}
