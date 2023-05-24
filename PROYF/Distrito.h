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
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView_Distrito;

	private: System::Windows::Forms::ColumnHeader^ nombre_distrito;
	private: System::Windows::Forms::Button^ Regresar;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView_Distrito = (gcnew System::Windows::Forms::ListView());
			this->nombre_distrito = (gcnew System::Windows::Forms::ColumnHeader());
			this->Regresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(606, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 53);
			this->button2->TabIndex = 3;
			this->button2->Text = L"consultar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Distrito::button2_Click);
			// 
			// listView_Distrito
			// 
			this->listView_Distrito->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->nombre_distrito });
			this->listView_Distrito->HideSelection = false;
			this->listView_Distrito->Location = System::Drawing::Point(446, 160);
			this->listView_Distrito->Name = L"listView_Distrito";
			this->listView_Distrito->Size = System::Drawing::Size(435, 179);
			this->listView_Distrito->TabIndex = 4;
			this->listView_Distrito->UseCompatibleStateImageBehavior = false;
			this->listView_Distrito->View = System::Windows::Forms::View::Details;
			this->listView_Distrito->SelectedIndexChanged += gcnew System::EventHandler(this, &Distrito::listView1_SelectedIndexChanged);
			// 
			// nombre_distrito
			// 
			this->nombre_distrito->Text = L"Nombre";
			this->nombre_distrito->Width = 478;
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(155, 300);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(75, 23);
			this->Regresar->TabIndex = 5;
			this->Regresar->Text = L"Regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &Distrito::Regresar_Click);
			// 
			// Distrito
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 441);
			this->Controls->Add(this->Regresar);
			this->Controls->Add(this->listView_Distrito);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Distrito";
			this->Text = L"Distrito";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ nombre_distrito;
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
		nombre_distrito = (reader["nombre_distrito"]->ToString());
		String^ srtNew1 = gcnew String(nombre_distrito);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		this->listView_Distrito	->Items->Add(listView2);
	}
	cn->Close();
}
private: System::Void Regresar_Click(System::Object^ sender, System::EventArgs^ e) {
	Distrito::Close();
}
};
}
