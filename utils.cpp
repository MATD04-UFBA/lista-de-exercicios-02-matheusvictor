#include "utils.h"


int gerarChaveAleatoria(int maximo){    
    unsigned int chaveBusca = (rand() % maximo);
    return chaveBusca;    
}

vector<int> gerarVetorDesordenado(int tamanhoVetor){
    vector<int> vetorDesordenado;    

    for (unsigned int i=0; i < tamanhoVetor; i++) {        
        vetorDesordenado.push_back(rand() % tamanhoVetor); // números randômicos de 0 a 100
    }
    
    return vetorDesordenado;
}
