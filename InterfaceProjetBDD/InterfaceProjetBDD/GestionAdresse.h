#pragma once
#include "Adresse.h"
#include "CL_CAD.h"


public ref class GestionAdresse
{
private:
    CL_CAD^ connexion;
public:

    String^ getTableName();
    array<Adresse^>^ getAdressePersonnel(int);
    array<Adresse^>^ getAdresseClient(int,String^);
    void addAdress();
};

