#pragma once

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStock
	/// </summary>
	public ref class MyFormStock : public System::Windows::Forms::Form
	{
	public:
		MyFormStock(void)
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
		~MyFormStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TextBox^ textBoxReference;
	private: System::Windows::Forms::TextBox^ textBoxPrixTVA;



	private: System::Windows::Forms::TextBox^ textBoxQuantite;

	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxSeuilQuantite;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantiteStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tva;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ seuilQuantite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ typeArticle;
	private: System::Windows::Forms::TextBox^ textBoxTypeArticle;

	private: System::Windows::Forms::Button^ buttonAjouterProduit;
	private: System::Windows::Forms::Button^ buttonModifierProduit;

	private: System::Windows::Forms::Button^ buttonSupprimerProduit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ seuilQuantiteReduction;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prixArticle;
	private: System::Windows::Forms::Button^ buttonValidation;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ validationButtonPrixArticle;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->reference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantiteStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tva = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->seuilQuantite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->typeArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->seuilQuantiteReduction = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prixArticle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxReference = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrixTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxQuantite = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSeuilQuantite = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTypeArticle = (gcnew System::Windows::Forms::TextBox());
			this->buttonAjouterProduit = (gcnew System::Windows::Forms::Button());
			this->buttonModifierProduit = (gcnew System::Windows::Forms::Button());
			this->buttonSupprimerProduit = (gcnew System::Windows::Forms::Button());
			this->buttonValidation = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->validationButtonPrixArticle = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->reference,
					this->nom, this->quantiteStock, this->tva, this->seuilQuantite, this->typeArticle
			});
			this->dataGridView1->Location = System::Drawing::Point(17, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 272);
			this->dataGridView1->TabIndex = 0;
			// 
			// reference
			// 
			this->reference->HeaderText = L"Référence";
			this->reference->Name = L"reference";
			// 
			// nom
			// 
			this->nom->HeaderText = L"Nom";
			this->nom->Name = L"nom";
			// 
			// quantiteStock
			// 
			this->quantiteStock->HeaderText = L"Quantité en stock";
			this->quantiteStock->Name = L"quantiteStock";
			// 
			// tva
			// 
			this->tva->HeaderText = L"Prix TVA";
			this->tva->Name = L"tva";
			// 
			// seuilQuantite
			// 
			this->seuilQuantite->HeaderText = L"Seuil quantité";
			this->seuilQuantite->Name = L"seuilQuantite";
			// 
			// typeArticle
			// 
			this->typeArticle->HeaderText = L"Type de l\'article";
			this->typeArticle->Name = L"typeArticle";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->seuilQuantiteReduction,
					this->prixArticle
			});
			this->dataGridView3->Location = System::Drawing::Point(103, 400);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(249, 174);
			this->dataGridView3->TabIndex = 2;
			// 
			// seuilQuantiteReduction
			// 
			this->seuilQuantiteReduction->HeaderText = L"Seuil quantité réduction";
			this->seuilQuantiteReduction->Name = L"seuilQuantiteReduction";
			// 
			// prixArticle
			// 
			this->prixArticle->HeaderText = L"Prix unitaire d\'un article";
			this->prixArticle->Name = L"prixArticle";
			// 
			// textBoxReference
			// 
			this->textBoxReference->Location = System::Drawing::Point(61, 319);
			this->textBoxReference->Name = L"textBoxReference";
			this->textBoxReference->Size = System::Drawing::Size(93, 20);
			this->textBoxReference->TabIndex = 3;
			this->textBoxReference->Visible = false;
			// 
			// textBoxPrixTVA
			// 
			this->textBoxPrixTVA->Location = System::Drawing::Point(358, 319);
			this->textBoxPrixTVA->Name = L"textBoxPrixTVA";
			this->textBoxPrixTVA->Size = System::Drawing::Size(93, 20);
			this->textBoxPrixTVA->TabIndex = 4;
			this->textBoxPrixTVA->Visible = false;
			// 
			// textBoxQuantite
			// 
			this->textBoxQuantite->Location = System::Drawing::Point(259, 319);
			this->textBoxQuantite->Name = L"textBoxQuantite";
			this->textBoxQuantite->Size = System::Drawing::Size(93, 20);
			this->textBoxQuantite->TabIndex = 5;
			this->textBoxQuantite->Visible = false;

			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(160, 319);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(93, 20);
			this->textBoxNom->TabIndex = 6;
			this->textBoxNom->Visible = false;

			// 
			// textBoxSeuilQuantite
			// 
			this->textBoxSeuilQuantite->Location = System::Drawing::Point(457, 319);
			this->textBoxSeuilQuantite->Name = L"textBoxSeuilQuantite";
			this->textBoxSeuilQuantite->Size = System::Drawing::Size(93, 20);
			this->textBoxSeuilQuantite->TabIndex = 7;
			this->textBoxSeuilQuantite->Visible = false;
			// 
			// textBoxTypeArticle
			// 
			this->textBoxTypeArticle->Location = System::Drawing::Point(556, 319);
			this->textBoxTypeArticle->Name = L"textBoxTypeArticle";
			this->textBoxTypeArticle->Size = System::Drawing::Size(93, 20);
			this->textBoxTypeArticle->TabIndex = 8;
			this->textBoxTypeArticle->Visible = false;
			// 
			// buttonAjouterProduit
			// 
			this->buttonAjouterProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAjouterProduit->Location = System::Drawing::Point(727, 41);
			this->buttonAjouterProduit->Name = L"buttonAjouterProduit";
			this->buttonAjouterProduit->Size = System::Drawing::Size(154, 56);
			this->buttonAjouterProduit->TabIndex = 9;
			this->buttonAjouterProduit->Text = L"Ajouter un produit au stock";
			this->buttonAjouterProduit->UseVisualStyleBackColor = true;
			this->buttonAjouterProduit->Click += gcnew System::EventHandler(this, &MyFormStock::buttonAjouterProduit_Click);
			// 
			// buttonModifierProduit
			// 
			this->buttonModifierProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonModifierProduit->Location = System::Drawing::Point(727, 217);
			this->buttonModifierProduit->Name = L"buttonModifierProduit";
			this->buttonModifierProduit->Size = System::Drawing::Size(154, 56);
			this->buttonModifierProduit->TabIndex = 10;
			this->buttonModifierProduit->Text = L"Modifier un produit du stock";
			this->buttonModifierProduit->UseVisualStyleBackColor = true;
			this->buttonModifierProduit->Click += gcnew System::EventHandler(this, &MyFormStock::buttonModifierProduit_Click);
			// 
			// buttonSupprimerProduit
			// 
			this->buttonSupprimerProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonSupprimerProduit->Location = System::Drawing::Point(727, 127);
			this->buttonSupprimerProduit->Name = L"buttonSupprimerProduit";
			this->buttonSupprimerProduit->Size = System::Drawing::Size(154, 56);
			this->buttonSupprimerProduit->TabIndex = 11;
			this->buttonSupprimerProduit->Text = L"Supprimer un produit du stock";
			this->buttonSupprimerProduit->UseVisualStyleBackColor = true;
			this->buttonSupprimerProduit->Click += gcnew System::EventHandler(this, &MyFormStock::buttonSupprimerProduit_Click);
			// 
			// buttonValidation
			// 
			this->buttonValidation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonValidation->Location = System::Drawing::Point(756, 312);
			this->buttonValidation->Name = L"buttonValidation";
			this->buttonValidation->Size = System::Drawing::Size(100, 33);
			this->buttonValidation->TabIndex = 12;
			this->buttonValidation->Text = L"VALIDER";
			this->buttonValidation->UseVisualStyleBackColor = true;
			this->buttonValidation->Visible = false;
			this->buttonValidation->Click += gcnew System::EventHandler(this, &MyFormStock::buttonValidation_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(255, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 21);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Articles en stock";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(168, 365);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 21);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Prix de l\'article";
			// 
			// validationButtonPrixArticle
			// 
			this->validationButtonPrixArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->validationButtonPrixArticle->Location = System::Drawing::Point(389, 455);
			this->validationButtonPrixArticle->Name = L"validationButtonPrixArticle";
			this->validationButtonPrixArticle->Size = System::Drawing::Size(197, 56);
			this->validationButtonPrixArticle->TabIndex = 17;
			this->validationButtonPrixArticle->Text = L"Valider le prix de l\'article";
			this->validationButtonPrixArticle->UseVisualStyleBackColor = true;
			this->validationButtonPrixArticle->Click += gcnew System::EventHandler(this, &MyFormStock::validationButtonPrixArticle_Click);
			// 
			// MyFormStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(985, 594);
			this->Controls->Add(this->validationButtonPrixArticle);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonValidation);
			this->Controls->Add(this->buttonSupprimerProduit);
			this->Controls->Add(this->buttonModifierProduit);
			this->Controls->Add(this->buttonAjouterProduit);
			this->Controls->Add(this->textBoxTypeArticle);
			this->Controls->Add(this->textBoxSeuilQuantite);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxQuantite);
			this->Controls->Add(this->textBoxPrixTVA);
			this->Controls->Add(this->textBoxReference);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormStock";
			this->Text = L"MyFormStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ nomFonction = "";

private: System::Void buttonAjouterProduit_Click(System::Object^ sender, System::EventArgs^ e) {

	this->buttonModifierProduit->Visible = !this->buttonModifierProduit->Visible;
	this->textBoxReference->Visible = !this->textBoxReference->Visible;
	this->textBoxNom->Visible = !this->textBoxNom->Visible;
	this->textBoxQuantite->Visible = !this->textBoxQuantite->Visible;
	this->textBoxPrixTVA->Visible = !this->textBoxPrixTVA->Visible;
	this->textBoxSeuilQuantite->Visible = !this->textBoxSeuilQuantite->Visible;
	this->textBoxTypeArticle->Visible = !this->textBoxTypeArticle->Visible;
	buttonValidation->Visible = !buttonValidation->Visible;

	textBoxReference->Text = "";
	textBoxNom->Text = "";
	textBoxQuantite->Text = "";
	textBoxPrixTVA->Text = "";
	this->textBoxSeuilQuantite->Text = "";
	this->textBoxTypeArticle->Text = "";

	nomFonction = "AJOUTER";
}
private: System::Void buttonSupprimerProduit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Voulez-vous vraiment supprimer cet article ? ", "Supprimer un article", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
	}
}
private: System::Void buttonModifierProduit_Click(System::Object^ sender, System::EventArgs^ e) {

	this->buttonAjouterProduit->Visible = !this->buttonAjouterProduit->Visible;
	this->textBoxReference->Visible = !this->textBoxReference->Visible;
	this->textBoxNom->Visible = !this->textBoxNom->Visible;
	this->textBoxQuantite->Visible = !this->textBoxQuantite->Visible;
	this->textBoxPrixTVA->Visible = !this->textBoxPrixTVA->Visible;
	this->textBoxSeuilQuantite->Visible = !this->textBoxSeuilQuantite->Visible;
	this->textBoxTypeArticle->Visible = !this->textBoxTypeArticle->Visible;
	buttonValidation->Visible = !buttonValidation->Visible;

	/*this->textBoxNom->Text = ArticleModif->getNom();
	this->textBoxReference->Text = ArticleModif->getReference();
	etc...*/
	nomFonction = "MODIFIER";
}
private: System::Void buttonValidation_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Voulez-vous vraiment " + nomFonction + " cet article ? ", nomFonction + " un article", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {


	}

}
private: System::Void validationButtonPrixArticle_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
