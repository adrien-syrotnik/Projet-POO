#pragma once
using namespace System::Data;
using namespace System;


 ref class prixArticle {
 private :
	 int ID;
	 int seuilQuantité;
	 double prixArticleUnitaire;
	 int ID_Article;

 public :
	 prixArticle();
	 prixArticle(DataRow^ DR);
	 int getID();
	 void setID(int);
	 int getSeuilQuantité();
	 void setSeuilQuantité(int);
	 double getPrixArticleUnitaire();
	 void setPrixArticleUnitaire(double);
	 int getID_Article();
	 void setID_Article(int);



};

