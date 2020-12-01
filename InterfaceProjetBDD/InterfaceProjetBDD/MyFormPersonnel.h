#pragma once

#include "GestionPersonnel.h"
#include "GestionAdresse.h"



namespace InterfaceProjetBDD {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPersonnel
	/// </summary>
	public ref class MyFormPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormPersonnel(void)
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
		~MyFormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::TextBox^ NomPersonnel;
	private: System::Windows::Forms::TextBox^ PrenomPersonnel;
	private: System::Windows::Forms::TextBox^ AdressePersonnel;
	private: System::Windows::Forms::TextBox^ DateEmbauchePersonnel;
	private: System::Windows::Forms::TextBox^ Superieur;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Button^ majPersonnel;
	private: System::Windows::Forms::Button^ validationButton;





















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		GestionPersonnel^ GestionP = gcnew GestionPersonnel;
		GestionAdresse^ GestionA = gcnew GestionAdresse;
		Personnel^ PersonnelModif = gcnew Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ligne1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prénom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateEmbauche;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Supérieur;





		   Adresse^ AdresseModif = gcnew Adresse;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->AdressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->DateEmbauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->Superieur = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->ligne1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->majPersonnel = (gcnew System::Windows::Forms::Button());
			this->validationButton = (gcnew System::Windows::Forms::Button());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prénom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateEmbauche = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Supérieur = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(560, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ajouter un personnel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(560, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Supprimer un personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button3_Click);
			// 
			// NomPersonnel
			// 
			this->NomPersonnel->Location = System::Drawing::Point(30, 403);
			this->NomPersonnel->Name = L"NomPersonnel";
			this->NomPersonnel->Size = System::Drawing::Size(100, 20);
			this->NomPersonnel->TabIndex = 9;
			this->NomPersonnel->Visible = false;
			// 
			// PrenomPersonnel
			// 
			this->PrenomPersonnel->Location = System::Drawing::Point(136, 403);
			this->PrenomPersonnel->Name = L"PrenomPersonnel";
			this->PrenomPersonnel->Size = System::Drawing::Size(100, 20);
			this->PrenomPersonnel->TabIndex = 10;
			this->PrenomPersonnel->Visible = false;
			// 
			// AdressePersonnel
			// 
			this->AdressePersonnel->Location = System::Drawing::Point(0, 0);
			this->AdressePersonnel->Name = L"AdressePersonnel";
			this->AdressePersonnel->Size = System::Drawing::Size(100, 20);
			this->AdressePersonnel->TabIndex = 0;
			// 
			// DateEmbauchePersonnel
			// 
			this->DateEmbauchePersonnel->Location = System::Drawing::Point(242, 403);
			this->DateEmbauchePersonnel->Name = L"DateEmbauchePersonnel";
			this->DateEmbauchePersonnel->Size = System::Drawing::Size(100, 20);
			this->DateEmbauchePersonnel->TabIndex = 12;
			this->DateEmbauchePersonnel->Visible = false;
			// 
			// Superieur
			// 
			this->Superieur->Location = System::Drawing::Point(348, 403);
			this->Superieur->Name = L"Superieur";
			this->Superieur->Size = System::Drawing::Size(100, 20);
			this->Superieur->TabIndex = 13;
			this->Superieur->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Nom,
					this->Prénom, this->DateEmbauche, this->Supérieur
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(449, 300);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersonnel::dataGridView1_CellClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ligne1,
					this->pays, this->cp, this->ville
			});
			this->dataGridView2->Location = System::Drawing::Point(30, 447);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(449, 74);
			this->dataGridView2->TabIndex = 15;
			// 
			// ligne1
			// 
			this->ligne1->HeaderText = L"Ligne";
			this->ligne1->Name = L"ligne1";
			// 
			// pays
			// 
			this->pays->HeaderText = L"Pays";
			this->pays->Name = L"pays";
			// 
			// cp
			// 
			this->cp->HeaderText = L"Code postal";
			this->cp->Name = L"cp";
			// 
			// ville
			// 
			this->ville->HeaderText = L"Ville";
			this->ville->Name = L"ville";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 33);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Personnel";
			// 
			// majPersonnel
			// 
			this->majPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->majPersonnel->Location = System::Drawing::Point(560, 273);
			this->majPersonnel->Name = L"majPersonnel";
			this->majPersonnel->Size = System::Drawing::Size(261, 50);
			this->majPersonnel->TabIndex = 17;
			this->majPersonnel->Text = L"Mettre à jour un personnel";
			this->majPersonnel->UseVisualStyleBackColor = true;
			this->majPersonnel->Click += gcnew System::EventHandler(this, &MyFormPersonnel::majPersonnel_Click);
			// 
			// validationButton
			// 
			this->validationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->validationButton->Location = System::Drawing::Point(560, 467);
			this->validationButton->Name = L"validationButton";
			this->validationButton->Size = System::Drawing::Size(99, 31);
			this->validationButton->TabIndex = 18;
			this->validationButton->Text = L"VALIDER";
			this->validationButton->UseVisualStyleBackColor = true;
			this->validationButton->Visible = false;
			this->validationButton->Click += gcnew System::EventHandler(this, &MyFormPersonnel::validationButton_Click);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 30;
			// 
			// Nom
			// 
			this->Nom->HeaderText = L"Nom";
			this->Nom->Name = L"Nom";
			// 
			// Prénom
			// 
			this->Prénom->HeaderText = L"Prénom";
			this->Prénom->Name = L"Prénom";
			// 
			// DateEmbauche
			// 
			this->DateEmbauche->HeaderText = L"Date d\'embauche";
			this->DateEmbauche->Name = L"DateEmbauche";
			// 
			// Supérieur
			// 
			this->Supérieur->HeaderText = L"Superieur";
			this->Supérieur->Name = L"Supérieur";
			// 
			// MyFormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 563);
			this->Controls->Add(this->validationButton);
			this->Controls->Add(this->majPersonnel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Superieur);
			this->Controls->Add(this->DateEmbauchePersonnel);
			this->Controls->Add(this->PrenomPersonnel);
			this->Controls->Add(this->NomPersonnel);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"MyFormPersonnel";
			this->Text = L"MyFormPersonnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			majDataViewPersonnel(GestionP->getPersonnels());
			majDataViewAdressePersonnel(GestionA->getAdressePersonnel(GestionP->getPersonnels()[0]->getID()));

		}
#pragma endregion
	//AJOUTER UN PERSONNEL
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->majPersonnel->Visible = !this->majPersonnel->Visible;
		NomPersonnel->Visible = !NomPersonnel->Visible;
		PrenomPersonnel->Visible = !PrenomPersonnel->Visible;
		DateEmbauchePersonnel->Visible = !DateEmbauchePersonnel->Visible;
		Superieur->Visible = !Superieur->Visible;
		validationButton->Visible = !validationButton->Visible;

		NomPersonnel->Text = "";
		PrenomPersonnel->Text = "";
		DateEmbauchePersonnel->Text = "";
		Superieur->Text = "";

		//RESET LA PERSONNE QU'ON MODIF
		PersonnelModif = gcnew Personnel;
		AdresseModif = gcnew Adresse;

		dataGridView1->ClearSelection();
		dataGridView2->Rows->Clear();
		dataGridView2->Rows->Add();

		}
	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int indexActuel = dataGridView1->CurrentCell->RowIndex;
	PersonnelModif = GestionP->getPersonnels()[indexActuel];

	if (MessageBox::Show("Voulez-vous vraiment supprimer ce personnel : '"+ PersonnelModif->getNom() +"' ? ", "Supprimer un personnel", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		
		GestionP->del(PersonnelModif);

		majDataViewPersonnel(GestionP->getPersonnels());
		majDataViewAdressePersonnel(GestionA->getAdressePersonnel(GestionP->getPersonnels()[0]->getID()));
		
	}
}

	private: System::Void validationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Voulez-vous vraiment ajouter ce personnel ? ", "Ajouter un personnel", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {


			PersonnelModif->setNom(this->NomPersonnel->Text);
			PersonnelModif->setPrenom(this->PrenomPersonnel->Text);
			PersonnelModif->setDateEmbauche(this->DateEmbauchePersonnel->Text);
			PersonnelModif->setID_Superieur(Convert::ToInt32(this->Superieur->Text));

			AdresseModif->setLigneAdresse(dataGridView2->Rows[0]->Cells[0]->Value->ToString());
			AdresseModif->setPays(dataGridView2->Rows[0]->Cells[1]->Value->ToString());
			AdresseModif->setCP(dataGridView2->Rows[0]->Cells[2]->Value->ToString());
			AdresseModif->setVille(dataGridView2->Rows[0]->Cells[3]->Value->ToString());

			this->NomPersonnel->Text = "";
			this->PrenomPersonnel->Text = "";
			this->DateEmbauchePersonnel->Text = "";
			this->Superieur->Text = "";

			this->majPersonnel->Visible = true;
			NomPersonnel->Visible = false;
			PrenomPersonnel->Visible = false;
			DateEmbauchePersonnel->Visible = false;
			Superieur->Visible = false;
			validationButton->Visible = false;
			this->button2->Visible = true;


			GestionP->persist(PersonnelModif, AdresseModif);
			majDataViewPersonnel(GestionP->getPersonnels());
			majDataViewAdressePersonnel(GestionA->getAdressePersonnel(GestionP->getPersonnels()[0]->getID()));

		}


		

	}
private: System::Void majPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Visible = !this->button2->Visible;
	NomPersonnel->Visible = !NomPersonnel->Visible;
	PrenomPersonnel->Visible = !PrenomPersonnel->Visible;
	DateEmbauchePersonnel->Visible = !DateEmbauchePersonnel->Visible;
	Superieur->Visible = !Superieur->Visible;
	validationButton->Visible = !validationButton->Visible;

	int indexActuel = dataGridView1->CurrentCell->RowIndex;
	//ATTRIBUTION DES DONNEES PAR RAPPORT A CELUI SELECTIONNE
	PersonnelModif = GestionP->getPersonnels()[indexActuel];
	AdresseModif = GestionA->getAdressePersonnel(PersonnelModif->getID())[0];
	

	this->NomPersonnel->Text = PersonnelModif->getNom();
	this->PrenomPersonnel->Text = PersonnelModif->getPrenom();
	this->DateEmbauchePersonnel->Text = PersonnelModif->getDateEmbauche();
	this->Superieur->Text = Convert::ToString(PersonnelModif->getID_Superieur());
	
	

}

	private: void majDataViewPersonnel(array<Personnel^>^ TableauPersonnel) {

		dataGridView1->Rows->Clear();

		for (int ligne = 0; ligne < TableauPersonnel->Length; ligne++) {

			dataGridView1->Rows->Add();

			dataGridView1->Rows[ligne]->Cells[0]->Value = TableauPersonnel[ligne]->getID();
			dataGridView1->Rows[ligne]->Cells[1]->Value = TableauPersonnel[ligne]->getNom();
			dataGridView1->Rows[ligne]->Cells[2]->Value = TableauPersonnel[ligne]->getPrenom();
			dataGridView1->Rows[ligne]->Cells[3]->Value = TableauPersonnel[ligne]->getDateEmbauche();
			if (TableauPersonnel[ligne]->getID_Superieur() == 0) {
				dataGridView1->Rows[ligne]->Cells[4]->Value = L"Pas de Supérieur";
			}
			else {
				dataGridView1->Rows[ligne]->Cells[4]->Value = TableauPersonnel[ligne]->getID_Superieur();
			}
		}
	}

		   private: void majDataViewAdressePersonnel(array<Adresse^>^ TableauAdresse) {

			   dataGridView2->Rows->Clear();

			   for (int ligne = 0; ligne < TableauAdresse->Length; ligne++) {

				   dataGridView2->Rows->Add();

				   dataGridView2->Rows[ligne]->Cells[0]->Value = TableauAdresse[ligne]->getLigneAdresse();
				   dataGridView2->Rows[ligne]->Cells[1]->Value = TableauAdresse[ligne]->getPays();
				   dataGridView2->Rows[ligne]->Cells[2]->Value = TableauAdresse[ligne]->getCP();
				   dataGridView2->Rows[ligne]->Cells[3]->Value = TableauAdresse[ligne]->getVille();
				   
			   }
		   }

		   




	




private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int IndexActu = dataGridView1->CurrentCell->RowIndex;
	majDataViewAdressePersonnel(GestionA->getAdressePersonnel(GestionP->getPersonnels()[IndexActu]->getID()));
	

}

};





} // dataGridView1->Rows[0]->Cells[0]->Value->ToString();
  // dataGridView1->CurrentCell->Value->ToString();

