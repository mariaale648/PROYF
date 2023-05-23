#pragma once
#include "ING_GUARDIAS.h"
#include "Consulta__Inv.h"
#include "Add_arti.h"
#include"Asignar_art.h"
#include "Asignar_guardia.h"
#include "cliente.h"

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
	private: System::Windows::Forms::Button^ Asignar_guardias_button;
	protected:





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ Add_cons_guardia;
	private: System::Windows::Forms::Button^ Inv_almacenes;
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
			this->Asignar_guardias_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Inv_almacenes = (gcnew System::Windows::Forms::Button());
			this->Add_cons_guardia = (gcnew System::Windows::Forms::Button());
			this->Cliente_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Distrito_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(182, 87);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(326, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Agregar_inv_button
			// 
			this->Agregar_inv_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Agregar_inv_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar_inv_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Agregar_inv_button->Location = System::Drawing::Point(37, 170);
			this->Agregar_inv_button->Name = L"Agregar_inv_button";
			this->Agregar_inv_button->Size = System::Drawing::Size(172, 58);
			this->Agregar_inv_button->TabIndex = 5;
			this->Agregar_inv_button->Text = L"Agregar artículos a inventario";
			this->Agregar_inv_button->UseVisualStyleBackColor = false;
			this->Agregar_inv_button->Click += gcnew System::EventHandler(this, &PRINC::Agregar_inv_button_Click);
			// 
			// Asignar_art_button
			// 
			this->Asignar_art_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Asignar_art_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Asignar_art_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Asignar_art_button->Location = System::Drawing::Point(393, 234);
			this->Asignar_art_button->Name = L"Asignar_art_button";
			this->Asignar_art_button->Size = System::Drawing::Size(172, 58);
			this->Asignar_art_button->TabIndex = 6;
			this->Asignar_art_button->Text = L"Asignación de artículos a puesto";
			this->Asignar_art_button->UseVisualStyleBackColor = false;
			this->Asignar_art_button->Click += gcnew System::EventHandler(this, &PRINC::Asignar_art_button_Click);
			// 
			// Asignar_guardias_button
			// 
			this->Asignar_guardias_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Asignar_guardias_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Asignar_guardias_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Asignar_guardias_button->Location = System::Drawing::Point(37, 298);
			this->Asignar_guardias_button->Name = L"Asignar_guardias_button";
			this->Asignar_guardias_button->Size = System::Drawing::Size(172, 58);
			this->Asignar_guardias_button->TabIndex = 7;
			this->Asignar_guardias_button->Text = L"Asignar guardias a puestos";
			this->Asignar_guardias_button->UseVisualStyleBackColor = false;
			this->Asignar_guardias_button->Click += gcnew System::EventHandler(this, &PRINC::Asignar_guardias_button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Distrito_button);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->Cliente_button);
			this->groupBox1->Controls->Add(this->Asignar_guardias_button);
			this->groupBox1->Controls->Add(this->Inv_almacenes);
			this->groupBox1->Controls->Add(this->Asignar_art_button);
			this->groupBox1->Controls->Add(this->Add_cons_guardia);
			this->groupBox1->Controls->Add(this->Agregar_inv_button);
			this->groupBox1->Location = System::Drawing::Point(29, 29);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(614, 411);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			// 
			// Inv_almacenes
			// 
			this->Inv_almacenes->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Inv_almacenes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Inv_almacenes->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Inv_almacenes->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Inv_almacenes->Location = System::Drawing::Point(215, 234);
			this->Inv_almacenes->Name = L"Inv_almacenes";
			this->Inv_almacenes->Size = System::Drawing::Size(172, 58);
			this->Inv_almacenes->TabIndex = 10;
			this->Inv_almacenes->Text = L"Consulta de Inventario en Almacenes";
			this->Inv_almacenes->UseVisualStyleBackColor = false;
			this->Inv_almacenes->Click += gcnew System::EventHandler(this, &PRINC::Inv_almacenes_Click);
			// 
			// Add_cons_guardia
			// 
			this->Add_cons_guardia->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Add_cons_guardia->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_cons_guardia->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Add_cons_guardia->Location = System::Drawing::Point(215, 170);
			this->Add_cons_guardia->Name = L"Add_cons_guardia";
			this->Add_cons_guardia->Size = System::Drawing::Size(172, 58);
			this->Add_cons_guardia->TabIndex = 10;
			this->Add_cons_guardia->Text = L"Agregar/consultar guardias";
			this->Add_cons_guardia->UseVisualStyleBackColor = false;
			this->Add_cons_guardia->Click += gcnew System::EventHandler(this, &PRINC::Add_cons_guardia_Click);
			// 
			// Cliente_button
			// 
			this->Cliente_button->Location = System::Drawing::Point(393, 170);
			this->Cliente_button->Name = L"Cliente_button";
			this->Cliente_button->Size = System::Drawing::Size(172, 58);
			this->Cliente_button->TabIndex = 11;
			this->Cliente_button->Text = L"Agregar cliente";
			this->Cliente_button->UseVisualStyleBackColor = true;
			this->Cliente_button->Click += gcnew System::EventHandler(this, &PRINC::Cliente_button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(393, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 58);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Crear puesto";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Distrito_button
			// 
			this->Distrito_button->Location = System::Drawing::Point(37, 234);
			this->Distrito_button->Name = L"Distrito_button";
			this->Distrito_button->Size = System::Drawing::Size(172, 58);
			this->Distrito_button->TabIndex = 13;
			this->Distrito_button->Text = L"Agregar distrito";
			this->Distrito_button->UseVisualStyleBackColor = true;
			// 
			// PRINC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(676, 472);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
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
	f->Show();
}
private: System::Void Asignar_art_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Asignar_art^ f = gcnew Asignar_art();
	f->Show();
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
	f->Show();
}
private: System::Void Inv_almacenes_Click(System::Object^ sender, System::EventArgs^ e) {
	Consulta__Inv^ f = gcnew Consulta__Inv();
	f->Show();
}

private: System::Void Cliente_button_Click(System::Object^ sender, System::EventArgs^ e) {
	cliente^ f = gcnew cliente();
	f->Show();
}
};
}
