#include "pch.h"
#include "GestionPersonnel.h"
#include <iostream>

GestionPersonnel::GestionPersonnel() {
    connexion = gcnew CL_CAD();
}

array<Personnel^>^ GestionPersonnel::getPersonnels()
{
    String^ tableName = GestionPersonnel::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<Personnel^>^ Personnels = gcnew array<Personnel^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Personnels[i] = gcnew Personnel(ds->Tables[tableName]->Rows[i]);
    return Personnels;
}

String^ GestionPersonnel::getTableName()
{
    return "Personnel";
}





void GestionPersonnel::persist(Personnel^ P)
{
    String^ tableName = GestionPersonnel::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();
    if (P->getID() == -1)
    {
        //Insert
        P->setID(connexion->insert("INSERT INTO " + tableName + " (nom,prenom) " +
            "VALUES('" + P->getNom() + "','" + P->getPrenom() + "');SELECT @@IDENTITY;"));
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET nom = '" + P->getNom() + "' " +
            "WHERE(id = " + P->getID() + ");");

        //connexion->update("UPDATE " + tableName +
          //  " SET prenom = '" + P->getPrenom() + "' " +
            //"WHERE(id = " + P->getID() + ");");
    }
}/*
void GestionPersonnel::del() {

    String^ tableName = Client::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();

    //Insert
    connexion->update("DELETE FROM " + tableName + " WHERE ID = " + this->id + ";");

}*/
