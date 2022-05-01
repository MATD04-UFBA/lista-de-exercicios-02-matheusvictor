#include "funcoesOrdenacao.h"
#include "utils.h"

#define TAMANHO_MAXIMO 10

int main() {

    vector<int> vetor = gerarVetorDesordenado(TAMANHO_MAXIMO);

    cout << "=======================================" << endl;
    cout << "|          NO VETOR DESORDENADO       |" << endl;
    cout << "=======================================" << endl;
    
    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    // ordernarSelecao(vetor);
    // odernarBubble(vetor);
    ordernarInsercao(vetor);

    cout << "=======================================" << endl;
    cout << "|            NO VETOR ORDENADO        |" << endl;
    cout << "=======================================" << endl;

    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    system("pause");
    return 0;
}
