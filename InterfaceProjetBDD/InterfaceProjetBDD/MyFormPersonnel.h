#pragma once

namespace InterfaceProjetBDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPersonnel
	/// </summary>
	public ref class MyFormPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormPersonnel(void)
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
		~MyFormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ NomPersonnel;
	private: System::Windows::Forms::TextBox^ PrenomPersonnel;
	private: System::Windows::Forms::TextBox^ AdressePersonnel;
	private: System::Windows::Forms::TextBox^ DateEmbauchePersonnel;
	private: System::Windows::Forms::TextBox^ Superieur;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;











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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->AdressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->DateEmbauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->Superieur = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 489);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(667, 47);
			this->textBox1->TabIndex = 0;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormPersonnel::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(667, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Actualisation de la base de données";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(752, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(261, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ajouter un personnel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(752, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Supprimer un personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(760, 378);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Entrez le nom :";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(760, 405);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Entrez le prénom :";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(760, 432);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Entrez l\'adresse :";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(760, 459);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Entrez la date d\'embauche :";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(760, 489);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Supérieur :";
			this->label5->Visible = false;
			// 
			// NomPersonnel
			// 
			this->NomPersonnel->Location = System::Drawing::Point(913, 375);
			this->NomPersonnel->Name = L"NomPersonnel";
			this->NomPersonnel->Size = System::Drawing::Size(100, 20);
			this->NomPersonnel->TabIndex = 9;
			this->NomPersonnel->Visible = false;
			this->NomPersonnel->TextChanged += gcnew System::EventHandler(this, &MyFormPersonnel::NomPersonnel_TextChanged);
			// 
			// PrenomPersonnel
			// 
			this->PrenomPersonnel->Location = System::Drawing::Point(913, 402);
			this->PrenomPersonnel->Name = L"PrenomPersonnel";
			this->PrenomPersonnel->Size = System::Drawing::Size(100, 20);
			this->PrenomPersonnel->TabIndex = 10;
			this->PrenomPersonnel->Visible = false;
			this->PrenomPersonnel->TextChanged += gcnew System::EventHandler(this, &MyFormPersonnel::PrenomPersonnel_TextChanged);
			// 
			// AdressePersonnel
			// 
			this->AdressePersonnel->Location = System::Drawing::Point(913, 430);
			this->AdressePersonnel->Name = L"AdressePersonnel";
			this->AdressePersonnel->Size = System::Drawing::Size(100, 20);
			this->AdressePersonnel->TabIndex = 11;
			this->AdressePersonnel->Visible = false;
			this->AdressePersonnel->TextChanged += gcnew System::EventHandler(this, &MyFormPersonnel::AdressePersonnel_TextChanged);
			// 
			// DateEmbauchePersonnel
			// 
			this->DateEmbauchePersonnel->Location = System::Drawing::Point(913, 456);
			this->DateEmbauchePersonnel->Name = L"DateEmbauchePersonnel";
			this->DateEmbauchePersonnel->Size = System::Drawing::Size(100, 20);
			this->DateEmbauchePersonnel->TabIndex = 12;
			this->DateEmbauchePersonnel->Visible = false;
			this->DateEmbauchePersonnel->TextChanged += gcnew System::EventHandler(this, &MyFormPersonnel::DateEmbauchePersonnel_TextChanged);
			// 
			// Superieur
			// 
			this->Superieur->Location = System::Drawing::Point(913, 482);
			this->Superieur->Name = L"Superieur";
			this->Superieur->Size = System::Drawing::Size(100, 20);
			this->Superieur->TabIndex = 13;
			this->Superieur->Visible = false;
			this->Superieur->TextChanged += gcnew System::EventHandler(this, &MyFormPersonnel::Superieur_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(570, 65);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersonnel::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			// 
			// MyFormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 563);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Superieur);
			this->Controls->Add(this->DateEmbauchePersonnel);
			this->Controls->Add(this->AdressePersonnel);
			this->Controls->Add(this->PrenomPersonnel);
			this->Controls->Add(this->NomPersonnel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyFormPersonnel";
			this->Text = L"MyFormPersonnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Visible = true;
		this->textBox1->Text = "Affichage de la BDD \nfzozingrnieuheprthirhjtjhtiojhijithjihjijitjhtihjitjhitjhithijjiorjhiriotjhoihjigjigrhjeqihjtoruhtruirhgtphpitrhiahaohjtihtjihtarihaihthrzoihjr";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->NomPersonnel->Visible = !NomPersonnel->Visible;
		this->PrenomPersonnel->Visible = !PrenomPersonnel->Visible;
		this->AdressePersonnel->Visible = !AdressePersonnel->Visible;
		this->DateEmbauchePersonnel->Visible = !DateEmbauchePersonnel->Visible;
		this->Superieur->Visible = !Superieur->Visible;
		this->label1->Visible = !label1->Visible;
		this->label2->Visible = !label2->Visible;
		this->label3->Visible = !label3->Visible;
		this->label4->Visible = !label4->Visible;
		this->label5->Visible = !label5->Visible;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Voulez-vous vraiment supprimer ce personnel ? ", "Supprimer un personnel", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		textBox1->Text = "";
	}
}

private: System::Void NomPersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = this->NomPersonnel->Text;
}
private: System::Void PrenomPersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = this->PrenomPersonnel->Text;
}
private: System::Void AdressePersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = this->AdressePersonnel->Text;
}
private: System::Void DateEmbauchePersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = this->DateEmbauchePersonnel->Text;
}
private: System::Void Superieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Text = this->Superieur->Text;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
