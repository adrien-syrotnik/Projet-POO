#pragma once
#include <string>

class Commandes
{
public:
	Commandes();


private:
	std::string m_reference;
	std::string m_nomArticle;
	std::string m_quantite;
	float m_montantHT;
	std::string m_natureArticle;
	float m_tauxTVA;

};