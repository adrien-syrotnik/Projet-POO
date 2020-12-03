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
	/// Description résumée de MyFormStatsArticlesMoinsVendus
	/// </summary>
	public ref class MyFormStatsArticlesMoinsVendus : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsArticlesMoinsVendus(void)
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
		~MyFormStatsArticlesMoinsVendus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nomArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreVentes;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		StatsRequete^ Requete6 = gcnew StatsRequete;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->reference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nomArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombreVentes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->reference,
					this->nomArticle, this->nombreVentes
			});
			this->dataGridView1->Location = System::Drawing::Point(45, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(362, 229);
			this->dataGridView1->TabIndex = 0;
			// 
			// reference
			// 
			this->reference->HeaderText = L"Référence";
			this->reference->Name = L"reference";
			// 
			// nomArticle
			// 
			this->nomArticle->HeaderText = L"Nom de l\'article";
			this->nomArticle->Name = L"nomArticle";
			// 
			// nombreVentes
			// 
			this->nombreVentes->HeaderText = L"Nombre de ventes de l\'article";
			this->nombreVentes->Name = L"nombreVentes";
			// 
			// MyFormStatsArticlesMoinsVendus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 408);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStatsArticlesMoinsVendus";
			this->Text = L"MyFormStatsArticlesMoinsVendus";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			majDataGridViewArticlesMoinsVendus(Requete6->Getrequete6());
		}

		void majDataGridViewArticlesMoinsVendus(array<array<String^>^>^ ArticlesMoinsVendus) {
			dataGridView1->Rows->Clear();
			for (int i = 0;i < ArticlesMoinsVendus->Length;i++) {
				dataGridView1->Rows->Add();
				for (int j = 0;j < 3;j++)
					dataGridView1->Rows[i]->Cells[j]->Value = ArticlesMoinsVendus[i][j];
			}
		}
#pragma endregion
	};
}
