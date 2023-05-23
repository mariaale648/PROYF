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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre de empresa";
			// 
			// nombre_empre_TXT
			// 
			this->nombre_empre_TXT->Location = System::Drawing::Point(120, 36);
			this->nombre_empre_TXT->Name = L"nombre_empre_TXT";
			this->nombre_empre_TXT->Size = System::Drawing::Size(195, 20);
			this->nombre_empre_TXT->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"NIT empresa";
			// 
			// NIT_TXT
			// 
			this->NIT_TXT->Location = System::Drawing::Point(120, 68);
			this->NIT_TXT->Name = L"NIT_TXT";
			this->NIT_TXT->Size = System::Drawing::Size(195, 20);
			this->NIT_TXT->TabIndex = 3;
			// 
			// save_cliente_button
			// 
			this->save_cliente_button->Location = System::Drawing::Point(167, 123);
			this->save_cliente_button->Name = L"save_cliente_button";
			this->save_cliente_button->Size = System::Drawing::Size(75, 23);
			this->save_cliente_button->TabIndex = 4;
			this->save_cliente_button->Text = L"Guardar";
			this->save_cliente_button->UseVisualStyleBackColor = true;
			this->save_cliente_button->Click += gcnew System::EventHandler(this, &cliente::save_cliente_button_Click);
			// 
			// cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(343, 261);
			this->Controls->Add(this->save_cliente_button);
			this->Controls->Add(this->NIT_TXT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nombre_empre_TXT);
			this->Controls->Add(this->label1);
			this->Name = L"cliente";
			this->Text = L"cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void save_cliente_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insert_cliente
		(
		nombre_empre_TXT->Text
		);
		MessageBox::Show("Registro guardado exitosamente");
	}
};
}
