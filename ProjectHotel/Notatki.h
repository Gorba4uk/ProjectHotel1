#pragma once

namespace ProjectHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
//	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Notatki
	/// </summary>
	public ref class Notatki : public System::Windows::Forms::Form
	{
	public:
		Notatki(void)
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
		~Notatki()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Notatki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 418);
			this->Name = L"Notatki";
			this->Text = L"Notatki";
			this->Load += gcnew System::EventHandler(this, &Notatki::Notatki_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Notatki_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
