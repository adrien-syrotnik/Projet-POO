#pragma once
#include "Article.h"

ref class NombreArticle
{

public :
	NombreArticle();
	Article^ article;
	int Quantite;
	double Prix;
	double Remise;
	NombreArticle(DataRow^ DR);

};

