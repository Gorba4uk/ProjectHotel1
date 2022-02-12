#pragma once

namespace ProjectHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Rezerwacja
	/// </summary>
	public ref class Rezerwacja : public System::Windows::Forms::Form
	{
	public:
		Rezerwacja(void)
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
		~Rezerwacja()
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(50, 244);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(387, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// Rezerwacja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 444);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Rezerwacja";
			this->Text = L"Rezerwacja";
			this->Load += gcnew System::EventHandler(this, &Rezerwacja::Rezerwacja_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Rezerwacja_Load(System::Object^ sender, System::EventArgs^ e) {
		FUNKCIJA();
	}
		   void FUNKCIJA() {
			/*   String^ qry = "select * from pokoi";

			   String^ connInfo = "datasource=localhost;port=3306;username=Bohdan;password=1234;database=hotel";

			   MySqlConnection^ conn = gcnew MySqlConnection(connInfo);

			  MySqlDataAdapter^ Adpt = gcnew MySqlDataAdapter(qry, conn);

			   DataSet^ ds = gcnew DataSet();



			   Adpt->Fill(ds, "pokoi");

			   dataGridView1->DataSource = ds;

			   dataGridView1->DataMember = "pokoi";*/
		   }
	};

}
