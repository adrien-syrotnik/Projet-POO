#pragma once
using namespace System::Data;
using namespace System;


public ref class Paiement {
private:
	int ID;
	String^ Date;
	String^ Moyen;
	double Montant;

public:
	Paiement();
	Paiement(DataRow^ DR);
	int getID();
	void setID(int);
	String^ getDate();
	void setDate(String^);
	String^ getMoyen();
	void setMoyen(String^);
	double getMontant();
	void setMontant(double);



};
