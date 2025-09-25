#include "busca_binaria.h"

#include <stdbool.h>

int primeira_defeituosa = 3;

bool isBadVersion(int version){
    return version >= primeira_defeituosa;
}

int busca_binaria(int n){
    int inicio = 1, fim = n, meio;
    while(inicio < fim){
        meio = inicio + (fim - inicio)/2;
        if(isBadVersion(meio))
            fim = meio;
        else
            inicio = meio + 1;
    }
    return inicio;
}

