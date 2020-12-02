#pragma once

#include "GestionCommande.h"
#include "GestionArticle.h"
#include "NombreArticle.h"
#include "GestionAdresse.h"

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCommandes
	/// </summary>
	public ref class MyFormCommandes : public System::Windows::Forms::Form
	{
	public:
		MyFormCommandes(void)
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
		~MyFormCommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;









	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ligne1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codePostal1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ligne2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codePostal2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prixArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ remise;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttonModifierCommande;

	private: System::Windows::Forms::Button^ buttonSupprimerCommande;

	private: System::Windows::Forms::Button^ buttonAjouterCommande;
	private: System::Windows::Forms::Button^ buttonValidation;
	private: System::Windows::Forms::TextBox^ textBoxReference;


	private: System::Windows::Forms::TextBox^ textBoxDateAchatCommande;
	private: System::Windows::Forms::TextBox^ textBoxDateEnregistrementReglement;
	private: System::Windows::Forms::TextBox^ textBoxDateLivraison;


	private: System::Windows::Forms::TextBox^ textBoxPrenomClient;
	private: System::Windows::Forms::DataGridView^ dataGridView5;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		GestionCommande^ GestionC = gcnew GestionCommande;
		GestionArticle^ GestionArt = gcnew GestionArticle;
		GestionAdresse^ GestionA = gcnew GestionAdresse;
		Commande^ CommandeModifier = gcnew Commande;
		array<NombreArticle^>^ TabArticleModifier;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateLivraison;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateReglement;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateAchat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantHT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantTVA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantTTC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prenomClient;
		   Adresse^ AdresseFacturation = gcnew Adresse;
		Adresse^ AdresseLivraison = gcnew Adresse;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->ligne1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->codePostal1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->ligne2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->codePostal2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->nomArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prixArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remise = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonModifierCommande = (gcnew System::Windows::Forms::Button());
			this->buttonSupprimerCommande = (gcnew System::Windows::Forms::Button());
			this->buttonAjouterCommande = (gcnew System::Windows::Forms::Button());
			this->buttonValidation = (gcnew System::Windows::Forms::Button());
			this->textBoxReference = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateAchatCommande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateEnregistrementReglement = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->reference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateLivraison = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateReglement = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateAchat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montantHT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montantTVA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montantTTC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nomClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prenomClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->reference,
					this->dateLivraison, this->dateReglement, this->dateAchat, this->montantHT, this->montantTVA, this->montantTTC, this->nomClient,
					this->prenomClient
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(943, 410);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCommandes::dataGridView1_CellClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ligne1,
					this->pays1, this->codePostal1, this->ville1
			});
			this->dataGridView2->Location = System::Drawing::Point(987, 45);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(539, 66);
			this->dataGridView2->TabIndex = 1;
			// 
			// ligne1
			// 
			this->ligne1->HeaderText = L"Ligne";
			this->ligne1->Name = L"ligne1";
			this->ligne1->ReadOnly = true;
			this->ligne1->Width = 190;
			// 
			// pays1
			// 
			this->pays1->HeaderText = L"Pays";
			this->pays1->Name = L"pays1";
			this->pays1->ReadOnly = true;
			// 
			// codePostal1
			// 
			this->codePostal1->HeaderText = L"Code Postal";
			this->codePostal1->Name = L"codePostal1";
			this->codePostal1->ReadOnly = true;
			// 
			// ville1
			// 
			this->ville1->HeaderText = L"Ville";
			this->ville1->Name = L"ville1";
			this->ville1->ReadOnly = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ligne2,
					this->pays2, this->codePostal2, this->ville2
			});
			this->dataGridView3->Location = System::Drawing::Point(987, 138);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(539, 66);
			this->dataGridView3->TabIndex = 2;
			// 
			// ligne2
			// 
			this->ligne2->HeaderText = L"Ligne";
			this->ligne2->Name = L"ligne2";
			this->ligne2->ReadOnly = true;
			this->ligne2->Width = 190;
			// 
			// pays2
			// 
			this->pays2->HeaderText = L"Pays";
			this->pays2->Name = L"pays2";
			this->pays2->ReadOnly = true;
			// 
			// codePostal2
			// 
			this->codePostal2->HeaderText = L"Code Postal";
			this->codePostal2->Name = L"codePostal2";
			this->codePostal2->ReadOnly = true;
			// 
			// ville2
			// 
			this->ville2->HeaderText = L"Ville";
			this->ville2->Name = L"ville2";
			this->ville2->ReadOnly = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nomArticle,
					this->quantite, this->prixArticle, this->remise
			});
			this->dataGridView4->Location = System::Drawing::Point(999, 231);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(515, 192);
			this->dataGridView4->TabIndex = 3;
			// 
			// nomArticle
			// 
			this->nomArticle->HeaderText = L"Nom de l\'article";
			this->nomArticle->Name = L"nomArticle";
			this->nomArticle->Width = 150;
			// 
			// quantite
			// 
			this->quantite->HeaderText = L"Quantité de cet article";
			this->quantite->Name = L"quantite";
			// 
			// prixArticle
			// 
			this->prixArticle->HeaderText = L"Prix unitaire de l\'article";
			this->prixArticle->Name = L"prixArticle";
			this->prixArticle->Width = 120;
			// 
			// remise
			// 
			this->remise->HeaderText = L"Remise sur l\'article";
			this->remise->Name = L"remise";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1178, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 21);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Articles de la commande";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1118, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(302, 21);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Adresse de facturation de la commande";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1118, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(278, 21);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Adresse de livraison de la commande";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(412, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 21);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Commandes\r\n";
			// 
			// buttonModifierCommande
			// 
			this->buttonModifierCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonModifierCommande->Location = System::Drawing::Point(416, 520);
			this->buttonModifierCommande->Name = L"buttonModifierCommande";
			this->buttonModifierCommande->Size = System::Drawing::Size(154, 56);
			this->buttonModifierCommande->TabIndex = 18;
			this->buttonModifierCommande->Text = L"Modifier une commande";
			this->buttonModifierCommande->UseVisualStyleBackColor = true;
			this->buttonModifierCommande->Click += gcnew System::EventHandler(this, &MyFormCommandes::buttonModifierCommande_Click);
			// 
			// buttonSupprimerCommande
			// 
			this->buttonSupprimerCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonSupprimerCommande->Location = System::Drawing::Point(220, 520);
			this->buttonSupprimerCommande->Name = L"buttonSupprimerCommande";
			this->buttonSupprimerCommande->Size = System::Drawing::Size(154, 56);
			this->buttonSupprimerCommande->TabIndex = 19;
			this->buttonSupprimerCommande->Text = L"Supprimer une commande";
			this->buttonSupprimerCommande->UseVisualStyleBackColor = true;
			this->buttonSupprimerCommande->Click += gcnew System::EventHandler(this, &MyFormCommandes::buttonSupprimerCommande_Click);
			// 
			// buttonAjouterCommande
			// 
			this->buttonAjouterCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAjouterCommande->Location = System::Drawing::Point(25, 520);
			this->buttonAjouterCommande->Name = L"buttonAjouterCommande";
			this->buttonAjouterCommande->Size = System::Drawing::Size(154, 56);
			this->buttonAjouterCommande->TabIndex = 20;
			this->buttonAjouterCommande->Text = L"Ajouter une commande";
			this->buttonAjouterCommande->UseVisualStyleBackColor = true;
			this->buttonAjouterCommande->Click += gcnew System::EventHandler(this, &MyFormCommandes::buttonAjouterCommande_Click);
			// 
			// buttonValidation
			// 
			this->buttonValidation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonValidation->Location = System::Drawing::Point(682, 533);
			this->buttonValidation->Name = L"buttonValidation";
			this->buttonValidation->Size = System::Drawing::Size(100, 33);
			this->buttonValidation->TabIndex = 21;
			this->buttonValidation->Text = L"VALIDER";
			this->buttonValidation->UseVisualStyleBackColor = true;
			this->buttonValidation->Visible = false;
			this->buttonValidation->Click += gcnew System::EventHandler(this, &MyFormCommandes::buttonValidation_Click);
			// 
			// textBoxReference
			// 
			this->textBoxReference->Location = System::Drawing::Point(34, 473);
			this->textBoxReference->Name = L"textBoxReference";
			this->textBoxReference->Size = System::Drawing::Size(97, 20);
			this->textBoxReference->TabIndex = 22;
			this->textBoxReference->Visible = false;
			// 
			// textBoxDateAchatCommande
			// 
			this->textBoxDateAchatCommande->Location = System::Drawing::Point(343, 473);
			this->textBoxDateAchatCommande->Name = L"textBoxDateAchatCommande";
			this->textBoxDateAchatCommande->Size = System::Drawing::Size(97, 20);
			this->textBoxDateAchatCommande->TabIndex = 25;
			this->textBoxDateAchatCommande->Visible = false;
			// 
			// textBoxDateEnregistrementReglement
			// 
			this->textBoxDateEnregistrementReglement->Location = System::Drawing::Point(240, 473);
			this->textBoxDateEnregistrementReglement->Name = L"textBoxDateEnregistrementReglement";
			this->textBoxDateEnregistrementReglement->Size = System::Drawing::Size(97, 20);
			this->textBoxDateEnregistrementReglement->TabIndex = 26;
			this->textBoxDateEnregistrementReglement->Visible = false;
			// 
			// textBoxDateLivraison
			// 
			this->textBoxDateLivraison->Location = System::Drawing::Point(137, 473);
			this->textBoxDateLivraison->Name = L"textBoxDateLivraison";
			this->textBoxDateLivraison->Size = System::Drawing::Size(97, 20);
			this->textBoxDateLivraison->TabIndex = 27;
			this->textBoxDateLivraison->Visible = false;
			// 
			// textBoxPrenomClient
			// 
			this->textBoxPrenomClient->Location = System::Drawing::Point(858, 473);
			this->textBoxPrenomClient->Name = L"textBoxPrenomClient";
			this->textBoxPrenomClient->Size = System::Drawing::Size(97, 20);
			this->textBoxPrenomClient->TabIndex = 30;
			this->textBoxPrenomClient->Visible = false;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView5->Location = System::Drawing::Point(999, 463);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(515, 103);
			this->dataGridView5->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Moyen de Paiement";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Montant";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 120;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1206, 436);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 21);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Info Paiements";
			// 
			// reference
			// 
			this->reference->HeaderText = L"Référence";
			this->reference->Name = L"reference";
			this->reference->ReadOnly = true;
			// 
			// dateLivraison
			// 
			this->dateLivraison->HeaderText = L"Date prévue de la livraison";
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->ReadOnly = true;
			// 
			// dateReglement
			// 
			this->dateReglement->HeaderText = L"Date de l\'enregistrement du règlement";
			this->dateReglement->Name = L"dateReglement";
			this->dateReglement->ReadOnly = true;
			// 
			// dateAchat
			// 
			this->dateAchat->HeaderText = L"Date de l\'achat de la commande";
			this->dateAchat->Name = L"dateAchat";
			this->dateAchat->ReadOnly = true;
			// 
			// montantHT
			// 
			this->montantHT->HeaderText = L"Montant HT";
			this->montantHT->Name = L"montantHT";
			this->montantHT->ReadOnly = true;
			// 
			// montantTVA
			// 
			this->montantTVA->HeaderText = L"Montant TVA";
			this->montantTVA->Name = L"montantTVA";
			this->montantTVA->ReadOnly = true;
			// 
			// montantTTC
			// 
			this->montantTTC->HeaderText = L"Montant TTC";
			this->montantTTC->Name = L"montantTTC";
			this->montantTTC->ReadOnly = true;
			// 
			// nomClient
			// 
			this->nomClient->HeaderText = L"Nom du client";
			this->nomClient->Name = L"nomClient";
			this->nomClient->ReadOnly = true;
			// 
			// prenomClient
			// 
			this->prenomClient->HeaderText = L"ID Client";
			this->prenomClient->Name = L"prenomClient";
			this->prenomClient->ReadOnly = true;
			// 
			// MyFormCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1538, 588);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->textBoxPrenomClient);
			this->Controls->Add(this->textBoxDateLivraison);
			this->Controls->Add(this->textBoxDateEnregistrementReglement);
			this->Controls->Add(this->textBoxDateAchatCommande);
			this->Controls->Add(this->textBoxReference);
			this->Controls->Add(this->buttonValidation);
			this->Controls->Add(this->buttonAjouterCommande);
			this->Controls->Add(this->buttonSupprimerCommande);
			this->Controls->Add(this->buttonModifierCommande);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormCommandes";
			this->Text = L"MyFormCommandes";
			this->Load += gcnew System::EventHandler(this, &MyFormCommandes::MyFormCommandes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();


			majDataViewCommande(GestionC->getCommandes());
			majDataViewNombreArticle(GestionArt->getNombreArticleCommande(GestionC->getCommandes()[0]->getID()));
			majDataViewAdresseCommande(GestionA->getAdresse(GestionC->getCommandes()[0]->getID(), "Commande", ""), dataGridView2);
			majDataViewAdresseCommande(GestionA->getAdresse(GestionC->getCommandes()[0]->getID(), "Commande", "_Commande_AdresseFacturation"), dataGridView3);
		}
#pragma endregion

		String^ nomFonction;
	private: System::Void MyFormCommandes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonAjouterCommande_Click(System::Object^ sender, System::EventArgs^ e) {

		this->buttonModifierCommande->Visible = !this->buttonModifierCommande->Visible;
		this->textBoxReference->Visible = !this->textBoxReference->Visible;
		this->textBoxDateLivraison->Visible = !this->textBoxDateLivraison->Visible;
		this->textBoxDateEnregistrementReglement->Visible = !this->textBoxDateEnregistrementReglement->Visible;
		this->textBoxDateAchatCommande->Visible = !this->textBoxDateAchatCommande->Visible;
		this->textBoxPrenomClient->Visible = !this->textBoxPrenomClient->Visible;
		buttonValidation->Visible = !buttonValidation->Visible;

		this->textBoxReference->Text = "";
		this->textBoxDateLivraison->Text = "";
		this->textBoxDateEnregistrementReglement->Text = "";
		this->textBoxDateAchatCommande->Text = "";
		this->textBoxPrenomClient->Text = "";

		dataGridView4->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView1->ClearSelection();
		nomFonction = "AJOUTER";
	}
private: System::Void buttonSupprimerCommande_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Voulez-vous vraiment supprimer cette commande ? ", "Supprimer une commande", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
	}
}
private: System::Void buttonModifierCommande_Click(System::Object^ sender, System::EventArgs^ e) {

	this->buttonAjouterCommande->Visible = !this->buttonAjouterCommande->Visible;
	this->textBoxReference->Visible = !this->textBoxReference->Visible;
	this->textBoxDateLivraison->Visible = !this->textBoxDateLivraison->Visible;
	this->textBoxDateEnregistrementReglement->Visible = !this->textBoxDateEnregistrementReglement->Visible;
	this->textBoxDateAchatCommande->Visible = !this->textBoxDateAchatCommande->Visible;
	this->textBoxPrenomClient->Visible = !this->textBoxPrenomClient->Visible;
	this->buttonValidation->Visible = !this->buttonValidation->Visible;

	/*this->textBoxReference->Text = CommandeModif->getReference();
	this->textBoxDateLivraison->Text = CommndeModif->getDateLivraison();
	etc...*/
	
	nomFonction = "MODIFIER";

	int IndexActuel = dataGridView1->CurrentCell->RowIndex;
	CommandeModifier = GestionC->getCommandes()[IndexActuel];


	this->textBoxReference->Text = CommandeModifier->getReference();
	this->textBoxDateLivraison->Text = CommandeModifier->getDatePrevueLivraison();
	this->textBoxDateEnregistrementReglement->Text = CommandeModifier->getDateReglementEnregistre();
	this->textBoxDateAchatCommande->Text = CommandeModifier->getDateAchatCommande();
	this->textBoxPrenomClient->Text = Convert::ToString(CommandeModifier->getID_Client());



}
private: System::Void buttonValidation_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Voulez-vous vraiment " + nomFonction + " cet article ? ", nomFonction + " un article", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		this->buttonAjouterCommande->Visible = true;
		this->buttonModifierCommande->Visible = true;
		this->textBoxReference->Visible = !this->textBoxReference->Visible;
		this->textBoxDateLivraison->Visible = !this->textBoxDateLivraison->Visible;
		this->textBoxDateEnregistrementReglement->Visible = !this->textBoxDateEnregistrementReglement->Visible;
		this->textBoxDateAchatCommande->Visible = !this->textBoxDateAchatCommande->Visible;
		this->textBoxPrenomClient->Visible = !this->textBoxPrenomClient->Visible;
		this->buttonValidation->Visible = !this->buttonValidation->Visible;


		
		TabArticleModifier = gcnew array<NombreArticle^>(dataGridView4->RowCount-1);


		for (int i = 0; i < TabArticleModifier->Length; i++) {
			TabArticleModifier[i] = gcnew NombreArticle;
			TabArticleModifier[i]->article->setNom(dataGridView4->Rows[i]->Cells[0]->Value->ToString());
			TabArticleModifier[i]->Quantite = (Convert::ToInt32(dataGridView4->Rows[i]->Cells[1]->Value));
			TabArticleModifier[i]->Prix = (Convert::ToInt32(dataGridView4->Rows[i]->Cells[2]->Value));
			TabArticleModifier[i]->Remise = (Convert::ToInt32(dataGridView4->Rows[i]->Cells[3]->Value));
		}

	}

}


private: void majDataViewCommande(array<Commande^>^ TableauCommande) {

	dataGridView1->Rows->Clear();

	for (int ligne = 0; ligne < TableauCommande->Length; ligne++) {

		dataGridView1->Rows->Add();

		dataGridView1->Rows[ligne]->Cells[0]->Value = TableauCommande[ligne]->getReference();
		dataGridView1->Rows[ligne]->Cells[1]->Value = TableauCommande[ligne]->getDatePrevueLivraison();
		dataGridView1->Rows[ligne]->Cells[2]->Value = TableauCommande[ligne]->getDateReglementEnregistre();
		dataGridView1->Rows[ligne]->Cells[3]->Value = TableauCommande[ligne]->getDateAchatCommande();
		dataGridView1->Rows[ligne]->Cells[4]->Value = TableauCommande[ligne]->getMontantHT() + " €";
		dataGridView1->Rows[ligne]->Cells[5]->Value = TableauCommande[ligne]->getMontantTVA() + " €";
		dataGridView1->Rows[ligne]->Cells[6]->Value = TableauCommande[ligne]->getMontantTTC() + " €";
		dataGridView1->Rows[ligne]->Cells[7]->Value = TableauCommande[ligne]->getNom();
		dataGridView1->Rows[ligne]->Cells[8]->Value = TableauCommande[ligne]->getID_Client();
	}
}


private: void majDataViewNombreArticle(array<NombreArticle^>^ TableauArticle) {

	dataGridView4->Rows->Clear();

	for (int ligne = 0; ligne < TableauArticle->Length; ligne++) {

		dataGridView4->Rows->Add();

		dataGridView4->Rows[ligne]->Cells[0]->Value = TableauArticle[ligne]->article->getNom();
		dataGridView4->Rows[ligne]->Cells[1]->Value = TableauArticle[ligne]->Quantite;
		dataGridView4->Rows[ligne]->Cells[2]->Value = TableauArticle[ligne]->Prix + " €";
		dataGridView4->Rows[ligne]->Cells[3]->Value = TableauArticle[ligne]->Remise;

	}
}


private: void majDataViewAdresseCommande(array<Adresse^>^ TableauAdresse,DataGridView^ D) {
	
	D->Rows->Clear();

	for (int ligne = 0; ligne < TableauAdresse->Length; ligne++) {

		D->Rows->Add();

		D->Rows[ligne]->Cells[0]->Value = TableauAdresse[ligne]->getLigneAdresse();
		D->Rows[ligne]->Cells[1]->Value = TableauAdresse[ligne]->getPays();
		D->Rows[ligne]->Cells[2]->Value = TableauAdresse[ligne]->getCP();
		D->Rows[ligne]->Cells[3]->Value = TableauAdresse[ligne]->getVille();

	}
}




private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int IndexActuel = dataGridView1->CurrentCell->RowIndex;
	CommandeModifier = GestionC->getCommandes()[IndexActuel];
	majDataViewNombreArticle(GestionArt->getNombreArticleCommande(CommandeModifier->getID()));
	majDataViewAdresseCommande(GestionA->getAdresse(CommandeModifier->getID(), "Commande", ""), dataGridView2);
	majDataViewAdresseCommande(GestionA->getAdresse(CommandeModifier->getID(), "Commande", "_Commande_AdresseFacturation"), dataGridView3);

}
};
}
