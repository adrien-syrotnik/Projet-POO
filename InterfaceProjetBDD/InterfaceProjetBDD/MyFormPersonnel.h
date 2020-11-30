#pragma once

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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;





	private: System::Windows::Forms::TextBox^ NomPersonnel;
	private: System::Windows::Forms::TextBox^ PrenomPersonnel;
	private: System::Windows::Forms::TextBox^ AdressePersonnel;
	private: System::Windows::Forms::TextBox^ DateEmbauchePersonnel;
	private: System::Windows::Forms::TextBox^ Superieur;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prénom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateEmbauche;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Supérieur;
















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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->AdressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->DateEmbauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->Superieur = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prénom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateEmbauche = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Supérieur = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(667, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Actualisation de la base de données";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(736, 469);
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
			this->button3->Location = System::Drawing::Point(736, 225);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Supprimer un personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button3_Click);
			// 
			// NomPersonnel
			// 
			this->NomPersonnel->Location = System::Drawing::Point(71, 499);
			this->NomPersonnel->Name = L"NomPersonnel";
			this->NomPersonnel->Size = System::Drawing::Size(100, 20);
			this->NomPersonnel->TabIndex = 9;
			// 
			// PrenomPersonnel
			// 
			this->PrenomPersonnel->Location = System::Drawing::Point(177, 499);
			this->PrenomPersonnel->Name = L"PrenomPersonnel";
			this->PrenomPersonnel->Size = System::Drawing::Size(100, 20);
			this->PrenomPersonnel->TabIndex = 10;
			// 
			// AdressePersonnel
			// 
			this->AdressePersonnel->Location = System::Drawing::Point(283, 499);
			this->AdressePersonnel->Name = L"AdressePersonnel";
			this->AdressePersonnel->Size = System::Drawing::Size(100, 20);
			this->AdressePersonnel->TabIndex = 11;
			// 
			// DateEmbauchePersonnel
			// 
			this->DateEmbauchePersonnel->Location = System::Drawing::Point(389, 499);
			this->DateEmbauchePersonnel->Name = L"DateEmbauchePersonnel";
			this->DateEmbauchePersonnel->Size = System::Drawing::Size(100, 20);
			this->DateEmbauchePersonnel->TabIndex = 12;
			// 
			// Superieur
			// 
			this->Superieur->Location = System::Drawing::Point(495, 499);
			this->Superieur->Name = L"Superieur";
			this->Superieur->Size = System::Drawing::Size(100, 20);
			this->Superieur->TabIndex = 13;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nom, this->Prénom,
					this->Adresse, this->DateEmbauche, this->Supérieur
			});
			this->dataGridView1->Location = System::Drawing::Point(48, 68);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(613, 367);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersonnel::dataGridView1_CellContentClick);
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
			// Adresse
			// 
			this->Adresse->HeaderText = L"Adresse";
			this->Adresse->Name = L"Adresse";
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
			this->ClientSize = System::Drawing::Size(1068, 563);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Superieur);
			this->Controls->Add(this->DateEmbauchePersonnel);
			this->Controls->Add(this->AdressePersonnel);
			this->Controls->Add(this->PrenomPersonnel);
			this->Controls->Add(this->NomPersonnel);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyFormPersonnel";
			this->Text = L"MyFormPersonnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	int ligne = 0;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->dataGridView1->Rows->Add();
		this->dataGridView1->Rows[ligne]->Cells[0]->Value = this->NomPersonnel->Text;
		this->dataGridView1->Rows[ligne]->Cells[1]->Value = this->PrenomPersonnel->Text;
		this->dataGridView1->Rows[ligne]->Cells[2]->Value = this->AdressePersonnel->Text;
		this->dataGridView1->Rows[ligne]->Cells[3]->Value = this->DateEmbauchePersonnel->Text;
		this->dataGridView1->Rows[ligne]->Cells[4]->Value = this->Superieur->Text;

		this->NomPersonnel->Text ="";
		this->PrenomPersonnel->Text = "";
		this->PrenomPersonnel->Text = "";
		this->AdressePersonnel->Text = "";
		this->DateEmbauchePersonnel->Text = "";
		this->Superieur->Text = "";
		ligne++;
		}
	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Voulez-vous vraiment supprimer ce personnel ? ", "Supprimer un personnel", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		dataGridView1->/*Selected*/Rows->Clear();
	}
}


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
