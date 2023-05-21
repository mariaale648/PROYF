#pragma once

namespace PROYF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// NOMBRES_TXT
			// 
			this->NOMBRES_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NOMBRES_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->NOMBRES_TXT->Location = System::Drawing::Point(195, 104);
			this->NOMBRES_TXT->Margin = System::Windows::Forms::Padding(4);
			this->NOMBRES_TXT->Name = L"NOMBRES_TXT";
			this->NOMBRES_TXT->Size = System::Drawing::Size(191, 25);
			this->NOMBRES_TXT->TabIndex = 0;
			// 
			// APELLIDOS_TXT
			// 
			this->APELLIDOS_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APELLIDOS_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->APELLIDOS_TXT->Location = System::Drawing::Point(195, 140);
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
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(57, 109);
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
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(57, 144);
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
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(57, 177);
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
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(57, 212);
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
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(57, 245);
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
			this->EDAD_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->EDAD_TXT->Location = System::Drawing::Point(195, 175);
			this->EDAD_TXT->Margin = System::Windows::Forms::Padding(4);
			this->EDAD_TXT->Name = L"EDAD_TXT";
			this->EDAD_TXT->Size = System::Drawing::Size(191, 25);
			this->EDAD_TXT->TabIndex = 7;
			// 
			// ECIVL_TXT
			// 
			this->ECIVL_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ECIVL_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->ECIVL_TXT->Location = System::Drawing::Point(195, 207);
			this->ECIVL_TXT->Margin = System::Windows::Forms::Padding(4);
			this->ECIVL_TXT->Name = L"ECIVL_TXT";
			this->ECIVL_TXT->Size = System::Drawing::Size(191, 25);
			this->ECIVL_TXT->TabIndex = 8;
			// 
			// DPI_TXT
			// 
			this->DPI_TXT->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DPI_TXT->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->DPI_TXT->Location = System::Drawing::Point(195, 241);
			this->DPI_TXT->Margin = System::Windows::Forms::Padding(4);
			this->DPI_TXT->Name = L"DPI_TXT";
			this->DPI_TXT->Size = System::Drawing::Size(191, 25);
			this->DPI_TXT->TabIndex = 9;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(500, 104);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(557, 198);
			this->listView1->TabIndex = 10;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox1->Location = System::Drawing::Point(32, 55);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(402, 274);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ING_GUARDIAS::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->groupBox2->Location = System::Drawing::Point(470, 55);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(614, 274);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Informacion Guardias";
			// 
			// ING_GUARDIAS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(1120, 394);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->DPI_TXT);
			this->Controls->Add(this->ECIVL_TXT);
			this->Controls->Add(this->EDAD_TXT);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->APELLIDOS_TXT);
			this->Controls->Add(this->NOMBRES_TXT);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ING_GUARDIAS";
			this->Text = L"ING_GUARDIAS";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
