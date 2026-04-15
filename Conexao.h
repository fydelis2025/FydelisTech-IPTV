#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Data::Common;
using namespace System::Data::SQLite;

namespace FydelisClass {
public ref class Conexao
    {
    public: Conexao(void);

    public:
        static SQLiteConnection^ CriarConexao() {
            SQLiteConnection^ conn = gcnew SQLiteConnection("Data Source=fydelistech.db;Version=3;");
            conn->Open();
            return conn;
        }

    public:
        static IDbDataParameter^ CreateParameter(SQLiteCommand^ Comando, String^ Nome, DbType Tipo, Object^ Valor) {
            DbParameter^ P = Comando->CreateParameter();
            P->DbType = Tipo;
            P->ParameterName = Nome;
            P->Value = Valor;

            return P;

        }
    };
}

