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
	/// Resumen de cliente
	/// </summary>
	public ref class cliente : public System::Windows::Forms::Form
	{
	public:
		cliente(void)
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
		~cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nombre_empre_TXT;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NIT_TXT;
	private: System::Windows::Forms::Button^ save_cliente_button;
	private: System::Windows::Forms::ListView^ listView_Cliente;

	private: System::Windows::Forms::ColumnHeader^ nombre_empresa;
	private: System::Windows::Forms::ColumnHeader^ nit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Regresar;


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
			this->nombre_empre_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NIT_TXT = (gcnew System::Windows::Forms::TextBox());
			this->save_cliente_button = (gcnew System::Windows::Forms::Button());
			this->listView_Cliente = (gcnew System::Windows::Forms::ListView());
			this->nombre_empresa = (gcnew System::Windows::Forms::ColumnHeader());
			this->nit = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Regresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 44);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre de empresa";
			// 
			// nombre_empre_TXT
			// 
			this->nombre_empre_TXT->Location = System::Drawing::Point(160, 44);
			this->nombre_empre_TXT->Margin = System::Windows::Forms::Padding(4);
			this->nombre_empre_TXT->Name = L"nombre_empre_TXT";
			this->nombre_empre_TXT->Size = System::Drawing::Size(259, 22);
			this->nombre_empre_TXT->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"NIT empresa";
			// 
			// NIT_TXT
			// 
			this->NIT_TXT->Location = System::Drawing::Point(160, 84);
			this->NIT_TXT->Margin = System::Windows::Forms::Padding(4);
			this->NIT_TXT->Name = L"NIT_TXT";
			this->NIT_TXT->Size = System::Drawing::Size(259, 22);
			this->NIT_TXT->TabIndex = 3;
			// 
			// save_cliente_button
			// 
			this->save_cliente_button->Location = System::Drawing::Point(104, 156);
			this->save_cliente_button->Margin = System::Windows::Forms::Padding(4);
			this->save_cliente_button->Name = L"save_cliente_button";
			this->save_cliente_button->Size = System::Drawing::Size(100, 28);
			this->save_cliente_button->TabIndex = 4;
			this->save_cliente_button->Text = L"Guardar";
			this->save_cliente_button->UseVisualStyleBackColor = true;
			this->save_cliente_button->Click += gcnew System::EventHandler(this, &cliente::save_cliente_button_Click);
			// 
			// listView_Cliente
			// 
			this->listView_Cliente->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->nombre_empresa,
					this->nit
			});
			this->listView_Cliente->HideSelection = false;
			this->listView_Cliente->Location = System::Drawing::Point(498, 44);
			this->listView_Cliente->Name = L"listView_Cliente";
			this->listView_Cliente->Size = System::Drawing::Size(438, 168);
			this->listView_Cliente->TabIndex = 5;
			this->listView_Cliente->UseCompatibleStateImageBehavior = false;
			this->listView_Cliente->View = System::Windows::Forms::View::Details;
			// 
			// nombre_empresa
			// 
			this->nombre_empresa->Text = L"Nombre";
			this->nombre_empresa->Width = 234;
			// 
			// nit
			// 
			this->nit->Text = L"NIT";
			this->nit->Width = 198;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 156);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cliente::button1_Click);
			// 
			// Regresar
			// 
			this->Regresar->Location = System::Drawing::Point(104, 254);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(75, 23);
			this->Regresar->TabIndex = 7;
			this->Regresar->Text = L"regresar";
			this->Regresar->UseVisualStyleBackColor = true;
			this->Regresar->Click += gcnew System::EventHandler(this, &cliente::Regresar_Click);
			// 
			// cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 321);
			this->Controls->Add(this->Regresar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView_Cliente);
			this->Controls->Add(this->save_cliente_button);
			this->Controls->Add(this->NIT_TXT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nombre_empre_TXT);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"cliente";
			this->Text = L"cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void save_cliente_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insert_cliente
		(
		nombre_empre_TXT->Text,
		Convert::ToInt64(NIT_TXT->Text)
		);
		MessageBox::Show("Registro guardado exitosamente");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ nombre_empresa; String^ nit;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
	//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
	//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
	st->InitialCatalog = "proteccionTotal";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ listView_Cliente = gcnew ListView();
	String^ sentencia = "select * from cliente";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read()) {
		nombre_empresa = (reader["nombre_empresa"]->ToString());
		nit = (reader["nit"]->ToString());
		String^ srtNew1 = gcnew String(nombre_empresa);
		String^ srtNew2 = gcnew String(nit);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		this->listView_Cliente->Items->Add(listView2);
	}
	cn->Close();
}
private: System::Void Regresar_Click(System::Object^ sender, System::EventArgs^ e) {
	cliente::Close();
}
};
}
