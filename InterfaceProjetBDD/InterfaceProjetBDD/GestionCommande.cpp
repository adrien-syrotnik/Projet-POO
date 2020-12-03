#include "pch.h"
#include "GestionCommande.h"



array<Commande^>^ GestionCommande::getCommandeClient(int IdClient)
{
    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Commande.ID,Reference,DatePrevueLivraison,DateReglementEnregistre,DateAchatCommande,MontantHT,MontantTVA,MontantTTC,ID_Client,ID_Adresse,ID_Adresse_Commande_AdresseFacturation FROM Client INNER JOIN Commande ON Client.ID = Commande.ID_Client WHERE Client.ID =" + IdClient + ";", tableName);

    //SELECT * FROM Client_Adresse INNER JOIN Adresse ON Client_Adresse.ID = Adresse.ID WHERE Client_Adresse.ID_Client = 1;

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande^>^ Commandes = gcnew array<Commande^>(size);

    
        //remplir le tableau Clients à partir des Clients récupérée dans DS.
        for (int i = 0; i < size; i++)
            Commandes[i] = gcnew Commande(ds->Tables[tableName]->Rows[i]);
    
    return Commandes;
}


array<Paiement^>^ GestionCommande::getPaiementCommande(int IdCommande) {


    String^ tableName = "Paiement";
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Paiement.ID, Paiement.Date, Paiement.Moyen, Paiement.Montant FROM Paiement INNER JOIN Commande_Paiement ON Commande_Paiement.ID_Paiement = Paiement.ID WHERE Commande_Paiement.ID =" + IdCommande + ";", tableName);


    int size = ds->Tables[tableName]->Rows->Count;
    array<Paiement^>^ Commandes = gcnew array<Paiement^>(size);


    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Commandes[i] = gcnew Paiement(ds->Tables[tableName]->Rows[i]);

    return Commandes;

}

array<Commande^>^ GestionCommande::getCommandes()
{
    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT * FROM Commande WHERE Supprimer = 'False';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande^>^ Commandes = gcnew array<Commande^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++) {
        Commandes[i] = gcnew Commande(ds->Tables[tableName]->Rows[i]);
        Commandes[i]->setNom(getClientNameCommande(Commandes[i]->getID())[0]);
        Commandes[i]->setID_Client(Convert::ToInt32(getClientNameCommande(Commandes[i]->getID())[1]));
        Commandes[i]->setPrenom(getClientNameCommande(Commandes[i]->getID())[2]);
    }
    return Commandes;
}



array<String^>^ GestionCommande::getClientNameCommande(int ID_Commande) {

    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Nom, Client.ID,Prenom FROM Client INNER JOIN Commande ON Client.ID = Commande.ID_Client WHERE Commande.ID = "+ ID_Commande +";", tableName);


    array<String^>^ Commandes = gcnew array<String^>(3);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    
        Commandes[0] = Convert::ToString(ds->Tables[tableName]->Rows[0]->ItemArray[0]);
        Commandes[1] = Convert::ToString(ds->Tables[tableName]->Rows[0]->ItemArray[1]);
        Commandes[2] = Convert::ToString(ds->Tables[tableName]->Rows[0]->ItemArray[2]);


    return Commandes;

    


}

String^ GestionCommande::getTableName()
{
    return "Commande";
}


void GestionCommande::persist(Commande^ C,array<NombreArticle^>^ NbrArticle,Adresse^ AL,Adresse^AF)
{
  
    GestionA = gcnew GestionArticle;
    CL_CAD^ connexion = gcnew CL_CAD();

    if (C->getID() == -1)
    {
        
        //etape 1 insérer la commande avec tout sauf les montants pour récupérer l'ID et créer le MontantHT pour après
        C->setID(connexion->insert("INSERT INTO Commande (Reference,DatePrevueLivraison,DateReglementEnregistre,DateAchatCommande,Supprimer,ID_Client,ID_Adresse,ID_Adresse_Commande_AdresseFacturation) VALUES ('" + C->getReference() + "','" + C->getDatePrevueLivraison() + "','" + C->getDateReglementEnregistre() + "','" + C->getDateAchatCommande() + "','False','" + C->getID_Client() + "','" + AL->getID() + "','"+ AF->getID() +"');SELECT @@IDENTITY;"));
        double MontantHT = 0;
        double MontantTVA = 0;
        //etape 2, Récupérer les Prix Unitaires de Chaque Quantite d'Article en fonction de la quantité choisie
        array<Double>^ PrixQuantite = gcnew array<Double>(NbrArticle->Length);
        for (int i = 0; i < NbrArticle->Length; i++) {
            array<prixArticle^>^ TabPrix = GestionA->getprixArticle(NbrArticle[i]->article->getID());

            
            //PArcours Tabprix pour trouver le Prix unitaire en fct de la quantite
            for (int y = 0; y < TabPrix->Length; y++) {
                if (NbrArticle[i]->Quantite >= TabPrix[y]->getSeuilQuantité()) {
                    NbrArticle[i]->Prix = TabPrix[y]->getPrixArticleUnitaire();
                }
            }

            //etape 3 Insérer ce qu'on a trouvé :
            connexion->update("INSERT INTO Commande_Article(ID, ID_Articles, Quantite, PrixUnitaireHT, Remise, Supprimer) VALUES('" + C->getID() + "', '" + NbrArticle[i]->article->getID() + "', '" + NbrArticle[i]->Quantite + "', REPLACE('" + NbrArticle[i]->Prix + "',',','.'), REPLACE('" + NbrArticle[i]->Remise + "',',','.'), 'False');");

            //etape 4 MAJ du montant + remise
            MontantHT += ((NbrArticle[i]->Quantite * NbrArticle[i]->Prix) - (NbrArticle[i]->Quantite * NbrArticle[i]->Prix)*NbrArticle[i]->Remise);
            MontantTVA += ((NbrArticle[i]->Quantite * NbrArticle[i]->Prix) - (NbrArticle[i]->Quantite * NbrArticle[i]->Prix) * NbrArticle[i]->Remise) * NbrArticle[i]->article->getTVA();
            NbrArticle[i]->article->setQuantiteStock(NbrArticle[i]->article->getQuantiteStock() - NbrArticle[i]->Quantite);
            GestionA->persist(NbrArticle[i]->article);
        }
            //etape 5 MAJ final de la commande + MAJ nom Reference
        array<String^>^ Str = getClientNameCommande(C->getID());
            C->setReference(Str[2]->Substring(0,2) + Str[0]->Substring(0,2) + AL->getVille()->Substring(0,3) + C->getDateAchatCommande()->Substring(6, 4) + Convert::ToString(getCommandeClient(C->getID_Client())->Length));
            
            connexion->update("UPDATE Commande SET Reference = '"+ C->getReference() +"',MontantHT = REPLACE('" + MontantHT + "',',','.'), MontantTVA = REPLACE('" + MontantTVA + "',',','.'), MontantTTC = REPLACE('" + (MontantHT+MontantTVA) + "',',','.') WHERE ID = '"+ C->getID() +"'");
        
            
    }
    else
    {
        //Update
        //connexion->update("UPDATE Personnel SET Nom = '" + P->getNom() + "', Prenom = '" + P->getPrenom() + "',IsSuperieur = '" + P->IsSuperieur + "',DateEmbauche = '" + P->getDateEmbauche() + "',Supprimer_Personnel_Superieur='" + SupprimerSuperieur + "',ID_Personnel = " + majIDSuperieur + ",ID_Adresse = '" + A->getID() + "' WHERE id =" + P->getID() + ";");

        //connexion->update("UPDATE Commande SET Reference = '"+ C->getReference() +"',DatePrevueLivraison = '" + C->getDatePrevueLivraison() + "',DateReglementEnregistre = '" + C->getDateReglementEnregistre() + "',DateAchatCommande = '" + C->getDateAchatCommande() + "',ID_Client = '" + C->getID_Client() + "' WHERE Commande.ID ="+C->getID()+";");

    }



}



void GestionCommande::del(Commande^ C) {


    CL_CAD^ connexion = gcnew CL_CAD();

    //Update
    connexion->update("UPDATE Commande SET Supprimer = 'True' WHERE ID = " + C->getID() + ";");


}