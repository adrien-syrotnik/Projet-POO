#include "pch.h"
#include "NombreArticle.h"

NombreArticle::NombreArticle() {
	article = gcnew Article();
	Quantite = 0;
	Prix = 0;
	Remise = 0;
}

NombreArticle::NombreArticle(DataRow^ DR)
{
	article = gcnew Article;
    this->article->setID(Convert::ToInt32(DR->ItemArray[0]));
    this->Quantite = Convert::ToInt32(DR->ItemArray[1]);
    this->Prix = Convert::ToDouble(DR->ItemArray[2]);
    this->Remise = Convert::ToDouble(DR->ItemArray[3]);
	this->article->setNom(Convert::ToString(DR->ItemArray[4]));
	this->article->setQuantiteStock(Convert::ToInt32(DR->ItemArray[5]));
	this->article->setTVA(Convert::ToDouble(DR->ItemArray[6]));

}