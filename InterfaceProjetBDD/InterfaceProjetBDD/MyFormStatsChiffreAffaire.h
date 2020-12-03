#pragma once
#include "StatsRequete.h"

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStatsChiffreAffaire
	/// </summary>
	public ref class MyFormStatsChiffreAffaire : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsChiffreAffaire(void)
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
		~MyFormStatsChiffreAffaire()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ chiffreAffaire;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ComboBox^ comboBox1;
		   StatsRequete^ Requete2 = gcnew StatsRequete;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chiffreAffaire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->chiffreAffaire });
			this->dataGridView1->Location = System::Drawing::Point(57, 106);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(146, 84);
			this->dataGridView1->TabIndex = 0;
			// 
			// chiffreAffaire
			// 
			this->chiffreAffaire->HeaderText = L"Chiffre d\'affaires sur un mois ";
			this->chiffreAffaire->Name = L"chiffreAffaire";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox1->Location = System::Drawing::Point(78, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(111, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStatsChiffreAffaire::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyFormStatsChiffreAffaire::comboBox1_TextChanged);
			// 
			// MyFormStatsChiffreAffaire
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStatsChiffreAffaire";
			this->Text = L"MyFormStatsChiffreAffaire";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
		void MajDataGridViewChiffreAffaire(array <String^>^ ChiffreAffaire) {
			dataGridView1->Rows->Clear();
			for (int i = 0;i < ChiffreAffaire->Length;i++) {
				dataGridView1->Rows[i]->Cells[i]->Value = ChiffreAffaire[i];
			}
		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		MajDataGridViewChiffreAffaire(Requete2->Getrequete2(Convert::ToInt32(comboBox1->SelectedItem)));
	}
	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text != L"")
			MajDataGridViewChiffreAffaire(Requete2->Getrequete2(Convert::ToInt32(comboBox1->Text)));
	}
	};
}
