#include "pch.h"
#include "PrixArticle.h"

prixArticle::prixArticle() {
	this->ID = -1;
	this->prixArticleUnitaire = 0;
	this->seuilQuantit� = 0;
	this->ID_Article = -1;
}

prixArticle::prixArticle(DataRow^ DR) {
	this->ID = Convert::ToInt32(DR->ItemArray[0]);
	this->seuilQuantit� = Convert::ToInt32(DR->ItemArray[1]);
	this->prixArticleUnitaire = Convert::ToDouble(DR->ItemArray[2]);
	this->ID_Article = Convert::ToInt32(DR->ItemArray[3]);
	
}

int prixArticle::getID() {
	return ID;
}

void prixArticle::setID(int id) {
	this->ID = id;
}

int prixArticle::getSeuilQuantit�() {
	return seuilQuantit�;
}

void prixArticle::setSeuilQuantit�(int seuil) {
	this->seuilQuantit� = seuil;
}

double prixArticle::getPrixArticleUnitaire() {
	return prixArticleUnitaire;
}

void prixArticle::setPrixArticleUnitaire(double prixArticle) {
	this->prixArticleUnitaire = prixArticle;
}

int prixArticle::getID_Article() {
	return ID_Article;
}

void prixArticle::setID_Article(int id) {
	this->ID_Article = id;
}