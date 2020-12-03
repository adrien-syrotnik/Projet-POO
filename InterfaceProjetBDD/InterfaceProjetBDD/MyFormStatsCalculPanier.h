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
	/// Description résumée de MyFormStatsCalculPanier
	/// </summary>
	public ref class MyFormStatsCalculPanier : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsCalculPanier(void)
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
		~MyFormStatsCalculPanier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ panierMoyen;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		StatsRequete^ Requete1 = gcnew StatsRequete;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panierMoyen = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->panierMoyen });
			this->dataGridView1->Location = System::Drawing::Point(44, 28);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(149, 54);
			this->dataGridView1->TabIndex = 0;

			// 
			// panierMoyen
			// 
			this->panierMoyen->HeaderText = L"Cout moyen du panier";
			this->panierMoyen->Name = L"panierMoyen";
			// 
			// MyFormStatsCalculPanier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->dataGridView1);
			this->Location = System::Drawing::Point(500, 500);
			this->Name = L"MyFormStatsCalculPanier";
			this->Text = L"MyFormStatsCalculPanier";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			MajDataGridViewCalculPanier(Requete1->Getrequete1());

		}

		void MajDataGridViewCalculPanier(array <String^>^ CalculPanier) {
			dataGridView1->Rows->Clear();
			for (int i = 0;i < CalculPanier->Length;i++) {
				dataGridView1->Rows[i]->Cells[i]->Value = CalculPanier[i];
			}
		}
#pragma endregion
	};
}
