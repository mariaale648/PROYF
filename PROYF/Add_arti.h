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
			this->Fecha_ingreso = (gcnew System::Windows::Forms::TextBox());
			this->nombre_art_txt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(40, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción de artículo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(40, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cantidad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(40, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Marca";
			// 
			// desc_txt
			// 
			this->desc_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desc_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->desc_txt->Location = System::Drawing::Point(205, 60);
			this->desc_txt->Name = L"desc_txt";
			this->desc_txt->Size = System::Drawing::Size(100, 22);
			this->desc_txt->TabIndex = 5;
			// 
			// Cantidad_txt
			// 
			this->Cantidad_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cantidad_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Cantidad_txt->Location = System::Drawing::Point(205, 118);
			this->Cantidad_txt->Name = L"Cantidad_txt";
			this->Cantidad_txt->Size = System::Drawing::Size(100, 22);
			this->Cantidad_txt->TabIndex = 6;
			// 
			// Proveedor_txt
			// 
			this->Proveedor_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Proveedor_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Proveedor_txt->Location = System::Drawing::Point(205, 90);
			this->Proveedor_txt->Name = L"Proveedor_txt";
			this->Proveedor_txt->Size = System::Drawing::Size(100, 22);
			this->Proveedor_txt->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(137, 202);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Add_arti::button1_Click);
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(21, 24);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(424, 296);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar articulo";
			// 
			// Fecha_ingreso
			// 
			this->Fecha_ingreso->Location = System::Drawing::Point(205, 148);
			this->Fecha_ingreso->Name = L"Fecha_ingreso";
			this->Fecha_ingreso->Size = System::Drawing::Size(100, 22);
			this->Fecha_ingreso->TabIndex = 12;
			// 
			// nombre_art_txt
			// 
			this->nombre_art_txt->Location = System::Drawing::Point(205, 29);
			this->nombre_art_txt->Name = L"nombre_art_txt";
			this->nombre_art_txt->Size = System::Drawing::Size(100, 22);
			this->nombre_art_txt->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(40, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Fecha de ingreso";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(40, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nombre artículo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 15);
			this->label2->TabIndex = 8;
			// 
			// Add_arti
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(468, 344);
			this->Controls->Add(this->groupBox1);
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

	}
private: System::Void ID_art_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
