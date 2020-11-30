#pragma once
#include <string>
#include "Personnel.h"

class Superieur : public Personnel
{
public:
	Superieur();

private:
	std::string m_nomSuperieur;
	std::string m_prenomSuperieur;
	char m_dateEmbauche;
	std::string m_adresse;
	std::string id_Superieur;
	std::string id_Adresse;
	std::string id_Superieur;

};

