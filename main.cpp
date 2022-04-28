#include "funcoesOrdenacao.h"

int main() {

    vector<int> v = {10, 40, 1, 5, 0, 82};
    ordernarSelecao(v);
    vector<int> vetorOrdenado = ordernarSelecao(v);

    for (int i = 0; i < vetorOrdenado.size(); i++) {
        std::cout << " - " << vetorOrdenado[i] ;
    }

    system("pause");
    return 0;
}
