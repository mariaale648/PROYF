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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ColumnHeader^ id_cliente;



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
			this->id_cliente = (gcnew System::Windows::Forms::ColumnHeader());
			this->nombre_empresa = (gcnew System::Windows::Forms::ColumnHeader());
			this->nit = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Regresar = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(184, 85);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre de empresa";
			// 
			// nombre_empre_TXT
			// 
			this->nombre_empre_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre_empre_TXT->Location = System::Drawing::Point(354, 80);
			this->nombre_empre_TXT->Margin = System::Windows::Forms::Padding(4);
			this->nombre_empre_TXT->Name = L"nombre_empre_TXT";
			this->nombre_empre_TXT->Size = System::Drawing::Size(259, 23);
			this->nombre_empre_TXT->TabIndex = 1;
			this->nombre_empre_TXT->TextChanged += gcnew System::EventHandler(this, &cliente::nombre_empre_TXT_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(184, 128);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"NIT empresa";
			// 
			// NIT_TXT
			// 
			this->NIT_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NIT_TXT->Location = System::Drawing::Point(354, 120);
			this->NIT_TXT->Margin = System::Windows::Forms::Padding(4);
			this->NIT_TXT->Name = L"NIT_TXT";
			this->NIT_TXT->Size = System::Drawing::Size(259, 23);
			this->NIT_TXT->TabIndex = 3;
			// 
			// save_cliente_button
			// 
			this->save_cliente_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->save_cliente_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_cliente_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->save_cliente_button->Location = System::Drawing::Point(207, 180);
			this->save_cliente_button->Margin = System::Windows::Forms::Padding(4);
			this->save_cliente_button->Name = L"save_cliente_button";
			this->save_cliente_button->Size = System::Drawing::Size(100, 28);
			this->save_cliente_button->TabIndex = 4;
			this->save_cliente_button->Text = L"Guardar";
			this->save_cliente_button->UseVisualStyleBackColor = false;
			this->save_cliente_button->Click += gcnew System::EventHandler(this, &cliente::save_cliente_button_Click);
			// 
			// listView_Cliente
			// 
			this->listView_Cliente->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->id_cliente,
					this->nombre_empresa, this->nit
			});
			this->listView_Cliente->HideSelection = false;
			this->listView_Cliente->Location = System::Drawing::Point(135, 244);
			this->listView_Cliente->Name = L"listView_Cliente";
			this->listView_Cliente->Size = System::Drawing::Size(522, 168);
			this->listView_Cliente->TabIndex = 5;
			this->listView_Cliente->UseCompatibleStateImageBehavior = false;
			this->listView_Cliente->View = System::Windows::Forms::View::Details;
			// 
			// id_cliente
			// 
			this->id_cliente->Text = L"ID";
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
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(354, 180);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cliente::button1_Click);
			// 
			// Regresar
			// 
			this->Regresar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Regresar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Regresar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Regresar->Location = System::Drawing::Point(332, 439);
			this->Regresar->Name = L"Regresar";
			this->Regresar->Size = System::Drawing::Size(100, 28);
			this->Regresar->TabIndex = 7;
			this->Regresar->Text = L"regresar";
			this->Regresar->UseVisualStyleBackColor = false;
			this->Regresar->Click += gcnew System::EventHandler(this, &cliente::Regresar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_id);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Regresar);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->listView_Cliente);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->NIT_TXT);
			this->groupBox1->Controls->Add(this->save_cliente_button);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->nombre_empre_TXT);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(73, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(759, 488);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cliente";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &cliente::groupBox1_Enter);
			// 
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->Location = System::Drawing::Point(354, 40);
			this->textBox_id->Margin = System::Windows::Forms::Padding(4);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(259, 23);
			this->textBox_id->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(184, 40);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ID";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(507, 180);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &cliente::button2_Click);
			// 
			// cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(955, 574);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"cliente";
			this->Text = L"cliente";
			this->Load += gcnew System::EventHandler(this, &cliente::cliente_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

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
		nombre_empre_TXT->Text = "";
		NIT_TXT->Text = "";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ nombre_empresa; String^ nit; String^ id_cliente;
	st = gcnew SqlConnectionStringBuilder();
	//st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
	st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
	//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
	st->InitialCatalog = "proteccionTotal";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ listView_Cliente = gcnew ListView();
	String^ sentencia = "select * from cliente";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	this->listView_Cliente->Items->Clear();
	while (reader->Read()) {
		id_cliente = (reader["id_cliente"]->ToString());
		nombre_empresa = (reader["nombre_empresa"]->ToString());
		nit = (reader["nit"]->ToString());
		String^ srtNew1 = gcnew String(id_cliente);
		String^ srtNew2 = gcnew String(nombre_empresa);
		String^ srtNew3 = gcnew String(nit);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		listView2->SubItems->Add(srtNew3);
		this->listView_Cliente->Items->Add(listView2);
	}
	cn->Close();
}
private: System::Void Regresar_Click(System::Object^ sender, System::EventArgs^ e) {
	cliente::Close();
}
private: System::Void cliente_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	if (textBox_id->Text == " ") {
		MessageBox::Show("Debe colocar el ID");
	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_cliente; String^ nombre_empresa; String^ nit;
		st = gcnew SqlConnectionStringBuilder();
		//st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update cliente set nombre_empresa=@nombre_empresa, nit=@nit where id_cliente=@id_cliente ";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_cliente", Convert::ToInt64(textBox_id->Text));
		ejecutar->Parameters->AddWithValue("@nombre_empresa", nombre_empre_TXT->Text);
		ejecutar->Parameters->AddWithValue("@nit", NIT_TXT->Text);
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
		MessageBox::Show("Registro actualizado");
		textBox_id->Text = "";
		nombre_empre_TXT->Text = "";
		NIT_TXT->Text = "";
		
	}
}
private: System::Void nombre_empre_TXT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
