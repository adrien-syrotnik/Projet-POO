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
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE Supprimer='False';", tableName);
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





void GestionPersonnel::persist(Personnel^ P,Adresse^ A)
{
    String^ tableName = GestionPersonnel::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();

    bool SupprimerSuperieur = (P->getID_Superieur()==0);
    
    String^ majIDSuperieur;
    if (P->getID_Superieur() == 0) { majIDSuperieur = "NULL"; }
    else { majIDSuperieur = "'" + Convert::ToString(P->getID_Superieur()) + "'"; }

    if (P->getID() == -1)
    {
        //Insert

        A->setID(connexion->insert("INSERT INTO Adresse (Ligne1,Pays,CodePostal,Ville) " + "VALUES('" + A->getLigneAdresse() + "','" + A->getPays() + "','" + A->getCP() + "','" + A->getVille() + "');SELECT @@IDENTITY;"));
        P->setID(connexion->insert("INSERT INTO Personnel (Nom,Prenom,IsSuperieur,DateEmbauche,Supprimer,Supprimer_Personnel_Superieur,ID_Personnel,ID_Adresse) " + "VALUES('" + P->getNom() + "','" + P->getPrenom() + "','" + P->IsSuperieur + "','" + P->getDateEmbauche() + "','" + false + "','" + SupprimerSuperieur + "'," + majIDSuperieur + ",'" + A->getID() + "');SELECT @@IDENTITY;"));
    }
    else
    {
        //Update
        connexion->update("UPDATE Personnel SET Nom = '" + P->getNom() + "', Prenom = '" + P->getPrenom() + "',IsSuperieur = '" + P->IsSuperieur + "',DateEmbauche = '" + P->getDateEmbauche() +"',Supprimer_Personnel_Superieur='" + SupprimerSuperieur +"',ID_Personnel = " + majIDSuperieur + ",ID_Adresse = '" + A->getID() + "' WHERE id ="+ P->getID() +";");

        connexion->update("UPDATE Adresse SET Ligne1 = '" + A->getLigneAdresse() + "', Pays = '"+ A->getPays() + "', CodePostal = '" + A->getCP() + "', Ville = '" + A->getVille() + "'  WHERE id = "+ A->getID() +";");
        
    }

}
void GestionPersonnel::del(Personnel^ P) {

    CL_CAD^ connexion = gcnew CL_CAD();

    //Update
    connexion->update("UPDATE Personnel SET Supprimer = 'True' WHERE ID = " + P->getID() + ";");

}
