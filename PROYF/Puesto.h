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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(724, 348);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Puesto::button1_Click);
			// 
			// listView_Puesto
			// 
			this->listView_Puesto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->nombre, this->direccion,
					this->id_distrito, this->id_cliente, this->id_tpuesto, this->lugar_entrega, this->hora_entrega
			});
			this->listView_Puesto->HideSelection = false;
			this->listView_Puesto->Location = System::Drawing::Point(489, 66);
			this->listView_Puesto->Name = L"listView_Puesto";
			this->listView_Puesto->Size = System::Drawing::Size(693, 238);
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
			// Puesto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1256, 549);
			this->Controls->Add(this->listView_Puesto);
			this->Controls->Add(this->button1);
			this->Name = L"Puesto";
			this->Text = L"Puesto";
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
	};
}
