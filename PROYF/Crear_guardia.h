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
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ Cons_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Cons_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(109, 222);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(441, 158);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
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
			// Crear_guardia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(677, 506);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Cons_button);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Crear_button);
			this->Controls->Add(this->id_art_TXT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->id_posición_TXT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Crear_guardia";
			this->Text = L"Crear_guardia";
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
};
}
