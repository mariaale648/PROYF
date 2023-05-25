#pragma once

#include "CONEXION.h"

namespace PROYF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Distrito
	/// </summary>
	public ref class Distrito : public System::Windows::Forms::Form
	{
	public:
		Distrito(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Distrito()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nombre_distr;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView_Distrito;

	private: System::Windows::Forms::ColumnHeader^ nombre_distrito;
	private: System::Windows::Forms::Button^ Regresar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ColumnHeader^ id_distrito;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Label^ label2;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nombre_distr = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView_Distrito = (gcnew System::Windows::Forms::ListView());
			this->id_distrito = (gcnew System::Windows::Forms::ColumnHeader());
			this->nombre_distrito = (gcnew System::Windows::Forms::ColumnHeader());
			this->Regresar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(228, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// nombre_distr
			// 
			this->nombre_distr->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre_distr->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->nombre_distr->Location = System::Drawing::Point(313, 83);
			this->nombre_distr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nombre_distr->Name = L"nombre_distr";
			this->nombre_distr->Size = System::Drawing::Size(200, 25);
			this->nombre_distr->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(165, 141);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Distrito::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(462, 141);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"consultar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Distrito::button2_Click);
			// 
			// listView_Distrito
			// 
			this->listView_Distrito->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->id_distrito,
					this->nombre_distrito
			});
			this->listView_Distrito->HideSelection = false;
			this->listView_Distrito->Location = System::Drawing::Point(123, 223);
			this->listView_Distrito->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView_Distrito->Name = L"listView_Distrito";
			this->listView_Distrito->Size = System::Drawing::Size(480, 179);
			this->listView_Distrito->TabIndex = 4;
			this->listView_Distrito->UseCompatibleStateImageBehavior = false;
			this->listView_Distrito->View = System::Windows::Forms::View::Details;
			this->listView_Distrito->SelectedIndexChanged += gcnew System::EventHandler(this, &Distrito::listView1_SelectedIndexChanged);
			// 
			// id_distrito
			// 
			this->id_distrito->DisplayIndex = 1;
			this->id_distrito->Text = L"ID";
			this->id_distrito->Width = 138;
			// 
			// nombre_distrito
			// 
			this->nombre_distrito->DisplayIndex = 0;
			this->nombre_distrito->Text = L"Nombre";
			this->nombre_distrito->Width = 224;
			// 
			// Regresar
			// 
			this->Regresar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Regresar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Regresar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Regresar->Location = System::Drawing::Point(454, 433);
			this->Regresar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(104, 37);
			this->Regresar->TabIndex = 5;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = false;
			this->Regresar->Click += gcnew System::EventHandler(this, &Distrito::Regresar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_id);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->nombre_distr);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Regresar);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->listView_Distrito);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(40, 30);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(710, 507);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Distrito";
			// 
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox_id->Location = System::Drawing::Point(313, 35);
			this->textBox_id->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(200, 25);
			this->textBox_id->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(228, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"ID";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Location = System::Drawing::Point(313, 141);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 39);
			this->button3->TabIndex = 7;
			this->button3->Text = L"actualizar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Distrito::button3_Click);
			// 
			// Distrito
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(798, 581);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Distrito";
			this->Text = L"Distrito";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ nombre_distrito; String^ id_distrito;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
	//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
	//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
	st->InitialCatalog = "proteccionTotal";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ listView_Distrito = gcnew ListView();
	String^ sentencia = "select * from distrito";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		id_distrito = (reader["id_distrito"]->ToString());
		nombre_distrito = (reader["nombre_distrito"]->ToString());
		String^ srtNew1 = gcnew String(id_distrito);
		String^ srtNew2 = gcnew String(nombre_distrito);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		this->listView_Distrito->Items->Add(listView2);
	}
	cn->Close();
}
private: System::Void Regresar_Click(System::Object^ sender, System::EventArgs^ e) {
	Distrito::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.crear_distrito(
		nombre_distr->Text
	);
	MessageBox::Show("Registro guardado exitosamente");
	nombre_distr->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	if (textBox_id->Text == " ") {
		MessageBox::Show("Debe colocar el ID");
	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_distrito; String^ nombre_distrito;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update distrito set nombre_distrito=@nombre_distrito where id_distrito=@id_distrito";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_distrito", Convert::ToInt64(textBox_id->Text));
		ejecutar->Parameters->AddWithValue("@nombre_distrito", nombre_distr->Text);
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
		MessageBox::Show("Registro actualizado");
		textBox_id->Text = "";
		nombre_distr->Text = "";
		listView_Distrito->Clear();
	}
}
};
}
