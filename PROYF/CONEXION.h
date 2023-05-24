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
<<<<<<< HEAD
        // st->DataSource = " "; // KEVIN
        // st->DataSource = " "; // ALE
        st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // ANTONY
=======
        //st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20";(ANTONY)
        st->DataSource = "DESKTOP - 8UHRS07\\SQLEXPRESS";//(KEVIN)
        //st->DataSource = "VICTUSMARIO\\SQLEXPRESS";
        //st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20";
>>>>>>> f030852897b7c5854ed0b3be02273f0cfe291fe1
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

    void Insert_Art(String^ nombre_art, String^descripcion, String^ marca, int cantidad,String^fecha_ingreso) {
        Conectar();
        String^ sentencia = "Insert into almacen values(@nombre_art, @descripcion, @marca, @cantidad, @fecha_ingreso)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@nombre_art", nombre_art);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@marca", marca);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@fecha_ingreso", fecha_ingreso);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

    void Insert_cliente(String^ nombre_empresa) {
        Conectar();
        String^ sentencia = "Insert into cliente values(@nombre_empresa)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@nombre_empresa", nombre_empresa);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

};