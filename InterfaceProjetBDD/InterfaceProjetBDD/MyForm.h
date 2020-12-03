#pragma once
#include "MyFormPersonnel.h"
#include "MyFormCommandes.h"
#include "MyFormClient.h"
#include "MyFormStock.h"
#include "MyFormStatistiques.h"

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Home;
	private: System::Windows::Forms::Button^ MenuPerso;
	private: System::Windows::Forms::Button^ MenuStock;
	private: System::Windows::Forms::Button^ MenuStats;


	private: System::Windows::Forms::Button^ MenuCommandes;
	private: System::Windows::Forms::Button^ MenuClient;
	private: System::Windows::Forms::ComboBox^ comboBoxServeur;

	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ labelServeur;
	private: System::Windows::Forms::Label^ labelBDD;
	private: System::Windows::Forms::ComboBox^ comboBoxBDD;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Home = (gcnew System::Windows::Forms::Label());
			this->MenuPerso = (gcnew System::Windows::Forms::Button());
			this->MenuStock = (gcnew System::Windows::Forms::Button());
			this->MenuStats = (gcnew System::Windows::Forms::Button());
			this->MenuCommandes = (gcnew System::Windows::Forms::Button());
			this->MenuClient = (gcnew System::Windows::Forms::Button());
			this->comboBoxServeur = (gcnew System::Windows::Forms::ComboBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->labelServeur = (gcnew System::Windows::Forms::Label());
			this->labelBDD = (gcnew System::Windows::Forms::Label());
			this->comboBoxBDD = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// Home
			// 
			this->Home->AutoSize = true;
			this->Home->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Home->Location = System::Drawing::Point(533, 34);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(261, 42);
			this->Home->TabIndex = 0;
			this->Home->Text = L"Menu Principal";
			// 
			// MenuPerso
			// 
			this->MenuPerso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->MenuPerso->Location = System::Drawing::Point(101, 163);
			this->MenuPerso->Name = L"MenuPerso";
			this->MenuPerso->Size = System::Drawing::Size(265, 85);
			this->MenuPerso->TabIndex = 1;
			this->MenuPerso->Text = L"Menu Personnel";
			this->MenuPerso->UseVisualStyleBackColor = true;
			this->MenuPerso->Click += gcnew System::EventHandler(this, &MyForm::MenuPerso_Click);
			// 
			// MenuStock
			// 
			this->MenuStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuStock->Location = System::Drawing::Point(1005, 163);
			this->MenuStock->Name = L"MenuStock";
			this->MenuStock->Size = System::Drawing::Size(265, 85);
			this->MenuStock->TabIndex = 2;
			this->MenuStock->Text = L"Menu Stock";
			this->MenuStock->UseVisualStyleBackColor = true;
			this->MenuStock->Click += gcnew System::EventHandler(this, &MyForm::MenuStock_Click);
			// 
			// MenuStats
			// 
			this->MenuStats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuStats->Location = System::Drawing::Point(540, 298);
			this->MenuStats->Name = L"MenuStats";
			this->MenuStats->Size = System::Drawing::Size(263, 85);
			this->MenuStats->TabIndex = 3;
			this->MenuStats->Text = L"Menu Statistiques";
			this->MenuStats->UseVisualStyleBackColor = true;
			this->MenuStats->Click += gcnew System::EventHandler(this, &MyForm::MenuStats_Click);
			// 
			// MenuCommandes
			// 
			this->MenuCommandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuCommandes->Location = System::Drawing::Point(101, 456);
			this->MenuCommandes->Name = L"MenuCommandes";
			this->MenuCommandes->Size = System::Drawing::Size(265, 82);
			this->MenuCommandes->TabIndex = 4;
			this->MenuCommandes->Text = L"Menu Commandes";
			this->MenuCommandes->UseVisualStyleBackColor = true;
			this->MenuCommandes->Click += gcnew System::EventHandler(this, &MyForm::MenuCommandes_Click);
			// 
			// MenuClient
			// 
			this->MenuClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuClient->Location = System::Drawing::Point(1005, 456);
			this->MenuClient->Name = L"MenuClient";
			this->MenuClient->Size = System::Drawing::Size(265, 82);
			this->MenuClient->TabIndex = 5;
			this->MenuClient->Text = L"Menu Client";
			this->MenuClient->UseVisualStyleBackColor = true;
			this->MenuClient->Click += gcnew System::EventHandler(this, &MyForm::MenuClient_Click);
			// 
			// comboBoxServeur
			// 
			this->comboBoxServeur->FormattingEnabled = true;
			this->comboBoxServeur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"LAPTOP-OVB88595\\\\MSSQLSERVER01", L"LAPTOP-PH1PTDI5" });
			this->comboBoxServeur->Location = System::Drawing::Point(549, 122);
			this->comboBoxServeur->Name = L"comboBoxServeur";
			this->comboBoxServeur->Size = System::Drawing::Size(227, 21);
			this->comboBoxServeur->TabIndex = 6;
			this->comboBoxServeur->Text = L"LAPTOP-OVB88595\\\\MSSQLSERVER01";
			this->comboBoxServeur->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBoxServeur_TextChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// labelServeur
			// 
			this->labelServeur->AutoSize = true;
			this->labelServeur->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelServeur->Location = System::Drawing::Point(620, 93);
			this->labelServeur->Name = L"labelServeur";
			this->labelServeur->Size = System::Drawing::Size(84, 26);
			this->labelServeur->TabIndex = 7;
			this->labelServeur->Text = L"Serveur";
			// 
			// labelBDD
			// 
			this->labelBDD->AutoSize = true;
			this->labelBDD->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBDD->Location = System::Drawing::Point(576, 146);
			this->labelBDD->Name = L"labelBDD";
			this->labelBDD->Size = System::Drawing::Size(174, 26);
			this->labelBDD->TabIndex = 9;
			this->labelBDD->Text = L"Base de Données";
			// 
			// comboBoxBDD
			// 
			this->comboBoxBDD->FormattingEnabled = true;
			this->comboBoxBDD->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"PROJETTT", L"TestBD" });
			this->comboBoxBDD->Location = System::Drawing::Point(549, 175);
			this->comboBoxBDD->Name = L"comboBoxBDD";
			this->comboBoxBDD->Size = System::Drawing::Size(227, 21);
			this->comboBoxBDD->TabIndex = 8;
			this->comboBoxBDD->Text = L"PROJETTT";
			this->comboBoxBDD->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBoxBDD_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"sa2", L"sa" });
			this->comboBox1->Location = System::Drawing::Point(602, 227);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(122, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"sa2";
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &MyForm::comboBox1_TextUpdate);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(602, 199);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 26);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Identifiants";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(602, 255);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(122, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"azerty123";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1389, 638);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->labelBDD);
			this->Controls->Add(this->comboBoxBDD);
			this->Controls->Add(this->labelServeur);
			this->Controls->Add(this->comboBoxServeur);
			this->Controls->Add(this->MenuClient);
			this->Controls->Add(this->MenuCommandes);
			this->Controls->Add(this->MenuStats);
			this->Controls->Add(this->MenuStock);
			this->Controls->Add(this->MenuPerso);
			this->Controls->Add(this->Home);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MenuPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormPersonnel^ FormPersonnel = gcnew MyFormPersonnel();
		FormPersonnel->ShowDialog();
			}

	private: System::Void MenuCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormCommandes^ FormCommandes = gcnew MyFormCommandes();
		FormCommandes->ShowDialog();
		    }

	private: System::Void MenuClient_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormClient^ FormClient = gcnew MyFormClient();
		FormClient->ShowDialog();
			}

	private: System::Void MenuStock_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormStock^ FormStock = gcnew MyFormStock();
		FormStock->ShowDialog();
			}

	private: System::Void MenuStats_Click(System::Object^ sender, System::EventArgs^ e) {
		MyFormStatistiques^ FormStatistiques = gcnew MyFormStatistiques();
		FormStatistiques->ShowDialog();
			}

private: System::Void comboBoxServeur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	CL_CAD::nomServeur = comboBoxServeur->Text;
}
private: System::Void comboBoxBDD_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	CL_CAD::nomBDD = comboBoxBDD->Text;
}
private: System::Void comboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
	CL_CAD::identifiant = comboBox1->Text;
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	CL_CAD::motdepasse = textBox1->Text;
}
};
}
