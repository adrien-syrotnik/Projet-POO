#pragma once

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormClient
	/// </summary>
	public ref class MyFormClient : public System::Windows::Forms::Form
	{
	public:
		MyFormClient(void)
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
		~MyFormClient()
		{
			if (components)
			{
				delete components;
			}
		}
<<<<<<< Updated upstream
=======
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prenom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateAnniv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date1reCommande;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxDate1Commande;


	private: System::Windows::Forms::TextBox^ textBoxDateAnniv;

	private: System::Windows::Forms::TextBox^ textBoxPrénom;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonAjouterClient;
	private: System::Windows::Forms::Button^ buttonSupprimerClient;
	private: System::Windows::Forms::Button^ buttonModifierClient;
	private: System::Windows::Forms::Button^ validationButton;


	private: System::Windows::Forms::Button^ validationButtonAdresseFacturation;
	private: System::Windows::Forms::Button^ validationButtonAdresseLivraison;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ligne1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codePostal1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ligne2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pays2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ codePostal2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateLivraison;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateReglement;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateAchat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantHT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantTVA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ montantTTC;
>>>>>>> Stashed changes

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
			this->SuspendLayout();
			// 
			// MyFormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1054, 510);
			this->Name = L"MyFormClient";
			this->Text = L"MyFormClient";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
