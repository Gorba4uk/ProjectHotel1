#include "Rezerwacja.h"
#include "Meldunek.h"
#include "Platnosc.h"
#include "Notatki.h"
#include "Klienci.h"
#pragma once

namespace ProjectHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Hotel
	/// </summary>
	public ref class Hotel : public System::Windows::Forms::Form
	{
	public:
		Hotel(void)
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
		~Hotel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tranzakcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rezerwacjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ meldunekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ platnoscToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ notatkiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kartotekaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pokojeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ klienciToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ firmyToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tranzakcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rezerwacjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meldunekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->platnoscToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notatkiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kartotekaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pokojeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->klienciToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->firmyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->tranzakcjeToolStripMenuItem, this->kartotekaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(512, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// tranzakcjeToolStripMenuItem
			// 
			this->tranzakcjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rezerwacjaToolStripMenuItem,
					this->meldunekToolStripMenuItem, this->platnoscToolStripMenuItem, this->notatkiToolStripMenuItem
			});
			this->tranzakcjeToolStripMenuItem->Name = L"tranzakcjeToolStripMenuItem";
			this->tranzakcjeToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->tranzakcjeToolStripMenuItem->Text = L"Tranzakcje";
			// 
			// rezerwacjaToolStripMenuItem
			// 
			this->rezerwacjaToolStripMenuItem->Name = L"rezerwacjaToolStripMenuItem";
			this->rezerwacjaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->rezerwacjaToolStripMenuItem->Text = L"Rezerwacja";
			this->rezerwacjaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hotel::rezerwacjaToolStripMenuItem_Click);
			// 
			// meldunekToolStripMenuItem
			// 
			this->meldunekToolStripMenuItem->Name = L"meldunekToolStripMenuItem";
			this->meldunekToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->meldunekToolStripMenuItem->Text = L"Meldunek";
			this->meldunekToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hotel::meldunekToolStripMenuItem_Click);
			// 
			// platnoscToolStripMenuItem
			// 
			this->platnoscToolStripMenuItem->Name = L"platnoscToolStripMenuItem";
			this->platnoscToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->platnoscToolStripMenuItem->Text = L"Platnosc";
			this->platnoscToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hotel::platnoscToolStripMenuItem_Click);
			// 
			// notatkiToolStripMenuItem
			// 
			this->notatkiToolStripMenuItem->Name = L"notatkiToolStripMenuItem";
			this->notatkiToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->notatkiToolStripMenuItem->Text = L"Notatki";
			this->notatkiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hotel::notatkiToolStripMenuItem_Click);
			// 
			// kartotekaToolStripMenuItem
			// 
			this->kartotekaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pokojeToolStripMenuItem,
					this->klienciToolStripMenuItem, this->firmyToolStripMenuItem
			});
			this->kartotekaToolStripMenuItem->Name = L"kartotekaToolStripMenuItem";
			this->kartotekaToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->kartotekaToolStripMenuItem->Text = L"Kartoteka";
			// 
			// pokojeToolStripMenuItem
			// 
			this->pokojeToolStripMenuItem->Name = L"pokojeToolStripMenuItem";
			this->pokojeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->pokojeToolStripMenuItem->Text = L"Pokoje";
			// 
			// klienciToolStripMenuItem
			// 
			this->klienciToolStripMenuItem->Name = L"klienciToolStripMenuItem";
			this->klienciToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->klienciToolStripMenuItem->Text = L"Klienci";
			this->klienciToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hotel::klienciToolStripMenuItem_Click);
			// 
			// firmyToolStripMenuItem
			// 
			this->firmyToolStripMenuItem->Name = L"firmyToolStripMenuItem";
			this->firmyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->firmyToolStripMenuItem->Text = L"Firmy";
			// 
			// Hotel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 414);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Hotel";
			this->Text = L"Hotel";
			this->Load += gcnew System::EventHandler(this, &Hotel::Hotel_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Hotel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void rezerwacjaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Rezerwacja^ f1 = gcnew(Rezerwacja);
		f1->ShowDialog();
	}
	private: System::Void meldunekToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Meldunek^ f1 = gcnew(Meldunek);
		f1->ShowDialog();
	}
private: System::Void platnoscToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Platnosc^ f1 = gcnew(Platnosc);
	f1 -> ShowDialog();
}
private: System::Void notatkiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Notatki^ f1 = gcnew(Notatki);
	f1 -> ShowDialog();
}
private: System::Void klienciToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Klienci^ f1 = gcnew(Klienci);
	f1->ShowDialog();
}
};
}
