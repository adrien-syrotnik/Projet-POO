#pragma once
#include "Adresse.h"
#include "CL_CAD.h"


public ref class GestionAdresse
{
private:
    CL_CAD^ connexion;
public:

    String^ getTableName();
    array<Adresse^>^ getAdresse(int,String^,String^);
    array<Adresse^>^ getAdresseClient(int,String^);
    void addAdress();
};

