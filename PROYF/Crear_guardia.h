#pragma once
#include "CONEXION.h"
namespace PROYF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
	using namespace Data::SqlClient;
	/// <summary>
	/// Resumen de Crear_guardia
	/// </summary>
	public ref class Crear_guardia : public System::Windows::Forms::Form
	{
	public:
		Crear_guardia(void)
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
		~Crear_guardia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ id_posición_TXT;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ id_art_TXT;
	private: System::Windows::Forms::Button^ Crear_button;
	private: System::Windows::Forms::ListView^ listView_Guardia;

	private: System::Windows::Forms::Button^ Cons_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ColumnHeader^ id_guardia;
	private: System::Windows::Forms::ColumnHeader^ id_posicon;
	private: System::Windows::Forms::ColumnHeader^ id_articulo;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

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
			this->id_posición_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->id_art_TXT = (gcnew System::Windows::Forms::TextBox());
			this->Crear_button = (gcnew System::Windows::Forms::Button());
			this->listView_Guardia = (gcnew System::Windows::Forms::ListView());
			this->id_guardia = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_posicon = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_articulo = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cons_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(106, 126);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id posición";
			// 
			// id_posición_TXT
			// 
			this->id_posición_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_posición_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->id_posición_TXT->Location = System::Drawing::Point(241, 122);
			this->id_posición_TXT->Margin = System::Windows::Forms::Padding(4);
			this->id_posición_TXT->Name = L"id_posición_TXT";
			this->id_posición_TXT->Size = System::Drawing::Size(132, 25);
			this->id_posición_TXT->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(106, 171);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Id artículo";
			// 
			// id_art_TXT
			// 
			this->id_art_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_art_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->id_art_TXT->Location = System::Drawing::Point(241, 171);
			this->id_art_TXT->Margin = System::Windows::Forms::Padding(4);
			this->id_art_TXT->Name = L"id_art_TXT";
			this->id_art_TXT->Size = System::Drawing::Size(132, 25);
			this->id_art_TXT->TabIndex = 3;
			// 
			// Crear_button
			// 
			this->Crear_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Crear_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Crear_button->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->Crear_button->Location = System::Drawing::Point(450, 122);
			this->Crear_button->Margin = System::Windows::Forms::Padding(4);
			this->Crear_button->Name = L"Crear_button";
			this->Crear_button->Size = System::Drawing::Size(100, 28);
			this->Crear_button->TabIndex = 4;
			this->Crear_button->Text = L"Crear";
			this->Crear_button->UseVisualStyleBackColor = false;
			this->Crear_button->Click += gcnew System::EventHandler(this, &Crear_guardia::Crear_button_Click);
			// 
			// listView_Guardia
			// 
			this->listView_Guardia->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->id_guardia,
					this->id_posicon, this->id_articulo
			});
			this->listView_Guardia->HideSelection = false;
			this->listView_Guardia->Location = System::Drawing::Point(109, 222);
			this->listView_Guardia->Margin = System::Windows::Forms::Padding(4);
			this->listView_Guardia->Name = L"listView_Guardia";
			this->listView_Guardia->Size = System::Drawing::Size(441, 158);
			this->listView_Guardia->TabIndex = 5;
			this->listView_Guardia->UseCompatibleStateImageBehavior = false;
			this->listView_Guardia->View = System::Windows::Forms::View::Details;
			// 
			// id_guardia
			// 
			this->id_guardia->Text = L"ID";
			// 
			// id_posicon
			// 
			this->id_posicon->Text = L"Posicion";
			// 
			// id_articulo
			// 
			this->id_articulo->Text = L"Articulo";
			// 
			// Cons_button
			// 
			this->Cons_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Cons_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cons_button->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->Cons_button->Location = System::Drawing::Point(450, 168);
			this->Cons_button->Margin = System::Windows::Forms::Padding(4);
			this->Cons_button->Name = L"Cons_button";
			this->Cons_button->Size = System::Drawing::Size(100, 28);
			this->Cons_button->TabIndex = 6;
			this->Cons_button->Text = L"Consultar";
			this->Cons_button->UseVisualStyleBackColor = false;
			this->Cons_button->Click += gcnew System::EventHandler(this, &Crear_guardia::Cons_button_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->button1->Location = System::Drawing::Point(450, 399);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"regresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Crear_guardia::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox_id);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(44, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(571, 425);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Guardia";
			// 
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox_id->Location = System::Drawing::Point(197, 45);
			this->textBox_id->Margin = System::Windows::Forms::Padding(4);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(132, 25);
			this->textBox_id->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(62, 49);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"ID";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Location = System::Drawing::Point(406, 42);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Crear_guardia::button2_Click);
			// 
			// Crear_guardia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(677, 506);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Cons_button);
			this->Controls->Add(this->listView_Guardia);
			this->Controls->Add(this->Crear_button);
			this->Controls->Add(this->id_art_TXT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->id_posición_TXT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Crear_guardia";
			this->Text = L"Crear_guardia";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Crear_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Crear_guardia
		(
			Convert::ToInt32(id_posición_TXT->Text),
			Convert::ToInt32(id_art_TXT->Text)
			);
		MessageBox::Show("Registro guardado exitosamente");

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Crear_guardia::Close();
}
private: System::Void Cons_button_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ id_guardia; String^ id_posicon; String^ id_articulo;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
	//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
	//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
	st->InitialCatalog = "proteccionTotal";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ listView_Guardia = gcnew ListView();
	String^ sentencia = "select * from guardia";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read()) {
		id_guardia = (reader["id_guardia"]->ToString());
		id_posicon = (reader["id_posicon"]->ToString());
		id_articulo = (reader["id_articulo"]->ToString());
		String^ srtNew1 = gcnew String(id_guardia);
		String^ srtNew2 = gcnew String(id_posicon);
		String^ srtNew3 = gcnew String(id_articulo);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		listView2->SubItems->Add(srtNew3);
		this->listView_Guardia->Items->Add(listView2);
	}
	cn->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	if (textBox_id->Text == " ") {
		MessageBox::Show("Debe colocar el ID");
	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_guardia; String^ id_posicon; String^ id_articulo;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update guardia set id_posicon=@id_posicon, id_articulo=@id_articulo where id_guardia=@id_guardia";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_guardia", Convert::ToInt64(textBox_id->Text));
		ejecutar->Parameters->AddWithValue("@id_posicon", id_posición_TXT->Text);
		ejecutar->Parameters->AddWithValue("@id_articulo", id_art_TXT->Text);
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
		MessageBox::Show("Registro actualizado");
		textBox_id->Text = "";
		id_posición_TXT->Text = "";
		id_art_TXT->Text = "";
		listView_Guardia->Clear();
	}
}
};
}
