#pragma once
#include "Article.h"
#include "CL_CAD.h"
#include "PrixArticle.h"
#include "NombreArticle.h"

using namespace System::Data;
using namespace System;


ref class GestionArticle
{
private:
    CL_CAD^ connexion;


public:
    GestionArticle();
    array<Article^>^ getArticles(); //NE PAS OUBLIER DE VERIF QUE SUPPRIMER = FALSE
    array<prixArticle^>^ getprixArticle(int);
    String^ getTableName();
    void persist(Article^);//, array<Adresse^>^);  
    void del(Article^);
    array<NombreArticle^>^ getNombreArticleCommande(int IdCommande);
};