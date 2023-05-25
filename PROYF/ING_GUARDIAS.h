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
	/// Resumen de ING_GUARDIAS
	/// </summary>
	public ref class ING_GUARDIAS : public System::Windows::Forms::Form
	{
	public:
		ING_GUARDIAS(void)
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
		~ING_GUARDIAS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ NOMBRES_TXT;
	private: System::Windows::Forms::TextBox^ APELLIDOS_TXT;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ EDAD_TXT;
	private: System::Windows::Forms::TextBox^ ECIVL_TXT;
	private: System::Windows::Forms::TextBox^ DPI_TXT;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ listView_Guardias;

	private: System::Windows::Forms::Button^ Guardar_button;
	private: System::Windows::Forms::TextBox^ Direc_TXT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ idPuesto_TXT;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ CONSULTAR_G;










	private: System::Windows::Forms::Button^ regresar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_id;
	private: System::Windows::Forms::Button^ button_actualizar;
	private: System::Windows::Forms::ListView^ listView_Guardia;

	private: System::Windows::Forms::ColumnHeader^ id_posicion;
	private: System::Windows::Forms::ColumnHeader^ nombres;
	private: System::Windows::Forms::ColumnHeader^ apellidos;
	private: System::Windows::Forms::ColumnHeader^ estado_civil;
	private: System::Windows::Forms::ColumnHeader^ dpi;
	private: System::Windows::Forms::ColumnHeader^ direccion;
	private: System::Windows::Forms::ColumnHeader^ edad;
	private: System::Windows::Forms::ColumnHeader^ id_puesto;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NOMBRES_TXT = (gcnew System::Windows::Forms::TextBox());
			this->APELLIDOS_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->EDAD_TXT = (gcnew System::Windows::Forms::TextBox());
			this->ECIVL_TXT = (gcnew System::Windows::Forms::TextBox());
			this->DPI_TXT = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_actualizar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_id = (gcnew System::Windows::Forms::TextBox());
			this->idPuesto_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Guardar_button = (gcnew System::Windows::Forms::Button());
			this->Direc_TXT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listView_Guardias = (gcnew System::Windows::Forms::GroupBox());
			this->listView_Guardia = (gcnew System::Windows::Forms::ListView());
			this->id_posicion = (gcnew System::Windows::Forms::ColumnHeader());
			this->nombres = (gcnew System::Windows::Forms::ColumnHeader());
			this->apellidos = (gcnew System::Windows::Forms::ColumnHeader());
			this->estado_civil = (gcnew System::Windows::Forms::ColumnHeader());
			this->dpi = (gcnew System::Windows::Forms::ColumnHeader());
			this->direccion = (gcnew System::Windows::Forms::ColumnHeader());
			this->edad = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_puesto = (gcnew System::Windows::Forms::ColumnHeader());
			this->CONSULTAR_G = (gcnew System::Windows::Forms::Button());
			this->regresar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->listView_Guardias->SuspendLayout();
			this->SuspendLayout();
			// 
			// NOMBRES_TXT
			// 
			this->NOMBRES_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NOMBRES_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->NOMBRES_TXT->Location = System::Drawing::Point(165, 77);
			this->NOMBRES_TXT->Margin = System::Windows::Forms::Padding(4);
			this->NOMBRES_TXT->Name = L"NOMBRES_TXT";
			this->NOMBRES_TXT->Size = System::Drawing::Size(191, 25);
			this->NOMBRES_TXT->TabIndex = 0;
			this->NOMBRES_TXT->TextChanged += gcnew System::EventHandler(this, &ING_GUARDIAS::NOMBRES_TXT_TextChanged);
			// 
			// APELLIDOS_TXT
			// 
			this->APELLIDOS_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APELLIDOS_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->APELLIDOS_TXT->Location = System::Drawing::Point(165, 111);
			this->APELLIDOS_TXT->Margin = System::Windows::Forms::Padding(4);
			this->APELLIDOS_TXT->Name = L"APELLIDOS_TXT";
			this->APELLIDOS_TXT->Size = System::Drawing::Size(191, 25);
			this->APELLIDOS_TXT->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(27, 82);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"NOMBRES";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(27, 111);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"APELLIDOS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(27, 254);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"EDAD";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(27, 151);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ESTADO CIVIL";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(27, 188);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"DPI";
			this->label5->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::label5_Click);
			// 
			// EDAD_TXT
			// 
			this->EDAD_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EDAD_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->EDAD_TXT->Location = System::Drawing::Point(165, 254);
			this->EDAD_TXT->Margin = System::Windows::Forms::Padding(4);
			this->EDAD_TXT->Name = L"EDAD_TXT";
			this->EDAD_TXT->Size = System::Drawing::Size(191, 25);
			this->EDAD_TXT->TabIndex = 7;
			// 
			// ECIVL_TXT
			// 
			this->ECIVL_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ECIVL_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ECIVL_TXT->Location = System::Drawing::Point(165, 151);
			this->ECIVL_TXT->Margin = System::Windows::Forms::Padding(4);
			this->ECIVL_TXT->Name = L"ECIVL_TXT";
			this->ECIVL_TXT->Size = System::Drawing::Size(191, 25);
			this->ECIVL_TXT->TabIndex = 8;
			// 
			// DPI_TXT
			// 
			this->DPI_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DPI_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->DPI_TXT->Location = System::Drawing::Point(165, 185);
			this->DPI_TXT->Margin = System::Windows::Forms::Padding(4);
			this->DPI_TXT->Name = L"DPI_TXT";
			this->DPI_TXT->Size = System::Drawing::Size(191, 25);
			this->DPI_TXT->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_actualizar);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox_id);
			this->groupBox1->Controls->Add(this->idPuesto_TXT);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->Guardar_button);
			this->groupBox1->Controls->Add(this->Direc_TXT);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->ECIVL_TXT);
			this->groupBox1->Controls->Add(this->DPI_TXT);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->EDAD_TXT);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->NOMBRES_TXT);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->APELLIDOS_TXT);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(32, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(403, 409);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ING_GUARDIAS::groupBox1_Enter);
			// 
			// button_actualizar
			// 
			this->button_actualizar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_actualizar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_actualizar->Location = System::Drawing::Point(46, 337);
			this->button_actualizar->Margin = System::Windows::Forms::Padding(4);
			this->button_actualizar->Name = L"button_actualizar";
			this->button_actualizar->Size = System::Drawing::Size(124, 35);
			this->button_actualizar->TabIndex = 16;
			this->button_actualizar->Text = L"Actualizar";
			this->button_actualizar->UseVisualStyleBackColor = true;
			this->button_actualizar->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::button_actualizar_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(27, 46);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"ID";
			this->label8->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::label8_Click);
			// 
			// textBox_id
			// 
			this->textBox_id->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_id->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox_id->Location = System::Drawing::Point(165, 41);
			this->textBox_id->Margin = System::Windows::Forms::Padding(4);
			this->textBox_id->Name = L"textBox_id";
			this->textBox_id->Size = System::Drawing::Size(191, 25);
			this->textBox_id->TabIndex = 14;
			this->textBox_id->TextChanged += gcnew System::EventHandler(this, &ING_GUARDIAS::textBox1_TextChanged);
			// 
			// idPuesto_TXT
			// 
			this->idPuesto_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->idPuesto_TXT->Location = System::Drawing::Point(165, 294);
			this->idPuesto_TXT->Margin = System::Windows::Forms::Padding(4);
			this->idPuesto_TXT->Name = L"idPuesto_TXT";
			this->idPuesto_TXT->Size = System::Drawing::Size(191, 25);
			this->idPuesto_TXT->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(27, 294);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"id_puesto";
			// 
			// Guardar_button
			// 
			this->Guardar_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Guardar_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Guardar_button->Location = System::Drawing::Point(198, 337);
			this->Guardar_button->Margin = System::Windows::Forms::Padding(4);
			this->Guardar_button->Name = L"Guardar_button";
			this->Guardar_button->Size = System::Drawing::Size(124, 35);
			this->Guardar_button->TabIndex = 0;
			this->Guardar_button->Text = L"Guardar";
			this->Guardar_button->UseVisualStyleBackColor = true;
			this->Guardar_button->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::Guardar_button_Click);
			// 
			// Direc_TXT
			// 
			this->Direc_TXT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Direc_TXT->Location = System::Drawing::Point(165, 220);
			this->Direc_TXT->Margin = System::Windows::Forms::Padding(4);
			this->Direc_TXT->Name = L"Direc_TXT";
			this->Direc_TXT->Size = System::Drawing::Size(191, 25);
			this->Direc_TXT->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(27, 220);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Dirección";
			// 
			// listView_Guardias
			// 
			this->listView_Guardias->Controls->Add(this->listView_Guardia);
			this->listView_Guardias->Controls->Add(this->CONSULTAR_G);
			this->listView_Guardias->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView_Guardias->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->listView_Guardias->Location = System::Drawing::Point(469, 14);
			this->listView_Guardias->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView_Guardias->Name = L"listView_Guardias";
			this->listView_Guardias->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView_Guardias->Size = System::Drawing::Size(817, 355);
			this->listView_Guardias->TabIndex = 13;
			this->listView_Guardias->TabStop = false;
			this->listView_Guardias->Text = L"Informacion Guardias";
			// 
			// listView_Guardia
			// 
			this->listView_Guardia->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->id_posicion,
					this->nombres, this->apellidos, this->estado_civil, this->dpi, this->direccion, this->edad, this->id_puesto
			});
			this->listView_Guardia->HideSelection = false;
			this->listView_Guardia->Location = System::Drawing::Point(7, 82);
			this->listView_Guardia->Margin = System::Windows::Forms::Padding(4);
			this->listView_Guardia->Name = L"listView_Guardia";
			this->listView_Guardia->Size = System::Drawing::Size(803, 249);
			this->listView_Guardia->TabIndex = 12;
			this->listView_Guardia->UseCompatibleStateImageBehavior = false;
			this->listView_Guardia->View = System::Windows::Forms::View::Details;
			this->listView_Guardia->SelectedIndexChanged += gcnew System::EventHandler(this, &ING_GUARDIAS::listView1_SelectedIndexChanged);
			// 
			// id_posicion
			// 
			this->id_posicion->Text = L"ID";
			this->id_posicion->Width = 38;
			// 
			// nombres
			// 
			this->nombres->Text = L"Nombres";
			this->nombres->Width = 84;
			// 
			// apellidos
			// 
			this->apellidos->Text = L"Apellidos";
			this->apellidos->Width = 94;
			// 
			// estado_civil
			// 
			this->estado_civil->Text = L"Estado civil";
			this->estado_civil->Width = 110;
			// 
			// dpi
			// 
			this->dpi->Text = L"DPI";
			this->dpi->Width = 83;
			// 
			// direccion
			// 
			this->direccion->Text = L"Direccion";
			this->direccion->Width = 134;
			// 
			// edad
			// 
			this->edad->Text = L"Edad";
			this->edad->Width = 67;
			// 
			// id_puesto
			// 
			this->id_puesto->Text = L"Puesto";
			this->id_puesto->Width = 119;
			// 
			// CONSULTAR_G
			// 
			this->CONSULTAR_G->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CONSULTAR_G->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->CONSULTAR_G->Location = System::Drawing::Point(39, 31);
			this->CONSULTAR_G->Margin = System::Windows::Forms::Padding(4);
			this->CONSULTAR_G->Name = L"CONSULTAR_G";
			this->CONSULTAR_G->Size = System::Drawing::Size(124, 35);
			this->CONSULTAR_G->TabIndex = 11;
			this->CONSULTAR_G->Text = L"CONSULTAR";
			this->CONSULTAR_G->UseVisualStyleBackColor = true;
			this->CONSULTAR_G->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::CONSULTAR_G_Click);
			// 
			// regresar
			// 
			this->regresar->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regresar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->regresar->Location = System::Drawing::Point(1097, 388);
			this->regresar->Name = L"regresar";
			this->regresar->Size = System::Drawing::Size(124, 35);
			this->regresar->TabIndex = 14;
			this->regresar->Text = L"Regresar";
			this->regresar->UseVisualStyleBackColor = true;
			this->regresar->Click += gcnew System::EventHandler(this, &ING_GUARDIAS::regresar_Click);
			// 
			// ING_GUARDIAS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1298, 443);
			this->Controls->Add(this->regresar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listView_Guardias);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ING_GUARDIAS";
			this->Text = L"ING_GUARDIAS";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->listView_Guardias->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Guardar_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insert_Guar(
			NOMBRES_TXT->Text,
			APELLIDOS_TXT->Text,
			Convert::ToInt64(ECIVL_TXT->Text),
			Convert::ToInt64(DPI_TXT->Text),
			Direc_TXT->Text,
			Convert::ToInt64(EDAD_TXT->Text),
			Convert::ToInt64(idPuesto_TXT->Text)
		);
		MessageBox::Show("Registro guardado exitosamente");
		NOMBRES_TXT->Text = "";
		APELLIDOS_TXT->Text = "";
		ECIVL_TXT->Text = "";
		DPI_TXT->Text = "";
		Direc_TXT->Text = "";
		EDAD_TXT->Text = "";
		idPuesto_TXT->Text = "";


	}
	private: System::Void CONSULTAR_G_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ nombres; String^ apellidos; String^ estado_civil; String^ dpi; String^ direccion; String^ edad; String^ id_puesto; String^ id_posicion;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ listView_Guardias = gcnew ListView();
		String^ sentencia = "select * from posicion";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		// this->listView_Guardias->Items->Clear();
		// this->listView_Guardias->Columns->Clear();
		while (reader->Read()) {
			id_posicion = (reader["id_posicion"]->ToString());
			nombres = (reader[	"nombres"]->ToString());
			apellidos = (reader["apellidos"]->ToString());
			estado_civil = (reader["estado_civil"]->ToString());
			dpi = (reader["dpi"]->ToString());
			direccion = (reader["direccion"]->ToString());
			edad = (reader["edad"]->ToString());
			id_puesto = (reader["id_puesto"]->ToString());
			String^ srtNew1 = gcnew String(id_posicion);
			String^ srtNew2 = gcnew String(nombres);
			String^ srtNew3 = gcnew String(apellidos);
			String^ srtNew4 = gcnew String(estado_civil);
			String^ srtNew5 = gcnew String(dpi);
			String^ srtNew6 = gcnew String(direccion);
			String^ srtNew7 = gcnew String(edad);
			String^ srtNew8 = gcnew String(id_puesto);
		
			ListViewItem^ listView2 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView2->SubItems->Add(srtNew2);
			listView2->SubItems->Add(srtNew3);
			listView2->SubItems->Add(srtNew4);
			listView2->SubItems->Add(srtNew5);
			listView2->SubItems->Add(srtNew6);
			listView2->SubItems->Add(srtNew7);
			listView2->SubItems->Add(srtNew8);
			this->listView_Guardia->Items->Add(listView2);
		}
		cn->Close();
	}
	private: System::Void NOMBRES_TXT_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listView_Guardias_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void regresar_Click(System::Object^ sender, System::EventArgs^ e) {
	ING_GUARDIAS::Close();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_actualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	if (textBox_id->Text == " ") {
		MessageBox::Show("Debe colocar el ID");
	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ id_posicion; String^ nombres; String^ apellidos; String^ estado_civil; String^ dpi; String^ direccion; String^ edad; String^ id_puesto;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
		//st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
		//st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
		st->InitialCatalog = "proteccionTotal";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update posicion set nombres=@nombres, apellidos=@apellidos, estado_civil=@estado_civil, dpi=@dpi, direccion=@direccion, edad=@edad, id_puesto=@id_puesto where id_posicion=@id_posicion";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_posicion", textBox_id->Text);
		ejecutar->Parameters->AddWithValue("@nombres", NOMBRES_TXT->Text);
		ejecutar->Parameters->AddWithValue("@apellidos", APELLIDOS_TXT->Text);
		ejecutar->Parameters->AddWithValue("@estado_civil", ECIVL_TXT->Text);
		ejecutar->Parameters->AddWithValue("@dpi", DPI_TXT->Text);
		ejecutar->Parameters->AddWithValue("@direccion", Direc_TXT->Text);
		ejecutar->Parameters->AddWithValue("@edad", EDAD_TXT->Text);
		ejecutar->Parameters->AddWithValue("@id_puesto", idPuesto_TXT->Text);
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();
		MessageBox::Show("Registro actualizado");
		textBox_id->Text = "";
		NOMBRES_TXT->Text = "";
		APELLIDOS_TXT->Text = "";
		ECIVL_TXT->Text = "";
		DPI_TXT->Text = "";
		Direc_TXT->Text = "";
		EDAD_TXT->Text = "";
		idPuesto_TXT->Text = "";

		listView_Guardia->Clear();
	}
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
};

