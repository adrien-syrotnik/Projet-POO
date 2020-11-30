#pragma once
#include <string>

class Adresse
{
public:
	Adresse();
	void setNomAdresse(std::string m_nomAdresse);
	void setVille(std::string m_ville);
	void setCodePostal(std::string m_codePostal);
	void setPays(std::string m_pays);

private:
	std::string m_nomAdresse;
	std::string m_Ville;
	std::string m_codePostal;
	std::string m_pays;
};