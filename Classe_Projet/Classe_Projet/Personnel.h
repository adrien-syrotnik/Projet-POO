#pragma once
#include <string>

class Personnel
{
public:
	Personnel()
	{}
	void setNomPersonnel(std::string m_nom);
	void setPrenom(std::string m_prenom);
	void setDateEmbauche(char dateEmbauche);
	void afficherAdresse();

private:
	std::string m_nomPersonnel;
	std::string m_prenom;
	char m_dateEmbauche;
	std::string m_adresse;
	std::string m_superieur;
	std::string id_personnel;
	std::string id_Adresse;
	std::string id_Superieur;

};

