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

ref class Conexion {
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();        
        //st->DataSource = "LAPTOP-C78Q6N2B\\SQLEXPRESS20"; // (ANTONY)
        st->DataSource = "DESKTOP-8UHRS07\\SQLEXPRESS"; //(KEVIN)
        //st->DataSource = "VICTUSMARIO\\SQLEXPRESS";  // (MABEL)
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

    void Insert_cliente(String^nombre_empresa, int nit) {
        Conectar();
        String^ sentencia = "Insert into cliente values(@nombre_empresa,@nit)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@nombre_empresa", nombre_empresa);
        ejecutar->Parameters->AddWithValue("@nit", nit);

        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

    void Crear_guardia(int^ id_posicion, int id_articulo) {
        Conectar();
        String^ sentencia = "Insert into guardia values(@id_posicion,@id_articulo)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_posicion", id_posicion);
        ejecutar->Parameters->AddWithValue("@id_articulo", id_articulo);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void crear_distrito(String^ nombre_distritro)
    {
        Conectar();
        String^ sentencia = "Insert into distrito values(@nombre_distrito)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@nombre_distrito", nombre_distritro);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

    void crear_puesto(String^ nombre, String^ direccion, int id_distrito, int id_cliente, int id_tpuesto, String^ lugar_entrega, String^ hora_entrega)
    {
        Conectar();
        String^ sentencia = "Insert into puesto values(@nombre, @direccion, @id_distrito, @id_cliente, @id_tpuesto, @lugar_entrega, @hora_entrega)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@nombre",nombre);
        ejecutar->Parameters->AddWithValue("@direccion", direccion);
        ejecutar->Parameters->AddWithValue("@id_distrito", id_distrito);
        ejecutar->Parameters->AddWithValue("@id_cliente", id_cliente);
        ejecutar->Parameters->AddWithValue("@id_tpuesto", id_tpuesto);
        ejecutar->Parameters->AddWithValue("@lugar_entrega",lugar_entrega);
        ejecutar->Parameters->AddWithValue("@hora_entrega", hora_entrega);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

};