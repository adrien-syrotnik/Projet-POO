#include <iostream>
#include "Adresse.h"
#include <string>
using namespace std;

Adresse::Adresse()
{}


void Adresse::setNomAdresse(string m_nomAdresse)
{
	cout << "Entrez le nom de votre adresse: " << endl;
	cin >> m_nomAdresse;
}

void Adresse::setVille(string m_ville)
{
	cout << "Entrez la ville de l'adresse: " << endl;
	cin >> m_ville;
}


void Adresse::setCodePostal(string m_codepostal)
{
	cout << "Entrez le code postal de l'adresse: " << endl;
	cin >> m_codePostal;
}


void Adresse::setPays(string m_pays)
{
	cout << "Entrez le pays de l'adresse: ";
	cin >> m_pays;
}