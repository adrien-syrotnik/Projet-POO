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
	/// Description résumée de MyFormStatsProduitsInferieurSeuil
	/// </summary>
	public ref class MyFormStatsProduitsInferieurSeuil : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsProduitsInferieurSeuil(void)
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
		~MyFormStatsProduitsInferieurSeuil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantiteStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ seuilQuantite;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		StatsRequete^ Requete3 = gcnew StatsRequete;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nomArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantiteStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->seuilQuantite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nomArticle,
					this->quantiteStock, this->seuilQuantite
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(344, 176);
			this->dataGridView1->TabIndex = 0;
			// 
			// nomArticle
			// 
			this->nomArticle->HeaderText = L"Nom de l\'article";
			this->nomArticle->Name = L"nomArticle";
			// 
			// quantiteStock
			// 
			this->quantiteStock->HeaderText = L"Quantité en stock";
			this->quantiteStock->Name = L"quantiteStock";
			// 
			// seuilQuantite
			// 
			this->seuilQuantite->HeaderText = L"Seuil limite de la quantité en stock";
			this->seuilQuantite->Name = L"seuilQuantite";
			// 
			// MyFormStatsProduitsInferieurSeuil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 261);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStatsProduitsInferieurSeuil";
			this->Text = L"MyFormStatsProduitsInferieurSeuil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			MajDataGridViewSeuilQuantite(Requete3->Getrequete3());
		}
		void MajDataGridViewSeuilQuantite(array <array<String^>^>^ SeuilQuantite) {
			dataGridView1->Rows->Clear();
			for (int i = 0;i < SeuilQuantite->Length;i++) {
				dataGridView1->Rows->Add();
				for (int j = 0; j < 3; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = SeuilQuantite[i][j];
				}
			}
		}
#pragma endregion
	};
}
