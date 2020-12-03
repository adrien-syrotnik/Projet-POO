#pragma once

#include "GestionClient.h"
#include "GestionCommande.h"
#include "GestionAdresse.h"


namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormClient
	/// </summary>
	public ref class MyFormClient : public System::Windows::Forms::Form
	{
	public:
		MyFormClient(void)
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
		~MyFormClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prenom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateAnniv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date1reCommande;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxDate1Commande;


	private: System::Windows::Forms::TextBox^ textBoxDateAnniv;

	private: System::Windows::Forms::TextBox^ textBoxPrénom;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonAjouterClient;
	private: System::Windows::Forms::Button^ buttonSupprimerClient;
	private: System::Windows::Forms::Button^ buttonModifierClient;
	private: System::Windows::Forms::Button^ validationButton;















	private: System::Windows::Forms::Button^ validationButtonAdresseFacturation;
	private: System::Windows::Forms::Button^ validationButtonAdresseLivraison;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ligne1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codePostal1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ligne2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codePostal2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateLivraison;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateReglement;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateAchat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantHT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantTVA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantTTC;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		GestionClient^ GestionC = gcnew GestionClient;
		GestionCommande^ GestionCom = gcnew GestionCommande;
		GestionAdresse^ GestionA = gcnew GestionAdresse;
		Client^ ClientActu = gcnew Client;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prenom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateAnniv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date1reCommande = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Ligne1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->codePostal1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->ligne2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->codePostal2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->reference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateLivraison = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateReglement = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateAchat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montantHT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montantTVA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->montantTTC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate1Commande = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateAnniv = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrénom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonAjouterClient = (gcnew System::Windows::Forms::Button());
			this->buttonSupprimerClient = (gcnew System::Windows::Forms::Button());
			this->buttonModifierClient = (gcnew System::Windows::Forms::Button());
			this->validationButton = (gcnew System::Windows::Forms::Button());
			this->validationButtonAdresseFacturation = (gcnew System::Windows::Forms::Button());
			this->validationButtonAdresseLivraison = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nom, this->prenom,
					this->DateAnniv, this->date1reCommande
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 44);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 370);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormClient::dataGridView1_CellClick);
			// 
			// nom
			// 
			this->nom->HeaderText = L"Nom";
			this->nom->Name = L"nom";
			// 
			// prenom
			// 
			this->prenom->HeaderText = L"Prénom";
			this->prenom->Name = L"prenom";
			// 
			// DateAnniv
			// 
			this->DateAnniv->HeaderText = L"Date anniversaire";
			this->DateAnniv->Name = L"DateAnniv";
			// 
			// date1reCommande
			// 
			this->date1reCommande->HeaderText = L"Date 1ere commande";
			this->date1reCommande->Name = L"date1reCommande";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Ligne1,
					this->pays1, this->codePostal1, this->ville1
			});
			this->dataGridView2->Location = System::Drawing::Point(678, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(537, 97);
			this->dataGridView2->TabIndex = 1;
			// 
			// Ligne1
			// 
			this->Ligne1->HeaderText = L"Ligne";
			this->Ligne1->Name = L"Ligne1";
			this->Ligne1->Width = 190;
			// 
			// pays1
			// 
			this->pays1->HeaderText = L"Pays";
			this->pays1->Name = L"pays1";
			// 
			// codePostal1
			// 
			this->codePostal1->HeaderText = L"Code postal";
			this->codePostal1->Name = L"codePostal1";
			// 
			// ville1
			// 
			this->ville1->HeaderText = L"Ville";
			this->ville1->Name = L"ville1";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ligne2,
					this->pays2, this->codePostal2, this->ville2
			});
			this->dataGridView3->Location = System::Drawing::Point(678, 135);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(537, 94);
			this->dataGridView3->TabIndex = 2;
			// 
			// ligne2
			// 
			this->ligne2->HeaderText = L"Ligne";
			this->ligne2->Name = L"ligne2";
			this->ligne2->Width = 190;
			// 
			// pays2
			// 
			this->pays2->HeaderText = L"Pays";
			this->pays2->Name = L"pays2";
			// 
			// codePostal2
			// 
			this->codePostal2->HeaderText = L"Code postal";
			this->codePostal2->Name = L"codePostal2";
			// 
			// ville2
			// 
			this->ville2->HeaderText = L"Ville";
			this->ville2->Name = L"ville2";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->reference,
					this->dateLivraison, this->dateReglement, this->dateAchat, this->montantHT, this->montantTVA, this->montantTTC
			});
			this->dataGridView4->Location = System::Drawing::Point(746, 263);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->Size = System::Drawing::Size(713, 288);
			this->dataGridView4->TabIndex = 3;
			// 
			// reference
			// 
			this->reference->HeaderText = L"Référence";
			this->reference->Name = L"reference";
			this->reference->ReadOnly = true;
			// 
			// dateLivraison
			// 
			this->dateLivraison->HeaderText = L"Date prévue pour la livraison";
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
			this->dateAchat->HeaderText = L"Date d\'achat";
			this->dateAchat->Name = L"dateAchat";
			this->dateAchat->ReadOnly = true;
			// 
			// montantHT
			// 
			this->montantHT->HeaderText = L"Montant HT";
			this->montantHT->Name = L"montantHT";
			this->montantHT->ReadOnly = true;
			this->montantHT->Width = 90;
			// 
			// montantTVA
			// 
			this->montantTVA->HeaderText = L"Montant TVA";
			this->montantTVA->Name = L"montantTVA";
			this->montantTVA->ReadOnly = true;
			this->montantTVA->Width = 90;
			// 
			// montantTTC
			// 
			this->montantTTC->HeaderText = L"Montant TTC";
			this->montantTTC->Name = L"montantTTC";
			this->montantTTC->ReadOnly = true;
			this->montantTTC->Width = 90;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(12, 427);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(106, 20);
			this->textBoxNom->TabIndex = 4;
			this->textBoxNom->Visible = false;
			// 
			// textBoxDate1Commande
			// 
			this->textBoxDate1Commande->Location = System::Drawing::Point(348, 427);
			this->textBoxDate1Commande->Name = L"textBoxDate1Commande";
			this->textBoxDate1Commande->Size = System::Drawing::Size(106, 20);
			this->textBoxDate1Commande->TabIndex = 5;
			this->textBoxDate1Commande->Visible = false;
			// 
			// textBoxDateAnniv
			// 
			this->textBoxDateAnniv->Location = System::Drawing::Point(236, 427);
			this->textBoxDateAnniv->Name = L"textBoxDateAnniv";
			this->textBoxDateAnniv->Size = System::Drawing::Size(106, 20);
			this->textBoxDateAnniv->TabIndex = 6;
			this->textBoxDateAnniv->Visible = false;
			// 
			// textBoxPrénom
			// 
			this->textBoxPrénom->Location = System::Drawing::Point(124, 427);
			this->textBoxPrénom->Name = L"textBoxPrénom";
			this->textBoxPrénom->Size = System::Drawing::Size(106, 20);
			this->textBoxPrénom->TabIndex = 7;
			this->textBoxPrénom->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(516, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 21);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Adresse Livraison";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(516, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 21);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Adresse Facturation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(649, 393);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 21);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Commandes";
			// 
			// buttonAjouterClient
			// 
			this->buttonAjouterClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAjouterClient->Location = System::Drawing::Point(25, 487);
			this->buttonAjouterClient->Name = L"buttonAjouterClient";
			this->buttonAjouterClient->Size = System::Drawing::Size(154, 41);
			this->buttonAjouterClient->TabIndex = 11;
			this->buttonAjouterClient->Text = L"Ajouter un client";
			this->buttonAjouterClient->UseVisualStyleBackColor = true;
			this->buttonAjouterClient->Click += gcnew System::EventHandler(this, &MyFormClient::buttonAjouterClient_Click);
			// 
			// buttonSupprimerClient
			// 
			this->buttonSupprimerClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonSupprimerClient->Location = System::Drawing::Point(199, 487);
			this->buttonSupprimerClient->Name = L"buttonSupprimerClient";
			this->buttonSupprimerClient->Size = System::Drawing::Size(156, 41);
			this->buttonSupprimerClient->TabIndex = 12;
			this->buttonSupprimerClient->Text = L"Supprimer un client";
			this->buttonSupprimerClient->UseVisualStyleBackColor = true;
			this->buttonSupprimerClient->Click += gcnew System::EventHandler(this, &MyFormClient::buttonSupprimerClient_Click);
			// 
			// buttonModifierClient
			// 
			this->buttonModifierClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonModifierClient->Location = System::Drawing::Point(380, 487);
			this->buttonModifierClient->Name = L"buttonModifierClient";
			this->buttonModifierClient->Size = System::Drawing::Size(142, 41);
			this->buttonModifierClient->TabIndex = 13;
			this->buttonModifierClient->Text = L"Modifier un client";
			this->buttonModifierClient->UseVisualStyleBackColor = true;
			this->buttonModifierClient->Click += gcnew System::EventHandler(this, &MyFormClient::buttonModifierClient_Click);
			// 
			// validationButton
			// 
			this->validationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->validationButton->Location = System::Drawing::Point(160, 555);
			this->validationButton->Name = L"validationButton";
			this->validationButton->Size = System::Drawing::Size(135, 40);
			this->validationButton->TabIndex = 14;
			this->validationButton->Text = L"VALIDER";
			this->validationButton->UseVisualStyleBackColor = true;
			this->validationButton->Visible = false;
			this->validationButton->Click += gcnew System::EventHandler(this, &MyFormClient::validationButton_Click);
			// 
			// validationButtonAdresseFacturation
			// 
			this->validationButtonAdresseFacturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->validationButtonAdresseFacturation->Location = System::Drawing::Point(1246, 153);
			this->validationButtonAdresseFacturation->Name = L"validationButtonAdresseFacturation";
			this->validationButtonAdresseFacturation->Size = System::Drawing::Size(197, 56);
			this->validationButtonAdresseFacturation->TabIndex = 15;
			this->validationButtonAdresseFacturation->Text = L"Valider l\'adresse de facturation";
			this->validationButtonAdresseFacturation->UseVisualStyleBackColor = true;
			this->validationButtonAdresseFacturation->Click += gcnew System::EventHandler(this, &MyFormClient::validationButtonAdresseFacturation_Click);
			// 
			// validationButtonAdresseLivraison
			// 
			this->validationButtonAdresseLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->validationButtonAdresseLivraison->Location = System::Drawing::Point(1246, 27);
			this->validationButtonAdresseLivraison->Name = L"validationButtonAdresseLivraison";
			this->validationButtonAdresseLivraison->Size = System::Drawing::Size(197, 56);
			this->validationButtonAdresseLivraison->TabIndex = 16;
			this->validationButtonAdresseLivraison->Text = L"Valider l\'adresse de livraison";
			this->validationButtonAdresseLivraison->UseVisualStyleBackColor = true;
			this->validationButtonAdresseLivraison->Click += gcnew System::EventHandler(this, &MyFormClient::validationButtonAdresseLivraison_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(245, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 21);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Client";
			// 
			// MyFormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1483, 625);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->validationButtonAdresseLivraison);
			this->Controls->Add(this->validationButtonAdresseFacturation);
			this->Controls->Add(this->validationButton);
			this->Controls->Add(this->buttonModifierClient);
			this->Controls->Add(this->buttonSupprimerClient);
			this->Controls->Add(this->buttonAjouterClient);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPrénom);
			this->Controls->Add(this->textBoxDateAnniv);
			this->Controls->Add(this->textBoxDate1Commande);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormClient";
			this->Text = L"MyFormClient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			ClientActu = GestionC->getClients()[0];
			majDataViewClient(GestionC->getClients());
			majDataViewCommandeClient(GestionCom->getCommandeClient(ClientActu->getID()));
			majDataViewAdresseFacturationClient(GestionA->getAdresseClient(ClientActu->getID(), "Facturation"));
			majDataViewAdresseLivraisonClient(GestionA->getAdresseClient(ClientActu->getID(), "Livraison"));

		}
#pragma endregion
private: System::Void buttonAjouterClient_Click(System::Object^ sender, System::EventArgs^ e) {

	this->buttonModifierClient->Visible = !this->buttonModifierClient->Visible;
	this->textBoxNom->Visible = !this->textBoxNom->Visible;
	this->textBoxPrénom->Visible = !this->textBoxPrénom->Visible;
	this->textBoxDate1Commande->Visible = !this->textBoxDate1Commande->Visible;
	this->textBoxDateAnniv->Visible = !this->textBoxDateAnniv->Visible;
	validationButton->Visible = !validationButton->Visible;

	textBoxNom->Text = "";
	textBoxPrénom->Text = "";
	textBoxDate1Commande->Text = "";
	textBoxDateAnniv->Text = "";

	ClientActu = gcnew Client;
	NomFonction = "AJOUTER";

}
private: System::Void buttonModifierClient_Click(System::Object^ sender, System::EventArgs^ e) {

	this->buttonAjouterClient->Visible = !this->buttonAjouterClient->Visible;
	this->textBoxNom->Visible = !this->textBoxNom->Visible;
	this->textBoxPrénom->Visible = !this->textBoxPrénom->Visible;
	this->textBoxDate1Commande->Visible = !this->textBoxDate1Commande->Visible;
	this->textBoxDateAnniv->Visible = !this->textBoxDateAnniv->Visible;
	validationButton->Visible = !validationButton->Visible;

	this->textBoxNom->Text = ClientActu->getNom();
	this->textBoxPrénom->Text = ClientActu->getPrenom();
	this->textBoxDate1Commande->Text = ClientActu->getDatePremierAchat();
	this->textBoxDateAnniv->Text = ClientActu->getDateAnniversaire();

	NomFonction = "MODIFIER";
}

	   String^ NomFonction;

private: System::Void validationButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Voulez-vous vraiment " + NomFonction + " ce client ? ", NomFonction + " un client", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		ClientActu->setNom(this->textBoxNom->Text);
		ClientActu->setPrenom(this->textBoxPrénom->Text);
		ClientActu->setDatePremierAchat(this->textBoxDate1Commande->Text);
		ClientActu->setDateAnniversaire(this->textBoxDateAnniv->Text);



		this->buttonModifierClient->Visible = true;
		textBoxPrénom->Visible = false;
		textBoxNom->Visible = false;
		textBoxDate1Commande->Visible = false;
		textBoxDateAnniv->Visible = false;
		validationButton->Visible = false;
		this->buttonAjouterClient->Visible = true;


		GestionC->persist(ClientActu);

		ClientActu = GestionC->getClients()[0];

		majDataViewClient(GestionC->getClients());
		majDataViewCommandeClient(GestionCom->getCommandeClient(ClientActu->getID()));
		majDataViewAdresseFacturationClient(GestionA->getAdresseClient(ClientActu->getID(), "Facturation"));
		majDataViewAdresseLivraisonClient(GestionA->getAdresseClient(ClientActu->getID(), "Livraison"));

	}
}
private: System::Void validationButtonAdresseLivraison_Click(System::Object^ sender, System::EventArgs^ e) {


	array<Adresse^>^ TabArticleL = gcnew array<Adresse^>(dataGridView2->RowCount - 1);


	for (int i = 0; i < TabArticleL->Length; i++) {
		TabArticleL[i] = gcnew Adresse;
		TabArticleL[i]->setLigneAdresse(dataGridView2->Rows[i]->Cells[0]->Value->ToString());
		TabArticleL[i]->setPays(dataGridView2->Rows[i]->Cells[1]->Value->ToString());
		TabArticleL[i]->setCP(dataGridView2->Rows[i]->Cells[2]->Value->ToString());
		TabArticleL[i]->setVille(dataGridView2->Rows[i]->Cells[3]->Value->ToString());

	}

	

	int IndexActu = dataGridView1->CurrentCell->RowIndex;
	ClientActu = GestionC->getClients()[IndexActu];

	GestionA->persist(TabArticleL, GestionC->getClients()[IndexActu]->getID(), "AdresseLivraison");

}
private: System::Void validationButtonAdresseFacturation_Click(System::Object^ sender, System::EventArgs^ e) {

	array<Adresse^>^ TabArticleF = gcnew array<Adresse^>(dataGridView3->RowCount - 1);

	for (int i = 0; i < TabArticleF->Length; i++) {
		TabArticleF[i] = gcnew Adresse;
		TabArticleF[i]->setLigneAdresse(dataGridView3->Rows[i]->Cells[0]->Value->ToString());
		TabArticleF[i]->setPays(dataGridView3->Rows[i]->Cells[1]->Value->ToString());
		TabArticleF[i]->setCP(dataGridView3->Rows[i]->Cells[2]->Value->ToString());
		TabArticleF[i]->setVille(dataGridView3->Rows[i]->Cells[3]->Value->ToString());

	}


	int IndexActu = dataGridView1->CurrentCell->RowIndex;
	ClientActu = GestionC->getClients()[IndexActu];

	GestionA->persist(TabArticleF, GestionC->getClients()[IndexActu]->getID(), "AdresseFacturation");

}




	   private: void majDataViewClient(array<Client^>^ TableauClient) {

		   dataGridView1->Rows->Clear();

		   for (int ligne = 0; ligne < TableauClient->Length; ligne++) {

			   dataGridView1->Rows->Add();

			   dataGridView1->Rows[ligne]->Cells[0]->Value = TableauClient[ligne]->getNom();
			   dataGridView1->Rows[ligne]->Cells[1]->Value = TableauClient[ligne]->getPrenom();
			   dataGridView1->Rows[ligne]->Cells[2]->Value = TableauClient[ligne]->getDateAnniversaire();
				dataGridView1->Rows[ligne]->Cells[3]->Value = TableauClient[ligne]->getDatePremierAchat();
			   
		   }
	   }



		   private: void majDataViewCommandeClient(array<Commande^>^ TableauCommande) {

			   dataGridView4->Rows->Clear();

			   for (int ligne = 0; ligne < TableauCommande->Length; ligne++) {

				   dataGridView4->Rows->Add();

				   dataGridView4->Rows[ligne]->Cells[0]->Value = TableauCommande[ligne]->getReference();
				   dataGridView4->Rows[ligne]->Cells[1]->Value = TableauCommande[ligne]->getDatePrevueLivraison();
				   dataGridView4->Rows[ligne]->Cells[2]->Value = TableauCommande[ligne]->getDateReglementEnregistre();
				   dataGridView4->Rows[ligne]->Cells[3]->Value = TableauCommande[ligne]->getDateAchatCommande();
				   dataGridView4->Rows[ligne]->Cells[4]->Value = TableauCommande[ligne]->getMontantHT();
				   dataGridView4->Rows[ligne]->Cells[5]->Value = TableauCommande[ligne]->getMontantTVA();
				   dataGridView4->Rows[ligne]->Cells[6]->Value = TableauCommande[ligne]->getMontantTTC();

			   }
		   }

		private: void majDataViewAdresseFacturationClient(array<Adresse^>^ TableauAdresseF) {

			dataGridView3->Rows->Clear();

			for (int ligne = 0; ligne < TableauAdresseF->Length; ligne++) {

				dataGridView3->Rows->Add();

				dataGridView3->Rows[ligne]->Cells[0]->Value = TableauAdresseF[ligne]->getLigneAdresse();
				dataGridView3->Rows[ligne]->Cells[1]->Value = TableauAdresseF[ligne]->getPays();
				dataGridView3->Rows[ligne]->Cells[2]->Value = TableauAdresseF[ligne]->getCP();
				dataGridView3->Rows[ligne]->Cells[3]->Value = TableauAdresseF[ligne]->getVille();

			}
		}

		private: void majDataViewAdresseLivraisonClient(array<Adresse^>^ TableauAdresseL) {

			dataGridView2->Rows->Clear();

			for (int ligne = 0; ligne < TableauAdresseL->Length; ligne++) {

				dataGridView2->Rows->Add();

				dataGridView2->Rows[ligne]->Cells[0]->Value = TableauAdresseL[ligne]->getLigneAdresse();
				dataGridView2->Rows[ligne]->Cells[1]->Value = TableauAdresseL[ligne]->getPays();
				dataGridView2->Rows[ligne]->Cells[2]->Value = TableauAdresseL[ligne]->getCP();
				dataGridView2->Rows[ligne]->Cells[3]->Value = TableauAdresseL[ligne]->getVille();

			}
		}

			

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



	int IndexActu = dataGridView1->CurrentCell->RowIndex;
	ClientActu = GestionC->getClients()[IndexActu];

	majDataViewCommandeClient(GestionCom->getCommandeClient(ClientActu->getID()));
	majDataViewAdresseFacturationClient(GestionA->getAdresseClient(ClientActu->getID(),"Facturation"));
	majDataViewAdresseLivraisonClient(GestionA->getAdresseClient(ClientActu->getID(), "Livraison"));
}

private: System::Void buttonSupprimerClient_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MessageBox::Show("Voulez-vous vraiment supprimer ce client ? ", "Supprimer un client", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		int IndexActu = dataGridView1->CurrentCell->RowIndex;
		ClientActu = GestionC->getClients()[IndexActu];

		GestionC->del(ClientActu);

		majDataViewClient(GestionC->getClients());
		majDataViewCommandeClient(GestionCom->getCommandeClient(ClientActu->getID()));
		majDataViewAdresseFacturationClient(GestionA->getAdresseClient(ClientActu->getID(), "Facturation"));
		majDataViewAdresseLivraisonClient(GestionA->getAdresseClient(ClientActu->getID(), "Livraison"));
	}
}

};
}
