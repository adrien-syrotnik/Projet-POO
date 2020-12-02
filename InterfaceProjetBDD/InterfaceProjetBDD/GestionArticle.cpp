#include "pch.h"
#include "GestionArticle.h"


GestionArticle::GestionArticle() {
    connexion = gcnew CL_CAD();
}

array<Article^>^ GestionArticle::getArticles()
{
    String^ tableName = GestionArticle::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE Supprimer='False' ORDER BY TypeArticle;", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<Article^>^ Articles = gcnew array<Article^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Articles[i] = gcnew Article(ds->Tables[tableName]->Rows[i]);
    return Articles;
}

String^ GestionArticle::getTableName()
{
    return "Article";
}


array<prixArticle^>^ GestionArticle::getprixArticle(int IdArticle)
{
    String^ tableName = "PrixArticle";
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT PrixArticle.ID, PrixArticle.SeuilQuantite, PrixArticle.PrixUnitaireHT FROM PrixArticle INNER JOIN Article ON PrixArticle.ID_Articles = Article.ID WHERE Article.ID =" + IdArticle + ";", tableName);

    //SELECT * FROM Client_Adresse INNER JOIN Adresse ON Client_Adresse.ID = Adresse.ID WHERE Client_Adresse.ID_Client = 1;

    int size = ds->Tables[tableName]->Rows->Count;
    array<prixArticle^>^ prixArticles = gcnew array<prixArticle^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        prixArticles[i] = gcnew prixArticle(ds->Tables[tableName]->Rows[i]);
    return prixArticles;
}




void GestionArticle::persist(Article^ Art)
{
    String^ tableName = GestionArticle::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();


    if (Art->getID() == -1)
    {
        //Insert

        //A->setID(connexion->insert("INSERT INTO Adresse (Ligne1,Pays,CodePostal,Ville) " + "VALUES('" + A->getLigneAdresse() + "','" + A->getPays() + "','" + A->getCP() + "','" + A->getVille() + "');SELECT @@IDENTITY;"));
        Art->setID(connexion->insert("INSERT INTO Article (Reference,Nom,QuantiteStock,Designation,TVA,SeuilQuantite,TypeArticle,Supprimer) VALUES('" + Art->getReference() + "','" + Art->getNom() + "'," + Art->getQuantiteStock() + ",NULL,REPLACE('"+ Art->getTVA() +"',',','.'),'"+ Art->getSeuilQuantite() +"','"+ Art->GetType() +"','False');SELECT @@IDENTITY;"));
    }
    else
    {
        //Update
        connexion->update("UPDATE Article SET Nom = '" + Art->getNom() + "', Reference = '" + Art->getReference() + "', QuantiteStock = '" + Art->getQuantiteStock() + "',TVA = REPLACE('" + Art->getTVA() + "',',','.'), SeuilQuantite = '" + Art->getSeuilQuantite() + "', TypeArticle = '" + Art->getTypeArticle() + "' WHERE ID = " + Art->getID() + ";");

        //connexion->update("UPDATE Adresse SET Ligne1 = '" + A->getLigneAdresse() + "', Pays = '" + A->getPays() + "', CodePostal = '" + A->getCP() + "', Ville = '" + A->getVille() + "'  WHERE id = " + A->getID() + ";");

    }

}

void GestionArticle::del(Article^ A) {

    CL_CAD^ connexion = gcnew CL_CAD();

    //Update
    connexion->update("UPDATE Article SET Supprimer = 'True' WHERE ID = " + A->getID() + ";");

}
