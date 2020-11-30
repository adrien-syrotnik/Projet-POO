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

	protected:

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
			this->Home = (gcnew System::Windows::Forms::Label());
			this->MenuPerso = (gcnew System::Windows::Forms::Button());
			this->MenuStock = (gcnew System::Windows::Forms::Button());
			this->MenuStats = (gcnew System::Windows::Forms::Button());
			this->MenuCommandes = (gcnew System::Windows::Forms::Button());
			this->MenuClient = (gcnew System::Windows::Forms::Button());
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1389, 638);
			this->Controls->Add(this->MenuClient);
			this->Controls->Add(this->MenuCommandes);
			this->Controls->Add(this->MenuStats);
			this->Controls->Add(this->MenuStock);
			this->Controls->Add(this->MenuPerso);
			this->Controls->Add(this->Home);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
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

};
}
