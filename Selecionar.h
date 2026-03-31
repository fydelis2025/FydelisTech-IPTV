#include "Categoria.h"
#include "Conexao.h"
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Data::Common;
using namespace System::Data::SQLite;

namespace FydelisClass {
    public ref class Selecionar
    {
    public: Selecionar(void);

    public: static List<Categoria^>^ ListarCategoria(String^ Descricao) {
        try
        {
            SQLiteCommand^ cmd = nullptr;

            if (Descricao == String::Empty)
            {
                cmd = Conexao::CriarConexao()->CreateCommand();
                cmd->CommandText = "SELECT DESCRICAO FROM CATEGORIA";
                cmd->Parameters->Add(Conexao::CreateParameter(cmd, "@DESCRICAO", DbType::String, Descricao));
            }
            else
            {
                cmd = Conexao::CriarConexao()->CreateCommand();
                cmd->CommandText = "SELECT DESCRICAO FROM CATEGORIA WHERE DESCRICAO = @DESCRICAO";
                cmd->Parameters->Add(Conexao::CreateParameter(cmd, "@DESCRICAO", DbType::String, Descricao));
            }
            
            SQLiteDataReader^ Leitura = cmd->ExecuteReader(CommandBehavior::CloseConnection);

            List<Categoria^> ^ Lista = gcnew List<Categoria^>();
            Categoria^ categoria = nullptr;

            while (Leitura->Read())
            {
                categoria = gcnew Categoria();

                if (!Leitura->IsDBNull(0)) {
                    categoria->Descricao = Leitura->GetString(0);
                }

                Lista->Add(categoria);
            }

            Leitura->Close();

            return Lista;
        }
        catch (SQLiteException^ ex) {
            throw gcnew SQLiteException(ex->Message);
        }
    }
        
    };
}
