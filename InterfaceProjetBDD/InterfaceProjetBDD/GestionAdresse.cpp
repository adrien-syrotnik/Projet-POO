#include "pch.h"
#include "GestionAdresse.h"

array<Adresse^>^ GestionAdresse::getAdresse(int IdClient,String^ Table,String^ TypeAdresse)
{
    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Adresse.ID,Ligne1, Pays, CodePostal, Ville FROM "+Table+" INNER JOIN Adresse ON Adresse.ID = " + Table + ".ID_Adresse"+TypeAdresse+" WHERE " + Table + ".ID =" + IdClient + ";", tableName);

    //SELECT * FROM Client_Adresse INNER JOIN Adresse ON Client_Adresse.ID = Adresse.ID WHERE Client_Adresse.ID_Client = 1;

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse^>^ Adresses = gcnew array<Adresse^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresses[i] = gcnew Adresse(ds->Tables[tableName]->Rows[i]);
    return Adresses;
}


String^ GestionAdresse::getTableName()
{
    return "Adresse";
}

array<Adresse^>^ GestionAdresse::getAdresseClient(int IdClient,String^ AdresseType)
{
    String^ tableName = "Client_Adresse" + AdresseType;
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Adresse.ID, Ligne1, Pays, CodePostal, Ville FROM Client_Adresse"+ AdresseType +" INNER JOIN Adresse ON Client_Adresse"+ AdresseType +".ID = Adresse.ID WHERE Client_Adresse"+ AdresseType +".ID_Client =" + IdClient + ";", tableName);

    //SELECT * FROM Client_Adresse INNER JOIN Adresse ON Client_Adresse.ID = Adresse.ID WHERE Client_Adresse.ID_Client = 1;

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse^>^ Adresses = gcnew array<Adresse^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresses[i] = gcnew Adresse(ds->Tables[tableName]->Rows[i]);
    return Adresses;
}




void GestionAdresse::persist(array<Adresse^>^ TabAdresse,int IdClient,String^ Str)
{

    CL_CAD^ connexion = gcnew CL_CAD();

    for (int i = 0; i < TabAdresse->Length; i++) {
        TabAdresse[i]->setID(connexion->insert("INSERT INTO Adresse (Ligne1,Pays,CodePostal,Ville) " + "VALUES('" + TabAdresse[i]->getLigneAdresse() + "','" + TabAdresse[i]->getPays() + "','" + TabAdresse[i]->getCP() + "','" + TabAdresse[i]->getVille() + "');SELECT @@IDENTITY;"));
        connexion->update("INSERT INTO Client_"+ Str +"(ID, ID_Client) " + "VALUES('"+ TabAdresse[i]->getID() +"','"+ IdClient +"')");

    }



}



