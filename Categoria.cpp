#include "Categoria.h"
namespace FydelisClass {
    Categoria::Categoria(void) {

    }

    void Categoria::setCodigo(int _Codigo) {
        Codigo = _Codigo;
    }

    int Categoria::getCodigo() {
        return Codigo;
    }

    void Categoria::setDescricao(String^ _Descricao) {
        Descricao = _Descricao;
    }
    String^ Categoria::getDescricao() {
        return Descricao;
    }
}