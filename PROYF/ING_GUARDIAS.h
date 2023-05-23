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
	/// Resumen de ING_GUARDIAS
	/// </summary>
	public ref class ING_GUARDIAS : public System::Windows::Forms::Form
	{
	public:
		ING_GUARDIAS(void)
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
		~ING_GUARDIAS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ NOMBRES_TXT;
	private: System::Windows::Forms::TextBox^ APELLIDOS_TXT;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ EDAD_TXT;
	private: System::Windows::Forms::TextBox^ ECIVL_TXT;
	private: System::Windows::Forms::TextBox^ DPI_TXT;
	private: System::Windows::Forms::ListView^ listView_Guardias;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ Guardar_button;
	private: System::Windows::Forms::TextBox^ Direc_TXT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ idPuesto_TXT;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ CONSULTAR_G;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NOMBRES_TXT = (gcnew System::Windows::Forms::TextBox());
			this->APELLIDOS_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->EDAD_TXT = (gcnew System::Windows::Forms::TextBox());
			this->ECIVL_TXT = (gcnew System::Windows::Forms::TextBox());
			this->DPI_TXT = (gcnew System::Windows::Forms::TextBox());
			this->listView_Guardias = (gcnew System::Windows::Forms::ListView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->idPuesto_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Direc_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Guardar_button = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->CONSULTAR_G = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// NOMBRES_TXT
			// 
			this->NOMBRES_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NOMBRES_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->NOMBRES_TXT->Location = System::Drawing::Point(122, 30);
			this->NOMBRES_TXT->Name = L"NOMBRES_TXT";
			this->NOMBRES_TXT->Size = System::Drawing::Size(144, 22);
			this->NOMBRES_TXT->TabIndex = 0;
			this->NOMBRES_TXT->TextChanged += gcnew System::EventHandler(this, &ING_GUARDIAS::NOMBRES_TXT_TextChanged);
			// 
			// APELLIDOS_TXT
			// 
			this->APELLIDOS_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APELLIDOS_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->APELLIDOS_TXT->Location = System::Drawing::Point(122, 58);
			this->APELLIDOS_TXT->Name = L"APELLIDOS_TXT";
			this->APELLIDOS_TXT->Size = System::Drawing::Size(144, 22);
			this->APELLIDOS_TXT->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(19, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"NOMBRES";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(19, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"APELLIDOS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(19, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"EDAD";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(19, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ESTADO CIVIL";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(19, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"DPI";
			this->label5->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::label5_Click);
			// 
			// EDAD_TXT
			// 
			this->EDAD_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EDAD_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->EDAD_TXT->Location = System::Drawing::Point(122, 174);
			this->EDAD_TXT->Name = L"EDAD_TXT";
			this->EDAD_TXT->Size = System::Drawing::Size(144, 22);
			this->EDAD_TXT->TabIndex = 7;
			// 
			// ECIVL_TXT
			// 
			this->ECIVL_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ECIVL_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->ECIVL_TXT->Location = System::Drawing::Point(122, 90);
			this->ECIVL_TXT->Name = L"ECIVL_TXT";
			this->ECIVL_TXT->Size = System::Drawing::Size(144, 22);
			this->ECIVL_TXT->TabIndex = 8;
			// 
			// DPI_TXT
			// 
			this->DPI_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DPI_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->DPI_TXT->Location = System::Drawing::Point(122, 118);
			this->DPI_TXT->Name = L"DPI_TXT";
			this->DPI_TXT->Size = System::Drawing::Size(144, 22);
			this->DPI_TXT->TabIndex = 9;
			// 
			// listView_Guardias
			// 
			this->listView_Guardias->HideSelection = false;
			this->listView_Guardias->Location = System::Drawing::Point(15, 56);
			this->listView_Guardias->Name = L"listView_Guardias";
			this->listView_Guardias->Size = System::Drawing::Size(419, 172);
			this->listView_Guardias->TabIndex = 10;
			this->listView_Guardias->UseCompatibleStateImageBehavior = false;
			this->listView_Guardias->SelectedIndexChanged += gcnew System::EventHandler(this, &ING_GUARDIAS::listView_Guardias_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->idPuesto_TXT);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->Direc_TXT);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->Guardar_button);
			this->groupBox1->Controls->Add(this->ECIVL_TXT);
			this->groupBox1->Controls->Add(this->DPI_TXT);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->EDAD_TXT);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->NOMBRES_TXT);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->APELLIDOS_TXT);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(24, 11);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(302, 289);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ING_GUARDIAS::groupBox1_Enter);
			// 
			// idPuesto_TXT
			// 
			this->idPuesto_TXT->Location = System::Drawing::Point(122, 206);
			this->idPuesto_TXT->Name = L"idPuesto_TXT";
			this->idPuesto_TXT->Size = System::Drawing::Size(144, 22);
			this->idPuesto_TXT->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Location = System::Drawing::Point(19, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"id_puesto";
			// 
			// Direc_TXT
			// 
			this->Direc_TXT->Location = System::Drawing::Point(122, 146);
			this->Direc_TXT->Name = L"Direc_TXT";
			this->Direc_TXT->Size = System::Drawing::Size(144, 22);
			this->Direc_TXT->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Dirección";
			// 
			// Guardar_button
			// 
			this->Guardar_button->Location = System::Drawing::Point(153, 251);
			this->Guardar_button->Name = L"Guardar_button";
			this->Guardar_button->Size = System::Drawing::Size(75, 23);
			this->Guardar_button->TabIndex = 0;
			this->Guardar_button->Text = L"Guardar";
			this->Guardar_button->UseVisualStyleBackColor = true;
			this->Guardar_button->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::Guardar_button_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->CONSULTAR_G);
			this->groupBox2->Controls->Add(this->listView_Guardias);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox2->Location = System::Drawing::Point(352, 45);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(460, 255);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Informacion Guardias";
			// 
			// CONSULTAR_G
			// 
			this->CONSULTAR_G->Location = System::Drawing::Point(178, 23);
			this->CONSULTAR_G->Name = L"CONSULTAR_G";
			this->CONSULTAR_G->Size = System::Drawing::Size(91, 23);
			this->CONSULTAR_G->TabIndex = 11;
			this->CONSULTAR_G->Text = L"CONSULTAR";
			this->CONSULTAR_G->UseVisualStyleBackColor = true;
			this->CONSULTAR_G->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::CONSULTAR_G_Click);
			// 
			// ING_GUARDIAS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(840, 320);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"ING_GUARDIAS";
			this->Text = L"ING_GUARDIAS";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Guardar_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insert_Guar(

			NOMBRES_TXT->Text,
			APELLIDOS_TXT->Text,
			Convert::ToInt64(ECIVL_TXT->Text),
			Convert::ToInt64(DPI_TXT->Text),
			Direc_TXT->Text,
			Convert::ToInt64(EDAD_TXT->Text),
			Convert::ToInt64(idPuesto_TXT->Text));
		MessageBox::Show("Registro guardado exitosamente");


	}
	private: System::Void CONSULTAR_G_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ nombres; String^ apellidos; String^ estado_civil; String^ dpi; String^ direccion; String^ edad; String^ id_puesto;

		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ listView2 = gcnew ListView();
		String^ sentencia = "SELECT *FROM posicion";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		while (reader->Read())
		{
			nombres = (reader["nombres"]->ToString());
			apellidos = (reader["apellidos"]->ToString());
			estado_civil = (reader["estado_civil"]->ToString());
			dpi = (reader["dpi"]->ToString());
			direccion = (reader["direccion"]->ToString());
			edad = (reader["edad"]->ToString());
			edad = (reader["id_puesto"]->ToString());
			String^ srtNew1 = gcnew String(nombres);
			String^ srtNew2 = gcnew String(apellidos);
			String^ srtNew3 = gcnew String(estado_civil);
			String^ srtNew4 = gcnew String(dpi);
			String^ srtNew5 = gcnew String(direccion);
			String^ srtNew6 = gcnew String(edad);
			String^ srtNew7 = gcnew String(id_puesto);

			ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView2->SubItems->Add(srtNew2);
			listView2->SubItems->Add(srtNew3);
			listView2->SubItems->Add(srtNew4);
			listView2->SubItems->Add(srtNew5);
			listView2->SubItems->Add(srtNew6);
			listView2->SubItems->Add(srtNew7);
			this->listView_Guardias->Items->Add(listView2);
		}
		cn->Close();
	}
	private: System::Void NOMBRES_TXT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listView_Guardias_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
};

