#include "KlienciEdycja.h"
#include "mysql_connect.h"
#pragma once

namespace ProjectHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Podsumowanie informacji o Klienci
	/// </summary>
	public ref class Klienci : public System::Windows::Forms::Form
	{
	public:
		Klienci(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Klienci()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ buttonSzukaj;
	private: System::Windows::Forms::Button^ buttonDodaj;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSzukaj = (gcnew System::Windows::Forms::Button());
			this->buttonDodaj = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 31);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 41);
			this->textBox1->TabIndex = 0;
			// 
			// buttonSzukaj
			// 
			this->buttonSzukaj->Location = System::Drawing::Point(201, 29);
			this->buttonSzukaj->Name = L"buttonSzukaj";
			this->buttonSzukaj->Size = System::Drawing::Size(87, 43);
			this->buttonSzukaj->TabIndex = 1;
			this->buttonSzukaj->Text = L"Szukaj";
			this->buttonSzukaj->UseVisualStyleBackColor = true;
			this->buttonSzukaj->Click += gcnew System::EventHandler(this, &Klienci::buttonSzukaj_Click);
			// 
			// buttonDodaj
			// 
			this->buttonDodaj->Location = System::Drawing::Point(493, 29);
			this->buttonDodaj->Name = L"buttonDodaj";
			this->buttonDodaj->Size = System::Drawing::Size(84, 43);
			this->buttonDodaj->TabIndex = 2;
			this->buttonDodaj->Text = L"Dodaj";
			this->buttonDodaj->UseVisualStyleBackColor = true;
			this->buttonDodaj->Click += gcnew System::EventHandler(this, &Klienci::buttonDodaj_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(36, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(532, 313);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Klienci::dataGridView1_CellContentClick);
			// 
			// Klienci
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 463);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonDodaj);
			this->Controls->Add(this->buttonSzukaj);
			this->Controls->Add(this->textBox1);
			this->Name = L"Klienci";
			this->Text = L"Klienci";
			this->Load += gcnew System::EventHandler(this, &Klienci::Klienci_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		mysql_connect MojaBaza;
	private: System::Void buttonDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
		KlienciEdycja^ f1 = gcnew(KlienciEdycja);
		f1->ShowDialog();
	}
		  /* void Szukaj() {
			   MojaBaza.ExecQry("SELECT `id`, `imieKlienta`, `nazwiskoKlienta`, `emailKlienta`, `phonenumer`, `zgodaKlienta`, `uwagi`, `rabat` FROM `klient` WHERE imieKlienta LIKE '" + textBox1->Text + "'");
			   		   }*/
		   /*void ZapiszTest() {
			   MojaBaza.ExecQry("insert into user (name, pass) values ('test3', 'haslo')");
	}*/
		   void Lista() {
			   MojaBaza.GridLaduj(dataGridView1, "select * from klient");
		   }
	
	private: System::Void Klienci_Load(System::Object^ sender, System::EventArgs^ e) {
		Lista();
	}
		   void CzyscGrid() {
			   dataGridView1->DataMember = "";
			   dataGridView1->Refresh();
		   }
		   // KNOPKA POISK
private: System::Void buttonSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
	CzyscGrid();
	Lista();
		}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	System::String^ id;
	id = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
	textBox1->Text = id;
	KlienciEdycja^ f1 = gcnew KlienciEdycja();
	f1->ShowDialog();
	}
};
	};