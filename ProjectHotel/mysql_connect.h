#pragma once
ref class mysql_connect
{
private:
	static System::String^ connInfo = "datasource=localhost;port=3306;username=Bohdan;password=1234;database=hotel";
	static MySql::Data::MySqlClient::MySqlConnection^ conn = gcnew MySql::Data::MySqlClient::MySqlConnection(connInfo);
	static System::Data::DataSet^ ds = gcnew System::Data::DataSet();
	MySql::Data::MySqlClient::MySqlDataReader^ dataReader;

public: 
void GridLaduj(System::Windows::Forms::DataGridView^ grid, System::String^ qry) {
		MySql::Data::MySqlClient::MySqlDataAdapter^ Adpt = gcnew MySql::Data::MySqlClient::MySqlDataAdapter(qry, conn);
		
			Adpt->Fill(ds, "osoby");
			grid->DataSource = ds;
			grid->DataMember = "osoby";
		
		}
void ExecQry(System::String^ qry) {
	MySql::Data::MySqlClient::MySqlCommand^ connCmd = gcnew MySql::Data::MySqlClient::MySqlCommand(qry, conn);

	try
	{
		conn->Open();
		dataReader = connCmd->ExecuteReader();
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show(ex->Message);
	}
	conn->Close();
		}
};

