#include "Arquivos.hpp"

void Insertion::ordenaInsertion(vector<long long int> &v, long long int tamanho){
	long long int aux, j;

	for (int i = 1; i < tamanho; ++i){
		aux = v[i];
		j = i-1;

		while(j >= 0 && v[j] > aux){
			v[j+1] = v[j];
			j--;
		}

		v[j+1] = aux;
	}
}	
