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
	/// Description r�sum�e de MyFormStatsValeurCommercialeStock
	/// </summary>
	public ref class MyFormStatsValeurCommercialeStock : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsValeurCommercialeStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormStatsValeurCommercialeStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ valeurCommercialeStock;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		StatsRequete^ Requete7 = gcnew StatsRequete;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->valeurCommercialeStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->valeurCommercialeStock });
			this->dataGridView1->Location = System::Drawing::Point(46, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(195, 106);
			this->dataGridView1->TabIndex = 0;
			// 
			// valeurCommercialeStock
			// 
			this->valeurCommercialeStock->HeaderText = L"Valeur commerciale du stock";
			this->valeurCommercialeStock->Name = L"valeurCommercialeStock";
			this->valeurCommercialeStock->Width = 150;
			// 
			// MyFormStatsValeurCommercialeStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 209);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStatsValeurCommercialeStock";
			this->Text = L"MyFormStatsValeurCommercialeStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			majDataGridViewValeurCommercialeStock(Requete7->Getrequete7());
		}

		void majDataGridViewValeurCommercialeStock(array <String^>^ ValeurCommercialeStock)
		{
			dataGridView1->Rows->Clear();
			dataGridView1->Rows[0]->Cells[0]->Value = ValeurCommercialeStock[0];
		}
#pragma endregion
	};
}
