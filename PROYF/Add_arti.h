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
	/// Resumen de Add_arti
	/// </summary>
	public ref class Add_arti : public System::Windows::Forms::Form
	{
	public:
		Add_arti(void)
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
		~Add_arti()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ desc_txt;
	private: System::Windows::Forms::TextBox^ Cantidad_txt;
	private: System::Windows::Forms::TextBox^ Proveedor_txt;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ Fecha_ingreso;
	private: System::Windows::Forms::TextBox^ nombre_art_txt;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;








	private: System::Windows::Forms::Button^ Regreso;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox_id;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListView^ listView_Articulo;

	private: System::Windows::Forms::ColumnHeader^ id_articulo;
	private: System::Windows::Forms::ColumnHeader^ nombre_art;
	private: System::Windows::Forms::ColumnHeader^ descripcion;
	private: System::Windows::Forms::ColumnHeader^ marca;
	private: System::Windows::Forms::ColumnHeader^ cantidad;
	private: System::Windows::Forms::ColumnHeader^ fecha_ingreso_a;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->desc_txt = (gcnew System::Windows::Forms::TextBox());
			this->Cantidad_txt = (gcnew System::Windows::Forms::TextBox());
			this->Proveedor_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Fecha_ingreso = (gcnew System::Windows::Forms::TextBox());
			this->nombre_art_txt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Regreso = (gcnew System::Windows::Forms::Button());
			this->listView_Articulo = (gcnew System::Windows::Forms::ListView());
			this->id_articulo = (gcnew System::Windows::Forms::ColumnHeader());
			this->nombre_art = (gcnew System::Windows::Forms::ColumnHeader());
			this->descripcion = (gcnew System::Windows::Forms::ColumnHeader());
			this->marca = (gcnew System::Windows::Forms::ColumnHeader());
			this->cantidad = (gcnew System::Windows::Forms::ColumnHeader());
			this->fecha_ingreso_a = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(53, 147);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción de artículo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(53, 219);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cantidad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(53, 180);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Marca";
			// 
			// desc_txt
			// 
			this->desc_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desc_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->desc_txt->Location = System::Drawing::Point(273, 143);
			this->desc_txt->Margin = System::Windows::Forms::Padding(4);
			this->desc_txt->Name = L"desc_txt";
			this->desc_txt->Size = System::Drawing::Size(132, 25);
			this->desc_txt->TabIndex = 5;
			// 
			// Cantidad_txt
			// 
			this->Cantidad_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cantidad_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Cantidad_txt->Location = System::Drawing::Point(273, 214);
			this->Cantidad_txt->Margin = System::Windows::Forms::Padding(4);
			this->Cantidad_txt->Name = L"Cantidad_txt";
			this->Cantidad_txt->Size = System::Drawing::Size(132, 25);
			this->Cantidad_txt->TabIndex = 6;
			// 
			// Proveedor_txt
			// 
			this->Proveedor_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Proveedor_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Proveedor_txt->Location = System::Drawing::Point(273, 180);
			this->Proveedor_txt->Margin = System::Windows::Forms::Padding(4);
			this->Proveedor_txt->Name = L"Proveedor_txt";
			this->Proveedor_txt->Size = System::Drawing::Size(132, 25);
			this->Proveedor_txt->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(56, 317);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Add_arti::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_id);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->Fecha_ingreso);
			this->groupBox1->Controls->Add(this->nombre_art_txt);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Proveedor_txt);
			this->groupBox1->Controls->Add(this->desc_txt);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->Cantidad_txt);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(28, 30);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(450, 403);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar articulo";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Add_arti::groupBox1_Enter);
			// 
			// textBox_id
			// 
			this->textBox_id->Location = System::Drawing::Point(273, 70);
			this->textBox_id->Margin = System::Windows::Forms::Padding(4);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(132, 25);
			this->textBox_id->TabIndex = 16;
			this->textBox_id->TextChanged += gcnew System::EventHandler(this, &Add_arti::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(53, 81);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"ID artículo";
			this->label7->Click += gcnew System::EventHandler(this, &Add_arti::label7_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Location = System::Drawing::Point(173, 317);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 39);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Actualizar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Add_arti::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(294, 317);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 39);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Consultar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Add_arti::button2_Click);
			// 
			// Fecha_ingreso
			// 
			this->Fecha_ingreso->Location = System::Drawing::Point(273, 251);
			this->Fecha_ingreso->Margin = System::Windows::Forms::Padding(4);
			this->Fecha_ingreso->Name = L"Fecha_ingreso";
			this->Fecha_ingreso->Size = System::Drawing::Size(132, 25);
			this->Fecha_ingreso->TabIndex = 12;
			// 
			// nombre_art_txt
			// 
			this->nombre_art_txt->Location = System::Drawing::Point(273, 105);
			this->nombre_art_txt->Margin = System::Windows::Forms::Padding(4);
			this->nombre_art_txt->Name = L"nombre_art_txt";
			this->nombre_art_txt->Size = System::Drawing::Size(132, 25);
			this->nombre_art_txt->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(53, 251);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Fecha de ingreso";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(53, 116);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nombre artículo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 78);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 8;
			// 
			// Regreso
			// 
			this->Regreso->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Regreso->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Regreso->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Regreso->Location = System::Drawing::Point(936, 355);
			this->Regreso->Name = L"Regreso";
			this->Regreso->Size = System::Drawing::Size(111, 39);
			this->Regreso->TabIndex = 11;
			this->Regreso->Text = L"Regresar";
			this->Regreso->UseVisualStyleBackColor = false;
			this->Regreso->Click += gcnew System::EventHandler(this, &Add_arti::Regreso_Click);
			// 
			// listView_Articulo
			// 
			this->listView_Articulo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->id_articulo,
					this->nombre_art, this->descripcion, this->marca, this->cantidad, this->fecha_ingreso_a
			});
			this->listView_Articulo->HideSelection = false;
			this->listView_Articulo->Location = System::Drawing::Point(548, 54);
			this->listView_Articulo->Name = L"listView_Articulo";
			this->listView_Articulo->Size = System::Drawing::Size(672, 285);
			this->listView_Articulo->TabIndex = 12;
			this->listView_Articulo->UseCompatibleStateImageBehavior = false;
			this->listView_Articulo->View = System::Windows::Forms::View::Details;
			// 
			// id_articulo
			// 
			this->id_articulo->Text = L"ID";
			this->id_articulo->Width = 108;
			// 
			// nombre_art
			// 
			this->nombre_art->Text = L"Nombre";
			this->nombre_art->Width = 97;
			// 
			// descripcion
			// 
			this->descripcion->Text = L"Descripcion";
			this->descripcion->Width = 88;
			// 
			// marca
			// 
			this->marca->Text = L"Marca";
			this->marca->Width = 108;
			// 
			// cantidad
			// 
			this->cantidad->Text = L"Cantidad";
			this->cantidad->Width = 120;
			// 
			// fecha_ingreso_a
			// 
			this->fecha_ingreso_a->Text = L"Fecha ingreso";
			this->fecha_ingreso_a->Width = 120;
			// 
			// Add_arti
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1240, 481);
			this->Controls->Add(this->listView_Articulo);
			this->Controls->Add(this->Regreso);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Add_arti";
			this->Text = L"Add_arti";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insert_Art(
			nombre_art_txt->Text,
			desc_txt->Text,
			Proveedor_txt->Text,
			Convert::ToInt64(Cantidad_txt->Text),
			Fecha_ingreso->Text
			);
			MessageBox::Show("Registro guardado exitosamente");
			textBox_id->Text = "";
			nombre_art_txt->Text = "";
			desc_txt->Text = "";
			Proveedor_txt->Text = "";
			Cantidad_txt->Text = "";
			Fecha_ingreso->Text = "";

	}
private: System::Void ID_art_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ nombre_art; String^ descripcion; String^ marca; String^ cantidad; String^ fecha_ingreso; String^ id_articulo;
	st = gcnew SqlConnectionStringBuilder();
	//st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
	st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
	//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
	st->InitialCatalog = "proteccionTotal";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ listView_Articulo = gcnew ListView();
	String^ sentencia = "select * from almacen";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	this->listView_Articulo->Refresh();
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	this->listView_Articulo->Items->Clear();
	while (reader->Read()) {
		id_articulo = (reader["id_articulo"]->ToString());
		nombre_art = (reader["nombre_art"]->ToString());
		descripcion = (reader["descripcion"]->ToString());
		marca = (reader["marca"]->ToString());
		cantidad = (reader["cantidad"]->ToString());
		fecha_ingreso = (reader["fecha_ingreso_a"]->ToString());
		String^ srtNew1 = gcnew String(id_articulo);
		String^ srtNew2 = gcnew String(nombre_art);
		String^ srtNew3 = gcnew String(descripcion);
		String^ srtNew4 = gcnew String(marca);
		String^ srtNew5 = gcnew String(cantidad);
		String^ srtNew6 = gcnew String(fecha_ingreso);
		ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView2->SubItems->Add(srtNew2);
		listView2->SubItems->Add(srtNew3);
		listView2->SubItems->Add(srtNew4);
		listView2->SubItems->Add(srtNew5);
		listView2->SubItems->Add(srtNew6);
		this->listView_Articulo->Items->Add(listView2);
	}
	cn->Close();

}
private: System::Void Regreso_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_arti::Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	if (textBox_id->Text == " ") {
		MessageBox::Show("Debe colocar el ID");
	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ nombre_art; String^ descripcion; String^ marca; String^ cantidad;
		st = gcnew SqlConnectionStringBuilder();
		//st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		
		String^ sentencia = "update almacen set nombre_art=@nombre_art, descripcion=@descripcion, marca=@marca, cantidad=@cantidad where id_articulo=@id_articulo";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_articulo", Convert::ToInt64(textBox_id->Text));
		ejecutar->Parameters->AddWithValue("@nombre_art", nombre_art_txt->Text);
		ejecutar->Parameters->AddWithValue("@descripcion", desc_txt->Text);
		ejecutar->Parameters->AddWithValue("@marca", Proveedor_txt->Text);
		ejecutar->Parameters->AddWithValue("@cantidad", Cantidad_txt->Text);
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
		MessageBox::Show("Registro actualizado");
		textBox_id->Text = "";
		nombre_art_txt->Text = "";
		desc_txt->Text = "";
		Proveedor_txt->Text = "";
		Cantidad_txt->Text = "";
		
	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView_Articulo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
