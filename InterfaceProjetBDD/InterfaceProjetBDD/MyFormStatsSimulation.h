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
	/// Description résumée de MyFormStatsSimulation
	/// </summary>
	public ref class MyFormStatsSimulation : public System::Windows::Forms::Form
	{
	public:
		MyFormStatsSimulation(void)
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
		~MyFormStatsSimulation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:









	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stockCommercial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tva1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tva2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tva3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ margeCommerciale1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ margeCommerciale2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ margeCommerciale3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ remiseCommerciale1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ remiseCommerciale2;









		   StatsRequete^ Requete9 = gcnew StatsRequete;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->stockCommercial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tva1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tva2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tva3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->margeCommerciale1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->margeCommerciale2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->margeCommerciale3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remiseCommerciale1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remiseCommerciale2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->stockCommercial,
					this->tva1, this->tva2, this->tva3, this->margeCommerciale1, this->margeCommerciale2, this->margeCommerciale3, this->remiseCommerciale1,
					this->remiseCommerciale2
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1099, 93);
			this->dataGridView1->TabIndex = 0;
			// 
			// stockCommercial
			// 
			this->stockCommercial->HeaderText = L"Valeur du stock commercial de base";
			this->stockCommercial->Name = L"stockCommercial";
			// 
			// tva1
			// 
			this->tva1->HeaderText = L"Stock commercial après TVA à 5%";
			this->tva1->Name = L"tva1";
			this->tva1->Width = 110;
			// 
			// tva2
			// 
			this->tva2->HeaderText = L"Stock commercial après TVA à 10%";
			this->tva2->Name = L"tva2";
			this->tva2->Width = 120;
			// 
			// tva3
			// 
			this->tva3->HeaderText = L"Stock commercial après TVA à 20%";
			this->tva3->Name = L"tva3";
			this->tva3->Width = 120;
			// 
			// margeCommerciale1
			// 
			this->margeCommerciale1->HeaderText = L"Stock commercial après marge commerciale à 5%";
			this->margeCommerciale1->Name = L"margeCommerciale1";
			this->margeCommerciale1->Width = 120;
			// 
			// margeCommerciale2
			// 
			this->margeCommerciale2->HeaderText = L"Stock commercial après marge commerciale à 10%";
			this->margeCommerciale2->Name = L"margeCommerciale2";
			this->margeCommerciale2->Width = 120;
			// 
			// margeCommerciale3
			// 
			this->margeCommerciale3->HeaderText = L"Stock commercial après marge commerciale à 15%";
			this->margeCommerciale3->Name = L"margeCommerciale3";
			this->margeCommerciale3->Width = 120;
			// 
			// remiseCommerciale1
			// 
			this->remiseCommerciale1->HeaderText = L"Stock commercial après remise commerciale à 5%";
			this->remiseCommerciale1->Name = L"remiseCommerciale1";
			this->remiseCommerciale1->Width = 120;
			// 
			// remiseCommerciale2
			// 
			this->remiseCommerciale2->HeaderText = L"Stock commercial après remise commerciale à 6%";
			this->remiseCommerciale2->Name = L"remiseCommerciale2";
			this->remiseCommerciale2->Width = 120;
			// 
			// MyFormStatsSimulation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1162, 212);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStatsSimulation";
			this->Text = L"MyFormStatsSimulation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			MajDataGridViewSimulation(Requete9->Getrequete9());
		}
		void MajDataGridViewSimulation(array <array<String^>^>^ Simulation) {
			dataGridView1->Rows->Clear();
			for (int j = 0; j < 9; j++) {
				dataGridView1->Rows[0]->Cells[j]->Value = Simulation[0][j] +" €";
			}
		}

#pragma endregion
	};
}
