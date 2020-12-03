#include "pch.h"
#include "StatsRequete.h"

array<String^>^ StatsRequete::Getrequete1()
{   
    String^ tableName = "Commande";
    DataSet^ ds = connexion->getRows("SELECT AVG (MontantHT) FROM "+tableName, tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ Requete1 = gcnew array<String^>(size);

    for (int i = 0; i < size; i++)
        Requete1[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    return Requete1;
}

StatsRequete::StatsRequete() {
    connexion = gcnew CL_CAD;
}


array<String^>^ StatsRequete::Getrequete2(int ID_mois)
{
    String^ tableName = "Commande";
    DataSet^ ds = connexion->getRows("SELECT SUM(MontantTTC) FROM " + tableName + " WHERE MONTH (DateReglementEnregistre) = "+ID_mois, tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ Requete2 = gcnew array<String^>(size);

    for (int i = 0; i < size; i++)
        Requete2[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    return Requete2;
}

array<array<String^>^>^ StatsRequete::Getrequete3()
{
    String^ tableName = "Article";
    DataSet^ ds = connexion->getRows("SELECT Nom, QuantiteStock, SeuilQuantite FROM "+tableName+" WHERE QuantiteStock < SeuilQuantite", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<array<String^>^>^ Requete3 = gcnew array<array<String^>^>(size);
    for (int i = 0; i < size; i++) {
        Requete3[i] = gcnew array<String^>(3);
        Requete3[i][0] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
        Requete3[i][1] = ds->Tables[tableName]->Rows[i]->ItemArray[1]->ToString();
        Requete3[i][2] = ds->Tables[tableName]->Rows[i]->ItemArray[2]->ToString();
    }
    return Requete3;
}

array<String^>^ StatsRequete::Getrequete4(int ID_Client)
{
    String^ tableName = "Commande";
    DataSet^ ds = connexion->getRows("SELECT SUM(MontantTTC) FROM "+tableName+" WHERE ID_Client = "+ID_Client, tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ Requete4 = gcnew array<String^>(size);

    for (int i = 0; i < size; i++)
        Requete4[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    return Requete4;
}

array<array<String^>^>^ StatsRequete::Getrequete5() {

    String^ tableName = "Commande_Article";
    DataSet^ ds = connexion->getRows("SELECT TOP 10 Article.Reference, Article.Nom, SUM(Commande_Article.Quantite) AS Nombre_ventes FROM Commande_Article INNER JOIN Article ON Commande_Article.ID_Articles = Article.ID GROUP BY Article.Reference, Article.Nom ORDER BY COUNT(Commande_Article.Quantite) DESC", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<array<String^>^>^ Requete5 = gcnew array<array<String^>^>(size);
    for (int i = 0; i < size; i++) {
        Requete5[i] = gcnew array<String^>(3);
        Requete5[i][0] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
        Requete5[i][1] = ds->Tables[tableName]->Rows[i]->ItemArray[1]->ToString();
        Requete5[i][2] = ds->Tables[tableName]->Rows[i]->ItemArray[2]->ToString();
    }
    return Requete5;
}

array<array<String^>^>^ StatsRequete::Getrequete6() {
    String^ tableName = "Commande_Article";
    DataSet^ ds = connexion->getRows("SELECT TOP 10 Article.Reference, Article.Nom, SUM(Commande_Article.Quantite) AS Nombre_ventes FROM Commande_Article INNER JOIN Article ON Commande_Article.ID_Articles = Article.ID GROUP BY Article.Reference, Article.Nom ORDER BY COUNT(Commande_Article.Quantite) ASC", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<array<String^>^>^ Requete6 = gcnew array<array<String^>^>(size);
    for (int i = 0; i < size; i++) {
        Requete6[i] = gcnew array<String^>(3);
        Requete6[i][0] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
        Requete6[i][1] = ds->Tables[tableName]->Rows[i]->ItemArray[1]->ToString();
        Requete6[i][2] = ds->Tables[tableName]->Rows[i]->ItemArray[2]->ToString();
    }
    return Requete6;
}


array<String^>^ StatsRequete::Getrequete7()
{
    String^ tableName = "Article, Commande";
    DataSet^ ds = connexion->getRows("SELECT SUM(QuantiteStock*MontantHT) FROM " + tableName, tableName);
    array<String^>^ Requete7 = gcnew array<String^>(1);
    Requete7[0] = ds->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
    return Requete7;
}

array<String^>^ StatsRequete::Getrequete8()
{
    String^ tableName = "Article, Commande";
    DataSet^ ds = connexion->getRows("SELECT SUM(QuantiteStock*MontantTTC) FROM "+tableName, tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<String^>^ Requete8 = gcnew array<String^>(size);

    for (int i = 0; i < size; i++)
        Requete8[i] = ds->Tables[tableName]->Rows[i]->ItemArray[0]->ToString();
    return Requete8;
}

array<array<String^>^>^ StatsRequete::Getrequete9() {
    String^ tableName = "Article, Commande";
    DataSet^ ds0 = connexion->getRows("SELECT SUM(QuantiteStock*MontantHT) FROM " + tableName, tableName);
    DataSet^ ds1 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)+(0.05*QuantiteStock*MontantHT)) FROM "+tableName, tableName);
    DataSet^ ds2 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)+(0.1*QuantiteStock*MontantHT)) FROM " + tableName, tableName);
    DataSet^ ds3 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)+(0.2*QuantiteStock*MontantHT)) FROM " + tableName, tableName);
    DataSet^ ds4 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)+(0.05*QuantiteStock*MontantTTC)) FROM " + tableName, tableName);
    DataSet^ ds5 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)+(0.1*QuantiteStock*MontantTTC)) FROM " + tableName, tableName);
    DataSet^ ds6 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)+(0.15*QuantiteStock*MontantTTC)) FROM " + tableName, tableName);
    DataSet^ ds7 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)-(0.05*QuantiteStock*MontantTTC)) FROM " + tableName, tableName);
    DataSet^ ds8 = connexion->getRows("SELECT SUM((QuantiteStock*MontantHT)-(0.06*QuantiteStock*MontantTTC)) FROM " + tableName, tableName);

    array<array<String^>^>^ Requete9 = gcnew array<array<String^>^>(1);

        Requete9[0] = gcnew array<String^>(9);
        Requete9[0][0] = ds0->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][1] = ds1->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][2] = ds2->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][3] = ds3->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][4] = ds4->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][5] = ds5->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][6] = ds6->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][7] = ds7->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
        Requete9[0][8] = ds8->Tables[tableName]->Rows[0]->ItemArray[0]->ToString();
    return Requete9;
}

