#include "Arquivos.hpp"

void Selection::ordenaSelection(vector<long long int> &v, long long int tamanho){
	int menorIndice, aux;

	for (int i = 0; i < tamanho; ++i){
		
		menorIndice = i;

		for (int j = menorIndice; j < tamanho; ++j){
			if(v[j] < v[menorIndice]){
				menorIndice = j;
			}
		}

		aux = v[i];
		v[i] = v[menorIndice];
		v[menorIndice] = aux;
	}
}