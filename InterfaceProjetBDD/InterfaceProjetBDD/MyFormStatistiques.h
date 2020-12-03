#pragma once
#include "MyFormStatsArticlesPlusVendus.h"
#include "MyFormStatsArticlesMoinsVendus.h"
#include "MyFormStatsCalculPanier.h"
#include "MyFormStatsChiffreAffaire.h"
#include "MyFormStatsMontantTotal.h"
#include "MyFormStatsProduitsInferieurSeuil.h"
#include "MyFormStatsSimulation.h"
#include "MyFormStatsValeurCommercialeStock.h"
#include "MyFormStatsValeurAchatStock.h"

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStatistiques
	/// </summary>
	public ref class MyFormStatistiques : public System::Windows::Forms::Form
	{
	public:
		MyFormStatistiques(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonCalculPanier;
	private: System::Windows::Forms::Button^ buttonValeurAchatStock;
	protected:


	private: System::Windows::Forms::Button^ buttonArticlePlusVendus;

	private: System::Windows::Forms::Button^ buttonChiffreAffaire;
	private: System::Windows::Forms::Button^ buttonMontantTotal;
	private: System::Windows::Forms::Button^ buttonValeurCommercialeStock;



	private: System::Windows::Forms::Button^ buttonProduitsInferieurSeuil;
	private: System::Windows::Forms::Button^ buttonArticlesMoinsVendus;
	private: System::Windows::Forms::Button^ buttonSimulation;




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonCalculPanier = (gcnew System::Windows::Forms::Button());
			this->buttonValeurAchatStock = (gcnew System::Windows::Forms::Button());
			this->buttonArticlePlusVendus = (gcnew System::Windows::Forms::Button());
			this->buttonChiffreAffaire = (gcnew System::Windows::Forms::Button());
			this->buttonMontantTotal = (gcnew System::Windows::Forms::Button());
			this->buttonValeurCommercialeStock = (gcnew System::Windows::Forms::Button());
			this->buttonProduitsInferieurSeuil = (gcnew System::Windows::Forms::Button());
			this->buttonArticlesMoinsVendus = (gcnew System::Windows::Forms::Button());
			this->buttonSimulation = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(527, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Veuillez choisir la statistique que vous voulez afficher :";
			// 
			// buttonCalculPanier
			// 
			this->buttonCalculPanier->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCalculPanier->Location = System::Drawing::Point(62, 139);
			this->buttonCalculPanier->Name = L"buttonCalculPanier";
			this->buttonCalculPanier->Size = System::Drawing::Size(187, 72);
			this->buttonCalculPanier->TabIndex = 1;
			this->buttonCalculPanier->Text = L"Calculer le panier moyen \r\n";
			this->buttonCalculPanier->UseVisualStyleBackColor = true;
			this->buttonCalculPanier->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonCalculPanier_Click);
			// 
			// buttonValeurAchatStock
			// 
			this->buttonValeurAchatStock->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonValeurAchatStock->Location = System::Drawing::Point(289, 334);
			this->buttonValeurAchatStock->Name = L"buttonValeurAchatStock";
			this->buttonValeurAchatStock->Size = System::Drawing::Size(187, 66);
			this->buttonValeurAchatStock->TabIndex = 2;
			this->buttonValeurAchatStock->Text = L"Calculer la valeur d\'achat du stock";
			this->buttonValeurAchatStock->UseVisualStyleBackColor = true;
			this->buttonValeurAchatStock->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonValeurAchatStock_Click);
			// 
			// buttonArticlePlusVendus
			// 
			this->buttonArticlePlusVendus->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonArticlePlusVendus->Location = System::Drawing::Point(289, 235);
			this->buttonArticlePlusVendus->Name = L"buttonArticlePlusVendus";
			this->buttonArticlePlusVendus->Size = System::Drawing::Size(187, 74);
			this->buttonArticlePlusVendus->TabIndex = 3;
			this->buttonArticlePlusVendus->Text = L"Identifier les 10 articles les plus vendus";
			this->buttonArticlePlusVendus->UseVisualStyleBackColor = true;
			this->buttonArticlePlusVendus->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonArticlePlusVendus_Click);
			// 
			// buttonChiffreAffaire
			// 
			this->buttonChiffreAffaire->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonChiffreAffaire->Location = System::Drawing::Point(289, 139);
			this->buttonChiffreAffaire->Name = L"buttonChiffreAffaire";
			this->buttonChiffreAffaire->Size = System::Drawing::Size(187, 72);
			this->buttonChiffreAffaire->TabIndex = 4;
			this->buttonChiffreAffaire->Text = L"Calculer le chiffre d\'affaires sur un mois ";
			this->buttonChiffreAffaire->UseVisualStyleBackColor = true;
			this->buttonChiffreAffaire->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonChiffreAffaire_Click);
			// 
			// buttonMontantTotal
			// 
			this->buttonMontantTotal->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMontantTotal->Location = System::Drawing::Point(62, 235);
			this->buttonMontantTotal->Name = L"buttonMontantTotal";
			this->buttonMontantTotal->Size = System::Drawing::Size(187, 74);
			this->buttonMontantTotal->TabIndex = 5;
			this->buttonMontantTotal->Text = L"Calculer le montant total des achats pour un client";
			this->buttonMontantTotal->UseVisualStyleBackColor = true;
			this->buttonMontantTotal->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonMontantTotal_Click);
			// 
			// buttonValeurCommercialeStock
			// 
			this->buttonValeurCommercialeStock->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonValeurCommercialeStock->Location = System::Drawing::Point(62, 334);
			this->buttonValeurCommercialeStock->Name = L"buttonValeurCommercialeStock";
			this->buttonValeurCommercialeStock->Size = System::Drawing::Size(187, 66);
			this->buttonValeurCommercialeStock->TabIndex = 6;
			this->buttonValeurCommercialeStock->Text = L"Calculer la valeur commerciale du stock";
			this->buttonValeurCommercialeStock->UseVisualStyleBackColor = true;
			this->buttonValeurCommercialeStock->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonValeurCommercialeStock_Click);
			// 
			// buttonProduitsInferieurSeuil
			// 
			this->buttonProduitsInferieurSeuil->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonProduitsInferieurSeuil->Location = System::Drawing::Point(518, 139);
			this->buttonProduitsInferieurSeuil->Name = L"buttonProduitsInferieurSeuil";
			this->buttonProduitsInferieurSeuil->Size = System::Drawing::Size(184, 72);
			this->buttonProduitsInferieurSeuil->TabIndex = 9;
			this->buttonProduitsInferieurSeuil->Text = L"Identifier les produits inférieur au seuil de réapprovisionnement";
			this->buttonProduitsInferieurSeuil->UseVisualStyleBackColor = true;
			this->buttonProduitsInferieurSeuil->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonProduitsInferieurSeuil_Click);
			// 
			// buttonArticlesMoinsVendus
			// 
			this->buttonArticlesMoinsVendus->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonArticlesMoinsVendus->Location = System::Drawing::Point(518, 235);
			this->buttonArticlesMoinsVendus->Name = L"buttonArticlesMoinsVendus";
			this->buttonArticlesMoinsVendus->Size = System::Drawing::Size(184, 74);
			this->buttonArticlesMoinsVendus->TabIndex = 10;
			this->buttonArticlesMoinsVendus->Text = L"Identifier les 10 articles les moins vendus";
			this->buttonArticlesMoinsVendus->UseVisualStyleBackColor = true;
			this->buttonArticlesMoinsVendus->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonArticlesMoinsVendus_Click);
			// 
			// buttonSimulation
			// 
			this->buttonSimulation->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSimulation->Location = System::Drawing::Point(518, 334);
			this->buttonSimulation->Name = L"buttonSimulation";
			this->buttonSimulation->Size = System::Drawing::Size(184, 66);
			this->buttonSimulation->TabIndex = 11;
			this->buttonSimulation->Text = L"Simulation des variations de valeurs commerciales ";
			this->buttonSimulation->UseVisualStyleBackColor = true;
			this->buttonSimulation->Click += gcnew System::EventHandler(this, &MyFormStatistiques::buttonSimulation_Click);
			// 
			// MyFormStatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 447);
			this->Controls->Add(this->buttonSimulation);
			this->Controls->Add(this->buttonArticlesMoinsVendus);
			this->Controls->Add(this->buttonProduitsInferieurSeuil);
			this->Controls->Add(this->buttonValeurCommercialeStock);
			this->Controls->Add(this->buttonMontantTotal);
			this->Controls->Add(this->buttonChiffreAffaire);
			this->Controls->Add(this->buttonArticlePlusVendus);
			this->Controls->Add(this->buttonValeurAchatStock);
			this->Controls->Add(this->buttonCalculPanier);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormStatistiques";
			this->Text = L"MyFormStatistiques";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonCalculPanier_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsCalculPanier^ FormCalculPanier = gcnew MyFormStatsCalculPanier();
	FormCalculPanier->ShowDialog();
}
private: System::Void buttonChiffreAffaire_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsChiffreAffaire^ FormChiffreAffaire = gcnew MyFormStatsChiffreAffaire();
	FormChiffreAffaire->ShowDialog();
}
private: System::Void buttonProduitsInferieurSeuil_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsProduitsInferieurSeuil^ FormStatsProduitsInferieurSeuil = gcnew MyFormStatsProduitsInferieurSeuil();
	FormStatsProduitsInferieurSeuil->ShowDialog();
}
private: System::Void buttonMontantTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsMontantTotal^ FormStatsMontantTotal = gcnew MyFormStatsMontantTotal();
	FormStatsMontantTotal->ShowDialog();
}
private: System::Void buttonArticlePlusVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsArticlesPlusVendus^ FormStatsArticlesPlusVendus = gcnew MyFormStatsArticlesPlusVendus();
	FormStatsArticlesPlusVendus->ShowDialog();
}
private: System::Void buttonArticlesMoinsVendus_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsArticlesMoinsVendus^ FormStatsArticlesMoinsVendus = gcnew MyFormStatsArticlesMoinsVendus();
	FormStatsArticlesMoinsVendus->ShowDialog();
}
private: System::Void buttonValeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsValeurCommercialeStock^ FormStatsValeurCommercialeStock = gcnew MyFormStatsValeurCommercialeStock();
	FormStatsValeurCommercialeStock->ShowDialog();
}
private: System::Void buttonValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsValeurAchatStock^ FormStatsValeurAchatStock = gcnew MyFormStatsValeurAchatStock();
	FormStatsValeurAchatStock->ShowDialog();
}
private: System::Void buttonSimulation_Click(System::Object^ sender, System::EventArgs^ e) {
	MyFormStatsSimulation^ FormStatsSimulation = gcnew MyFormStatsSimulation();
	FormStatsSimulation->ShowDialog();
}
};
}
