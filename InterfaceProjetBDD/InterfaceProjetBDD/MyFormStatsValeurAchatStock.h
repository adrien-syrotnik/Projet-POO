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
	/// Description résumée de MyFormStatsValeurAchatStock
	/// </summary>
	public ref class MyFormStatsValeurAchatStock : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsValeurAchatStock(void)
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
		~MyFormStatsValeurAchatStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valeurAchatStock;
	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		StatsRequete^ Requete8 = gcnew StatsRequete;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->valeurAchatStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->valeurAchatStock });
			this->dataGridView1->Location = System::Drawing::Point(47, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(187, 106);
			this->dataGridView1->TabIndex = 1;
			// 
			// valeurAchatStock
			// 
			this->valeurAchatStock->HeaderText = L"Valeur d\'achat du stock";
			this->valeurAchatStock->Name = L"valeurAchatStock";
			this->valeurAchatStock->Width = 150;
			// 
			// MyFormStatsValeurAchatStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStatsValeurAchatStock";
			this->Text = L"MyFormStatsValeurAchatStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			majDataGridViewValeurAchatStock(Requete8->Getrequete8());
		}
		void majDataGridViewValeurAchatStock(array <String^>^ ValeurAchatStock)
		{
			dataGridView1->Rows->Clear();
			dataGridView1->Rows[0]->Cells[0]->Value = ValeurAchatStock[0];
		}
#pragma endregion
	};
}
