#pragma once

namespace PROYF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ID_art_txt;
	private: System::Windows::Forms::TextBox^ desc_txt;
	private: System::Windows::Forms::TextBox^ Cantidad_txt;
	private: System::Windows::Forms::TextBox^ Proveedor_txt;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ID_art_txt = (gcnew System::Windows::Forms::TextBox());
			this->desc_txt = (gcnew System::Windows::Forms::TextBox());
			this->Cantidad_txt = (gcnew System::Windows::Forms::TextBox());
			this->Proveedor_txt = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Location = System::Drawing::Point(82, 127);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción de artículo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(82, 91);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID artículo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(82, 161);
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
			this->label4->Location = System::Drawing::Point(82, 197);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Proveedor";
			// 
			// ID_art_txt
			// 
			this->ID_art_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_art_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->ID_art_txt->Location = System::Drawing::Point(301, 89);
			this->ID_art_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ID_art_txt->Name = L"ID_art_txt";
			this->ID_art_txt->Size = System::Drawing::Size(132, 25);
			this->ID_art_txt->TabIndex = 4;
			// 
			// desc_txt
			// 
			this->desc_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desc_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->desc_txt->Location = System::Drawing::Point(301, 125);
			this->desc_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->desc_txt->Name = L"desc_txt";
			this->desc_txt->Size = System::Drawing::Size(132, 25);
			this->desc_txt->TabIndex = 5;
			// 
			// Cantidad_txt
			// 
			this->Cantidad_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cantidad_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Cantidad_txt->Location = System::Drawing::Point(301, 158);
			this->Cantidad_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Cantidad_txt->Name = L"Cantidad_txt";
			this->Cantidad_txt->Size = System::Drawing::Size(132, 25);
			this->Cantidad_txt->TabIndex = 6;
			// 
			// Proveedor_txt
			// 
			this->Proveedor_txt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Proveedor_txt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Proveedor_txt->Location = System::Drawing::Point(301, 193);
			this->Proveedor_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->button1->Location = System::Drawing::Point(85, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(28, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(565, 364);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar articulo";
			// 
			// Add_arti
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(624, 423);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Proveedor_txt);
			this->Controls->Add(this->Cantidad_txt);
			this->Controls->Add(this->desc_txt);
			this->Controls->Add(this->ID_art_txt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Add_arti";
			this->Text = L"Add_arti";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
