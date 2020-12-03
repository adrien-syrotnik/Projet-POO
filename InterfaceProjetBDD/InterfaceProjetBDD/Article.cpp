#include "pch.h"
#include "Article.h"



Article::Article()
{
    this->ID = -1;
    this->Nom = "";
    this->Reference = "";
    this->TypeArticle = "";
    this->QuantiteStock = 0;
    this->Designation = 0;
    this->TVA = 0.20;
    this->SeuilQuantite = 0;
}

Article::Article(DataRow^ DR)
{
    this->ID = Convert::ToInt32(DR->ItemArray[0]);
    this->Reference = Convert::ToString(DR->ItemArray[1]);
    this->Nom = Convert::ToString(DR->ItemArray[2]);
    this->QuantiteStock = Convert::ToInt32(DR->ItemArray[3]);
    //this->Designation = Convert::ToInt32(DR->ItemArray[4]);
    this->TVA = Convert::ToDouble(DR->ItemArray[5]);
    this->SeuilQuantite = Convert::ToInt32(DR->ItemArray[6]);
    this->TypeArticle = Convert::ToString(DR->ItemArray[7]);
}

void Article::setID(int id)
{
    this->ID = id;
}
int Article::getID()
{
    return this->ID;
}
void Article::setNom(String^ nom)
{
    this->Nom = nom;
}
String^ Article::getNom()
{
    return this->Nom;
}
void Article::setReference(String^ nom)
{
    this->Reference = nom;
}
String^ Article::getReference()
{
    return this->Reference;
}
void Article::setTypeArticle(String^ nom)
{
    this->TypeArticle = nom;
}
String^ Article::getTypeArticle()
{
    return this->TypeArticle;
}
void Article::setQuantiteStock(int q)
{
    this->QuantiteStock = q;
}
int Article::getQuantiteStock()
{
    return this->QuantiteStock;
}
void Article::setDesignation(int d)
{
    this->Designation = d;
}
int Article::getDesignation()
{
    return this->Designation;
}
void Article::setTVA(double TVA)
{
    this->TVA = TVA;
}
double Article::getTVA()
{
    return this->TVA;
}
void Article::setSeuilQuantite(int q)
{
    this->SeuilQuantite = q;
}
int Article::getSeuilQuantite()
{
    return this->SeuilQuantite;
}