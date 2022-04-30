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

vector<int> odernarBubble(vector<int> v) {

    int maiorElemento, aux; 

    for (int ultimaPosicaoVetor = (v.size() - 1); ultimaPosicaoVetor > 0; ultimaPosicaoVetor--) {    // começa da última posição do vetor e a cada passada no laço, 
                                                                                                    // vai uma "passo" em direção a primeira posição do vetor
        for (int i = 0; i < ultimaPosicaoVetor; i++) {                    
            if (v[i] > v[i+1]) {
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
            }
        }
    }

    return v;
}
