#pragma once
#include "CL_CAD.h"
ref class StatsRequete
{
private:
	CL_CAD^ connexion;
public:
	array <String^>^ Getrequete1();
	array <String^>^ Getrequete2(int ID_mois);
	array<array<String^>^>^ Getrequete3();
	array <String^>^ Getrequete4(int ID_Client);
	array<array<String^>^>^ Getrequete5();
	array<array<String^>^>^ Getrequete6();
	array <String^>^ Getrequete7();
	array <String^>^ Getrequete8();
	array<array<String^>^>^ Getrequete9();

	//array<array<String^>^>^ Getrequete2();
	StatsRequete();


};



