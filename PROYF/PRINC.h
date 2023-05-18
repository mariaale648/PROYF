#pragma once
#include "ING_GUARDIAS.h"
#include "Consulta__Inv.h"
#include "Add_arti.h"
#include"Asignar_art.h"
#include "Asignar_guardia.h"

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
	private: System::Windows::Forms::Button^ Con_Inv_button;
	private: System::Windows::Forms::Button^ Agregar_inv_button;
	private: System::Windows::Forms::Button^ Asignar_art_button;
	private: System::Windows::Forms::Button^ Asignar_guardias_button;
	protected:




	private: System::Windows::Forms::Button^ Agregar_consultar_button;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PRINC::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Con_Inv_button = (gcnew System::Windows::Forms::Button());
			this->Agregar_inv_button = (gcnew System::Windows::Forms::Button());
			this->Asignar_art_button = (gcnew System::Windows::Forms::Button());
			this->Asignar_guardias_button = (gcnew System::Windows::Forms::Button());
			this->Agregar_consultar_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(242, 107);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(435, 121);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Con_Inv_button
			// 
			this->Con_Inv_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Con_Inv_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Con_Inv_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Con_Inv_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Con_Inv_button->Location = System::Drawing::Point(88, 324);
			this->Con_Inv_button->Margin = System::Windows::Forms::Padding(4);
			this->Con_Inv_button->Name = L"Con_Inv_button";
			this->Con_Inv_button->Size = System::Drawing::Size(229, 71);
			this->Con_Inv_button->TabIndex = 4;
			this->Con_Inv_button->Text = L"Consulta de Inventario en Almacenes";
			this->Con_Inv_button->UseVisualStyleBackColor = false;
			this->Con_Inv_button->Click += gcnew System::EventHandler(this, &PRINC::button1_Click);
			// 
			// Agregar_inv_button
			// 
			this->Agregar_inv_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Agregar_inv_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar_inv_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Agregar_inv_button->Location = System::Drawing::Point(206, 403);
			this->Agregar_inv_button->Margin = System::Windows::Forms::Padding(4);
			this->Agregar_inv_button->Name = L"Agregar_inv_button";
			this->Agregar_inv_button->Size = System::Drawing::Size(229, 71);
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
			this->Asignar_art_button->Location = System::Drawing::Point(325, 324);
			this->Asignar_art_button->Margin = System::Windows::Forms::Padding(4);
			this->Asignar_art_button->Name = L"Asignar_art_button";
			this->Asignar_art_button->Size = System::Drawing::Size(229, 71);
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
			this->Asignar_guardias_button->Location = System::Drawing::Point(562, 324);
			this->Asignar_guardias_button->Margin = System::Windows::Forms::Padding(4);
			this->Asignar_guardias_button->Name = L"Asignar_guardias_button";
			this->Asignar_guardias_button->Size = System::Drawing::Size(229, 71);
			this->Asignar_guardias_button->TabIndex = 7;
			this->Asignar_guardias_button->Text = L"Asignar guardias a puestos";
			this->Asignar_guardias_button->UseVisualStyleBackColor = false;
			this->Asignar_guardias_button->Click += gcnew System::EventHandler(this, &PRINC::Asignar_guardias_button_Click);
			// 
			// Agregar_consultar_button
			// 
			this->Agregar_consultar_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Agregar_consultar_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Agregar_consultar_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Agregar_consultar_button->Location = System::Drawing::Point(443, 403);
			this->Agregar_consultar_button->Margin = System::Windows::Forms::Padding(4);
			this->Agregar_consultar_button->Name = L"Agregar_consultar_button";
			this->Agregar_consultar_button->Size = System::Drawing::Size(229, 71);
			this->Agregar_consultar_button->TabIndex = 8;
			this->Agregar_consultar_button->Text = L"Agregar/consultar guardias";
			this->Agregar_consultar_button->UseVisualStyleBackColor = false;
			this->Agregar_consultar_button->Click += gcnew System::EventHandler(this, &PRINC::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(39, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(818, 506);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			// 
			// PRINC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(902, 581);
			this->Controls->Add(this->Agregar_consultar_button);
			this->Controls->Add(this->Asignar_guardias_button);
			this->Controls->Add(this->Asignar_art_button);
			this->Controls->Add(this->Agregar_inv_button);
			this->Controls->Add(this->Con_Inv_button);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PRINC";
			this->Text = L"PRINC";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		ING_GUARDIAS^ f = gcnew ING_GUARDIAS();
		f->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Consulta__Inv^ f = gcnew Consulta__Inv();
	f->Show();
}
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
};
}
