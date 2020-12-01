#include "pch.h"
#include "Adresse.h"

#include "CL_CAD.h"



    Adresse::Adresse()
    {
        this->id = -1;
        this->CP = "";
        this->Ville = "";
        this->LigneAdresse = "";
        this->Pays = "";
    }

    Adresse::Adresse(DataRow^ DR)
    {
        this->id = Convert::ToInt32(DR->ItemArray[0]);
        this->LigneAdresse = Convert::ToString(DR->ItemArray[1]);
        this->Pays = Convert::ToString(DR->ItemArray[2]);
        this->CP = Convert::ToString(DR->ItemArray[3]);
        this->Ville = Convert::ToString(DR->ItemArray[4]);

    }

    void Adresse::setID(int id)
    {
        this->id = id;
    }
    int Adresse::getID()
    {
        return this->id;
    }
    String^ Adresse::getLigneAdresse()
    {
        return this->LigneAdresse;
    }

    void Adresse::setLigneAdresse(String^ LA)
    {
        this->LigneAdresse = LA;
    }

    void Adresse::setVille(String^ Ville)
    {
        if (Ville != nullptr)
            this->Ville = Ville;
        else
            this->Ville = "";
    }
    String^ Adresse::getVille()
    {
        return this->Ville;
    }
    void Adresse::setCP(String^ CP)
    {
        this->CP = CP;
    }
    String^ Adresse::getCP()
    {
        return this->CP;
    }
    String^ Adresse::getPays() {
        return this->Pays;
    }
    void Adresse::setPays(String^ Pays) {
        this->Pays = Pays;
    }
