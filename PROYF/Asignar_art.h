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
	/// Resumen de Asignar_art
	/// </summary>
	public ref class Asignar_art : public System::Windows::Forms::Form
	{
	public:
		Asignar_art(void)
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
		~Asignar_art()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Agregar_button;
	private: System::Windows::Forms::ListView^ listView_Art;
	private: System::Windows::Forms::ListView^ listView_Pue;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ColumnHeader^ id_articulo;
	private: System::Windows::Forms::ColumnHeader^ nombre_art;
	private: System::Windows::Forms::ColumnHeader^ id_posicion;
	private: System::Windows::Forms::ColumnHeader^ nombres;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Agregar_button = (gcnew System::Windows::Forms::Button());
			this->listView_Art = (gcnew System::Windows::Forms::ListView());
			this->listView_Pue = (gcnew System::Windows::Forms::ListView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->id_articulo = (gcnew System::Windows::Forms::ColumnHeader());
			this->nombre_art = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_posicion = (gcnew System::Windows::Forms::ColumnHeader());
			this->nombres = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(127, 41);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Seleccionar artículo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(127, 111);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Seleccionar empleado";
			this->label2->Click += gcnew System::EventHandler(this, &Asignar_art::label2_Click);
			// 
			// Agregar_button
			// 
			this->Agregar_button->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Agregar_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Agregar_button->Location = System::Drawing::Point(619, 62);
			this->Agregar_button->Margin = System::Windows::Forms::Padding(4);
			this->Agregar_button->Name = L"Agregar_button";
			this->Agregar_button->Size = System::Drawing::Size(113, 39);
			this->Agregar_button->TabIndex = 2;
			this->Agregar_button->Text = L"Asignar";
			this->Agregar_button->UseVisualStyleBackColor = false;
			// 
			// listView_Art
			// 
			this->listView_Art->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->id_articulo, this->nombre_art });
			this->listView_Art->HideSelection = false;
			this->listView_Art->Location = System::Drawing::Point(131, 266);
			this->listView_Art->Name = L"listView_Art";
			this->listView_Art->Size = System::Drawing::Size(266, 134);
			this->listView_Art->TabIndex = 3;
			this->listView_Art->UseCompatibleStateImageBehavior = false;
			this->listView_Art->View = System::Windows::Forms::View::Details;
			// 
			// listView_Pue
			// 
			this->listView_Pue->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->id_posicion, this->nombres });
			this->listView_Pue->HideSelection = false;
			this->listView_Pue->Location = System::Drawing::Point(548, 266);
			this->listView_Pue->Name = L"listView_Pue";
			this->listView_Pue->Size = System::Drawing::Size(266, 134);
			this->listView_Pue->TabIndex = 4;
			this->listView_Pue->UseCompatibleStateImageBehavior = false;
			this->listView_Pue->View = System::Windows::Forms::View::Details;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(206, 229);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Articulo";
			this->label3->Click += gcnew System::EventHandler(this, &Asignar_art::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(650, 229);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Empleado";
			this->label4->Click += gcnew System::EventHandler(this, &Asignar_art::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(330, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(330, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 22);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(401, 441);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 39);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Asignar_art::button1_Click);
			// 
			// id_articulo
			// 
			this->id_articulo->Text = L"ID";
			// 
			// nombre_art
			// 
			this->nombre_art->Text = L"Nombre";
			this->nombre_art->Width = 201;
			// 
			// id_posicion
			// 
			this->id_posicion->Text = L"ID";
			this->id_posicion->Width = 112;
			// 
			// nombres
			// 
			this->nombres->Text = L"Nombre";
			this->nombres->Width = 149;
			// 
			// Asignar_art
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(934, 526);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView_Pue);
			this->Controls->Add(this->listView_Art);
			this->Controls->Add(this->Agregar_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Asignar_art";
			this->Text = L"Asignar_art";
			this->Load += gcnew System::EventHandler(this, &Asignar_art::Asignar_art_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Asignar_art_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ nombre_art; String^ id_articulo; String^ id_posicion; String^ nombres;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
	//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
	//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
	st->InitialCatalog = "proteccionTotal";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ listView_Art = gcnew ListView();
	ListView^ listView_Pue = gcnew ListView();
	String^ sentencia = "select * from almacen";
	String^ sentencia2 = "select * from posicion";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	SqlCommand^ ejecutar2 = gcnew SqlCommand(sentencia2, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read()) {
		id_articulo = (reader["id_articulo"]->ToString());
		nombre_art = (reader["nombre_art"]->ToString());
		String^ srtNew1 = gcnew String(id_articulo);
		String^ srtNew2 = gcnew String(nombre_art);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		this->listView_Art->Items->Add(listView2);
	}
	cn->Close();
	cn->Open();
	SqlDataReader^ reader2 = ejecutar2->ExecuteReader();
	while (reader2->Read()) {
		id_posicion = (reader2["id_posicion"]->ToString());
		nombres = (reader2["nombres"]->ToString());
		String^ srtNew1 = gcnew String(id_posicion);
		String^ srtNew2 = gcnew String(nombres);
		ListViewItem^ listView3 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView3->SubItems->Add(srtNew2);
		this->listView_Pue->Items->Add(listView3);
	}
	cn->Close();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
