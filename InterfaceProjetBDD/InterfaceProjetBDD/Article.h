#pragma once



using namespace System::Data;
using namespace System;

ref class Article {
private:
    int ID;
    String^ Reference;
    String^ Nom;
    String^ TypeArticle;
    int QuantiteStock;
    int Designation;
    double TVA;
    int SeuilQuantite;
public:
    Article();
    Article(DataRow^ DR);
    void setID(int);
    int getID();
    void setNom(String^);
    String^ getNom();
    void setReference(String^);
    String^ getReference();
    void setTypeArticle(String^);
    String^ getTypeArticle();
    void setQuantiteStock(int);
    int getQuantiteStock();
    void setDesignation(int);
    int getDesignation();
    void setTVA(double);
    double getTVA();
    void setSeuilQuantite(int);
    int getSeuilQuantite();



};
