#include <iostream>
#include "Personnel.h"
#include "Adresse.h"
#include <string>
using namespace std;

Personnel::Personnel()
{}


void Personnel::setNomPersonnel(string m_nom)
{
	cout << "Entrez le nom du Personnel: " << endl;
	cin >> m_nomPersonnel;
}


void Personnel::setPrenom(string m_prenom)
{
	cout << "Entrez le prénom du Personnel: " << endl;
	cin >> m_prenom;
}


void Personnel::setDateEmbauche(char dateEmbauche)
{
	cout << "Entrez la date d'embauche du Personnel: " << endl;
	cin >> dateEmbauche;
}

void Personnel::afficherAdresse()
{
	cout << "L'adresse du personnel est :" << 
}

