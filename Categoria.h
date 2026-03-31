#include <iostream>
#include<io.h>
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace std;

namespace FydelisClass {
   public ref class Categoria
    {
    public: Categoria(void);

    public:
        int Codigo;
        String^ Descricao;

        void setCodigo(int _Codigo);
        int getCodigo();

        void setDescricao(String^ _Descricao);
        String^ getDescricao();
    };

}