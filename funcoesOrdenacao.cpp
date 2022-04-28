#include "funcoesOrdenacao.h"

using namespace std;

vector<int> ordernarSelecao(vector<int> v) {

    int menorElemento, aux = 0;

    for (int i = 0; i < (v.size() - 1); i++) {
        menorElemento = i;

        for (int j = (i + 1); j < v.size(); j++) {
            if (v[menorElemento] > v[j]) {
                menorElemento = j;
            }
        }

        if (i != menorElemento) {
            aux = v[i];
            v[i] = v[menorElemento];
            v[menorElemento] = aux;
        }
    }
    
    return v;
}
