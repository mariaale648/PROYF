#pragma once
#include "CONEXION.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace Data;
using namespace Data::SqlClient;

ref class Conexion
{
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();
        //st->DataSource = "localhost\\SQLEXPRESS";
        st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS";
        st->InitialCatalog = "proteccionTotal";
        st->IntegratedSecurity = true;
        cn = gcnew SqlConnection(Convert::ToString(st));
    }

public:
    void Insert_Guar( String^ nombres, String^ apellidos, int estado_civil, int dpi, String^ direccion, int edad, int id_puesto) {
        Conectar();
        String^ sentencia = "Insert into posicion values(@nombres, @apellidos, @estado_civil, @dpi, @direccion, @edad, @id_puesto)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@nombres", nombres);
        ejecutar->Parameters->AddWithValue("@apellidos", apellidos);
        ejecutar->Parameters->AddWithValue("@estado_civil", estado_civil);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@direccion", direccion);
        ejecutar->Parameters->AddWithValue("@edad", edad);
        ejecutar->Parameters->AddWithValue("@id_puesto", id_puesto);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }


};