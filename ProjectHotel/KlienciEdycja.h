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
	/// Podsumowanie informacji o KlienciEdycja
	/// </summary>
	public ref class KlienciEdycja : public System::Windows::Forms::Form
	{
	public:
		KlienciEdycja(void)
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
		~KlienciEdycja()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtImie;
	private: System::Windows::Forms::TextBox^ txtNazwisko;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::TextBox^ txtUwagi;
	private: System::Windows::Forms::TextBox^ txtRabat;
	private: System::Windows::Forms::Button^ buttonZapisz;
	private: System::Windows::Forms::Button^ buttonAnuluj;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtId;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtImie = (gcnew System::Windows::Forms::TextBox());
			this->txtNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtUwagi = (gcnew System::Windows::Forms::TextBox());
			this->txtRabat = (gcnew System::Windows::Forms::TextBox());
			this->buttonZapisz = (gcnew System::Windows::Forms::Button());
			this->buttonAnuluj = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Imie";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nazwisko";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"phone";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(27, 342);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(218, 21);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"zgoda na przesylanie reklamy";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"uwagi";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"rabat";
			// 
			// txtImie
			// 
			this->txtImie->Location = System::Drawing::Point(114, 25);
			this->txtImie->Name = L"txtImie";
			this->txtImie->Size = System::Drawing::Size(241, 22);
			this->txtImie->TabIndex = 7;
			// 
			// txtNazwisko
			// 
			this->txtNazwisko->Location = System::Drawing::Point(114, 56);
			this->txtNazwisko->Name = L"txtNazwisko";
			this->txtNazwisko->Size = System::Drawing::Size(241, 22);
			this->txtNazwisko->TabIndex = 8;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(114, 88);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(241, 22);
			this->txtEmail->TabIndex = 9;
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(114, 127);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(241, 22);
			this->txtPhone->TabIndex = 10;
			// 
			// txtUwagi
			// 
			this->txtUwagi->Location = System::Drawing::Point(114, 218);
			this->txtUwagi->Multiline = true;
			this->txtUwagi->Name = L"txtUwagi";
			this->txtUwagi->Size = System::Drawing::Size(241, 70);
			this->txtUwagi->TabIndex = 11;
			// 
			// txtRabat
			// 
			this->txtRabat->Location = System::Drawing::Point(114, 171);
			this->txtRabat->Name = L"txtRabat";
			this->txtRabat->Size = System::Drawing::Size(241, 22);
			this->txtRabat->TabIndex = 12;
			// 
			// buttonZapisz
			// 
			this->buttonZapisz->Location = System::Drawing::Point(114, 420);
			this->buttonZapisz->Name = L"buttonZapisz";
			this->buttonZapisz->Size = System::Drawing::Size(131, 39);
			this->buttonZapisz->TabIndex = 13;
			this->buttonZapisz->Text = L"Zapisz";
			this->buttonZapisz->UseVisualStyleBackColor = true;
			this->buttonZapisz->Click += gcnew System::EventHandler(this, &KlienciEdycja::buttonZapisz_Click);
			// 
			// buttonAnuluj
			// 
			this->buttonAnuluj->Location = System::Drawing::Point(367, 420);
			this->buttonAnuluj->Name = L"buttonAnuluj";
			this->buttonAnuluj->Size = System::Drawing::Size(131, 39);
			this->buttonAnuluj->TabIndex = 14;
			this->buttonAnuluj->Text = L"Anuluj";
			this->buttonAnuluj->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(439, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"id";
			// 
			// txtId
			// 
			this->txtId->Enabled = false;
			this->txtId->Location = System::Drawing::Point(495, 25);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 22);
			this->txtId->TabIndex = 16;
			// 
			// KlienciEdycja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 539);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonAnuluj);
			this->Controls->Add(this->buttonZapisz);
			this->Controls->Add(this->txtRabat);
			this->Controls->Add(this->txtUwagi);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtNazwisko);
			this->Controls->Add(this->txtImie);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"KlienciEdycja";
			this->Text = L"KlienciEdycja";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		mysql_connect MojaBaza;
	private: System::Void buttonZapisz_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Kontrola()) {
			Zapisz();
			Czysc();
			//System::Windows::Forms::MessageBox::Show("OK");
		}
		else {
			System::Windows::Forms::MessageBox::Show("No");
		}

	}
		   Boolean Kontrola() {
			   if (txtImie->Text != "" && txtNazwisko->Text != ""&& txtEmail->Text != ""&& txtPhone->Text != "") {
				   return true;
			   }
			   else {
				   System::Windows::Forms::MessageBox::Show("Wypelnij wszystkie pola");
				   return false;
			   }
		   }

		   void Czysc() {
			   txtId->Text = "";
			   txtImie->Text = "";
			   txtNazwisko->Text = "";
			   txtEmail->Text = "";
			   txtPhone->Text = "";
			   checkBox1->Checked = false;
			   txtRabat->Text = "";
			   txtUwagi->Text = "";
		   }


		   void Zapisz() {
			   int zgoda;
			   System::String^ qry;
			   if (checkBox1->Checked) {
				   zgoda = 1;
			   }
			   else {
				   zgoda = 0;
			   }
			   if (txtId->Text == "") {
				    qry = "insert into klient (imieKlienta, nazwiskoKlienta, emailKlienta, phonenumer, zgodaKlienta, uwagi, rabat) VALUES ('" + txtImie->Text + "','" + txtNazwisko->Text + "','" + txtEmail->Text + "','" + txtPhone->Text + "','" + zgoda + "','" + txtUwagi->Text + "','" + txtRabat->Text + "')";
			  
				   System::Windows::Forms::MessageBox::Show(qry);
				   MojaBaza.ExecQry(qry);
			   }
			   else {
				   qry = "UPDATE klient SET imieKlienta = '" + txtImie->Text + "' WHERE id = '"+ txtId->Text + "'";
			   }
		   }


		   // Nize uze konec!
};
}
