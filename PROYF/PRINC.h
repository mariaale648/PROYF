#pragma once
#include "ING_GUARDIAS.h"
#include "Consulta__Inv.h"
#include "Add_arti.h"
#include"Asignar_art.h"
#include "Asignar_guardia.h"
#include "cliente.h"
#include "Crear_guardia.h"
#include "Distrito.h"
#include "Puesto.h"

namespace PROYF {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PRINC
	/// </summary>
	public ref class PRINC : public System::Windows::Forms::Form
	{
	public:
		PRINC(void)
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
		~PRINC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ Agregar_inv_button;
	private: System::Windows::Forms::Button^ Asignar_art_button;

	protected:





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ Add_cons_guardia;

	private: System::Windows::Forms::Button^ Distrito_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Cliente_button;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PRINC::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Agregar_inv_button = (gcnew System::Windows::Forms::Button());
			this->Asignar_art_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Distrito_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Cliente_button = (gcnew System::Windows::Forms::Button());
			this->Add_cons_guardia = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(243, 107);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(435, 121);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Agregar_inv_button
			// 
			this->Agregar_inv_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Agregar_inv_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar_inv_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Agregar_inv_button->Location = System::Drawing::Point(49, 265);
			this->Agregar_inv_button->Margin = System::Windows::Forms::Padding(4);
			this->Agregar_inv_button->Name = L"Agregar_inv_button";
			this->Agregar_inv_button->Size = System::Drawing::Size(229, 71);
			this->Agregar_inv_button->TabIndex = 5;
			this->Agregar_inv_button->Text = L"Inventario";
			this->Agregar_inv_button->UseVisualStyleBackColor = false;
			this->Agregar_inv_button->Click += gcnew System::EventHandler(this, &PRINC::Agregar_inv_button_Click);
			// 
			// Asignar_art_button
			// 
			this->Asignar_art_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Asignar_art_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Asignar_art_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Asignar_art_button->Location = System::Drawing::Point(524, 344);
			this->Asignar_art_button->Margin = System::Windows::Forms::Padding(4);
			this->Asignar_art_button->Name = L"Asignar_art_button";
			this->Asignar_art_button->Size = System::Drawing::Size(229, 71);
			this->Asignar_art_button->TabIndex = 6;
			this->Asignar_art_button->Text = L"Guardia";
			this->Asignar_art_button->UseVisualStyleBackColor = false;
			this->Asignar_art_button->Click += gcnew System::EventHandler(this, &PRINC::Asignar_art_button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Distrito_button);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->Cliente_button);
			this->groupBox1->Controls->Add(this->Asignar_art_button);
			this->groupBox1->Controls->Add(this->Add_cons_guardia);
			this->groupBox1->Controls->Add(this->Agregar_inv_button);
			this->groupBox1->Location = System::Drawing::Point(39, 36);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(819, 506);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			// 
			// Distrito_button
			// 
			this->Distrito_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Distrito_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Distrito_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Distrito_button->Location = System::Drawing::Point(49, 344);
			this->Distrito_button->Margin = System::Windows::Forms::Padding(4);
			this->Distrito_button->Name = L"Distrito_button";
			this->Distrito_button->Size = System::Drawing::Size(229, 71);
			this->Distrito_button->TabIndex = 13;
			this->Distrito_button->Text = L"Distrito";
			this->Distrito_button->UseVisualStyleBackColor = false;
			this->Distrito_button->Click += gcnew System::EventHandler(this, &PRINC::Distrito_button_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(286, 345);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(229, 71);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Puesto";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PRINC::button1_Click);
			// 
			// Cliente_button
			// 
			this->Cliente_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Cliente_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cliente_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Cliente_button->Location = System::Drawing::Point(524, 265);
			this->Cliente_button->Margin = System::Windows::Forms::Padding(4);
			this->Cliente_button->Name = L"Cliente_button";
			this->Cliente_button->Size = System::Drawing::Size(229, 71);
			this->Cliente_button->TabIndex = 11;
			this->Cliente_button->Text = L"Clientes";
			this->Cliente_button->UseVisualStyleBackColor = false;
			this->Cliente_button->Click += gcnew System::EventHandler(this, &PRINC::Cliente_button_Click);
			// 
			// Add_cons_guardia
			// 
			this->Add_cons_guardia->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Add_cons_guardia->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_cons_guardia->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Add_cons_guardia->Location = System::Drawing::Point(287, 265);
			this->Add_cons_guardia->Margin = System::Windows::Forms::Padding(4);
			this->Add_cons_guardia->Name = L"Add_cons_guardia";
			this->Add_cons_guardia->Size = System::Drawing::Size(229, 71);
			this->Add_cons_guardia->TabIndex = 10;
			this->Add_cons_guardia->Text = L"Empleados";
			this->Add_cons_guardia->UseVisualStyleBackColor = false;
			this->Add_cons_guardia->Click += gcnew System::EventHandler(this, &PRINC::Add_cons_guardia_Click);
			// 
			// PRINC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(901, 581);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PRINC";
			this->Text = L"PRINC";
			this->Load += gcnew System::EventHandler(this, &PRINC::PRINC_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Agregar_inv_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Add_arti^ f = gcnew Add_arti();
	this->Visible = false;
	f->ShowDialog();
	this->Visible = true;
}
private: System::Void Asignar_art_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Crear_guardia^ f = gcnew Crear_guardia();
	f->ShowDialog();
	this->Visible = true;
}
private: System::Void Asignar_guardias_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Asignar_guardia^ f = gcnew Asignar_guardia();
	f->Show();
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PRINC_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Add_cons_guardia_Click(System::Object^ sender, System::EventArgs^ e) {
	ING_GUARDIAS^ f = gcnew ING_GUARDIAS();
	this->Visible = false;
	f->ShowDialog();
	this->Visible = true;

}
private: System::Void Inv_almacenes_Click(System::Object^ sender, System::EventArgs^ e) {
	Consulta__Inv^ f = gcnew Consulta__Inv();
	f->Show();
}

private: System::Void Cliente_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	cliente^ f = gcnew cliente();
	f->ShowDialog();
	this->Visible = true;
}
private: System::Void Crear_guardiabutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Crear_guardia^ f = gcnew Crear_guardia();
	f->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Puesto^ f = gcnew Puesto();
	f->ShowDialog();
	this->Visible = true;
}
private: System::Void Distrito_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
	Distrito^ f = gcnew Distrito();
	f->ShowDialog(); Visible = true;
}
};
}
