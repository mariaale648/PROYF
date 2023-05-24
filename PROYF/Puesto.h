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
	/// Resumen de Puesto
	/// </summary>
	public ref class Puesto : public System::Windows::Forms::Form
	{
	public:
		Puesto(void)
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
		~Puesto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView_Puesto;
	private: System::Windows::Forms::ColumnHeader^ nombre;


	private: System::Windows::Forms::ColumnHeader^ direccion;
	private: System::Windows::Forms::ColumnHeader^ id_distrito;
	private: System::Windows::Forms::ColumnHeader^ id_cliente;
	private: System::Windows::Forms::ColumnHeader^ id_tpuesto;
	private: System::Windows::Forms::ColumnHeader^ lugar_entrega;
	private: System::Windows::Forms::ColumnHeader^ hora_entrega;
	private: System::Windows::Forms::Button^ regresar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ Hora_txt;
	private: System::Windows::Forms::TextBox^ LEntrega_txt;
	private: System::Windows::Forms::TextBox^ idTpuesto_txt;
	private: System::Windows::Forms::TextBox^ idCliente_txt;
	private: System::Windows::Forms::TextBox^ id_distrito_txt;
	private: System::Windows::Forms::TextBox^ dire_txt;
	private: System::Windows::Forms::TextBox^ N_puesto_TXT;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView_Puesto = (gcnew System::Windows::Forms::ListView());
			this->nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->direccion = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_distrito = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_cliente = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_tpuesto = (gcnew System::Windows::Forms::ColumnHeader());
			this->lugar_entrega = (gcnew System::Windows::Forms::ColumnHeader());
			this->hora_entrega = (gcnew System::Windows::Forms::ColumnHeader());
			this->regresar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->N_puesto_TXT = (gcnew System::Windows::Forms::TextBox());
			this->dire_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_distrito_txt = (gcnew System::Windows::Forms::TextBox());
			this->idCliente_txt = (gcnew System::Windows::Forms::TextBox());
			this->idTpuesto_txt = (gcnew System::Windows::Forms::TextBox());
			this->LEntrega_txt = (gcnew System::Windows::Forms::TextBox());
			this->Hora_txt = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(668, 235);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Puesto::button1_Click);
			// 
			// listView_Puesto
			// 
			this->listView_Puesto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->nombre, this->direccion,
					this->id_distrito, this->id_cliente, this->id_tpuesto, this->lugar_entrega, this->hora_entrega
			});
			this->listView_Puesto->HideSelection = false;
			this->listView_Puesto->Location = System::Drawing::Point(378, 30);
			this->listView_Puesto->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView_Puesto->Name = L"listView_Puesto";
			this->listView_Puesto->Size = System::Drawing::Size(624, 194);
			this->listView_Puesto->TabIndex = 1;
			this->listView_Puesto->UseCompatibleStateImageBehavior = false;
			this->listView_Puesto->View = System::Windows::Forms::View::Details;
			// 
			// nombre
			// 
			this->nombre->Text = L"Nombre";
			this->nombre->Width = 102;
			// 
			// direccion
			// 
			this->direccion->Text = L"Direccion";
			this->direccion->Width = 120;
			// 
			// id_distrito
			// 
			this->id_distrito->Text = L"Distrito (ID)";
			this->id_distrito->Width = 83;
			// 
			// id_cliente
			// 
			this->id_cliente->Text = L"Cliente (ID)";
			this->id_cliente->Width = 82;
			// 
			// id_tpuesto
			// 
			this->id_tpuesto->Text = L"Tipo puesto (ID)";
			this->id_tpuesto->Width = 112;
			// 
			// lugar_entrega
			// 
			this->lugar_entrega->Text = L"Entrega";
			this->lugar_entrega->Width = 80;
			// 
			// hora_entrega
			// 
			this->hora_entrega->Text = L"Hora";
			this->hora_entrega->Width = 107;
			// 
			// regresar
			// 
			this->regresar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->regresar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regresar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->regresar->Location = System::Drawing::Point(949, 309);
			this->regresar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->regresar->Name = L"regresar";
			this->regresar->Size = System::Drawing::Size(75, 32);
			this->regresar->TabIndex = 2;
			this->regresar->Text = L"Regresar";
			this->regresar->UseVisualStyleBackColor = false;
			this->regresar->Click += gcnew System::EventHandler(this, &Puesto::regresar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Hora_txt);
			this->groupBox1->Controls->Add(this->LEntrega_txt);
			this->groupBox1->Controls->Add(this->idTpuesto_txt);
			this->groupBox1->Controls->Add(this->idCliente_txt);
			this->groupBox1->Controls->Add(this->id_distrito_txt);
			this->groupBox1->Controls->Add(this->dire_txt);
			this->groupBox1->Controls->Add(this->N_puesto_TXT);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->regresar);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->listView_Puesto);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(21, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(1032, 345);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Puesto";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre de puesto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Dirección";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Id Distrito";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"id cliente";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 15);
			this->label5->TabIndex = 7;
			this->label5->Text = L"id Tipo Puesto";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 168);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 15);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Lugar entrega";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 15);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Hora de entrega";
			// 
			// N_puesto_TXT
			// 
			this->N_puesto_TXT->Location = System::Drawing::Point(143, 26);
			this->N_puesto_TXT->Name = L"N_puesto_TXT";
			this->N_puesto_TXT->Size = System::Drawing::Size(182, 22);
			this->N_puesto_TXT->TabIndex = 10;
			// 
			// dire_txt
			// 
			this->dire_txt->Location = System::Drawing::Point(143, 54);
			this->dire_txt->Name = L"dire_txt";
			this->dire_txt->Size = System::Drawing::Size(182, 22);
			this->dire_txt->TabIndex = 11;
			// 
			// id_distrito_txt
			// 
			this->id_distrito_txt->Location = System::Drawing::Point(143, 82);
			this->id_distrito_txt->Name = L"id_distrito_txt";
			this->id_distrito_txt->Size = System::Drawing::Size(100, 22);
			this->id_distrito_txt->TabIndex = 12;
			// 
			// idCliente_txt
			// 
			this->idCliente_txt->Location = System::Drawing::Point(143, 110);
			this->idCliente_txt->Name = L"idCliente_txt";
			this->idCliente_txt->Size = System::Drawing::Size(100, 22);
			this->idCliente_txt->TabIndex = 13;
			// 
			// idTpuesto_txt
			// 
			this->idTpuesto_txt->Location = System::Drawing::Point(143, 138);
			this->idTpuesto_txt->Name = L"idTpuesto_txt";
			this->idTpuesto_txt->Size = System::Drawing::Size(100, 22);
			this->idTpuesto_txt->TabIndex = 14;
			// 
			// LEntrega_txt
			// 
			this->LEntrega_txt->Location = System::Drawing::Point(143, 166);
			this->LEntrega_txt->Name = L"LEntrega_txt";
			this->LEntrega_txt->Size = System::Drawing::Size(182, 22);
			this->LEntrega_txt->TabIndex = 15;
			// 
			// Hora_txt
			// 
			this->Hora_txt->Location = System::Drawing::Point(143, 194);
			this->Hora_txt->Name = L"Hora_txt";
			this->Hora_txt->Size = System::Drawing::Size(182, 22);
			this->Hora_txt->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(178, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 33);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Puesto::button2_Click);
			// 
			// Puesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1064, 374);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Puesto";
			this->Text = L"Puesto";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ nombre; String^ direccion; String^ id_distrito; String^ id_cliente; String^ id_tpuesto; String^ lugar_entrega; String^ hora_entrega;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ listView_Puesto = gcnew ListView();
		String^ sentencia = "select * from puesto";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		while (reader->Read()) {
			nombre = (reader["nombre"]->ToString());
			direccion = (reader["direccion"]->ToString());
			id_distrito = (reader["id_distrito"]->ToString());
			id_cliente = (reader["id_cliente"]->ToString());
			id_tpuesto = (reader["id_tpuesto"]->ToString());
			lugar_entrega = (reader["lugar_entrega"]->ToString());
			hora_entrega = (reader["hora_entrega"]->ToString());
			String^ srtNew1 = gcnew String(nombre);
			String^ srtNew2 = gcnew String(direccion);
			String^ srtNew3 = gcnew String(id_distrito);
			String^ srtNew4 = gcnew String(id_cliente);
			String^ srtNew5 = gcnew String(id_tpuesto);
			String^ srtNew6 = gcnew String(lugar_entrega);
			String^ srtNew7 = gcnew String(hora_entrega);
			ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView2->SubItems->Add(srtNew2);
			listView2->SubItems->Add(srtNew3);
			listView2->SubItems->Add(srtNew4);
			listView2->SubItems->Add(srtNew5);
			listView2->SubItems->Add(srtNew6);
			listView2->SubItems->Add(srtNew7);
			this->listView_Puesto->Items->Add(listView2);
		}
		cn->Close();
	}
	private: System::Void regresar_Click(System::Object^ sender, System::EventArgs^ e) {
		Puesto::Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.crear_puesto(
		N_puesto_TXT->Text,
		dire_txt->Text,
		Convert::ToInt64(id_distrito_txt->Text),
		Convert::ToInt64(idCliente_txt->Text),
		Convert::ToInt64(idTpuesto_txt->Text),
		LEntrega_txt->Text,
		Hora_txt->Text
	);
	MessageBox::Show("Registro guardado exitosamente");

		N_puesto_TXT->Text= "";
		dire_txt->Text = "";
		id_distrito_txt->Text = "";
		idCliente_txt->Text = "";
		idTpuesto_txt->Text = "";
		LEntrega_txt->Text = "";
		Hora_txt->Text = "";
}
};
}
