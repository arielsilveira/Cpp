#include "Arquivos.hpp"

void Counting::ordenaCounting(vector<long long int> &v, long long int tamanho){
	long long int maior = v[0];
	long long int menor = v[0];
	vector<long long int> vetorOrdenado(tamanho);

	for(int i = 0; i < tamanho; ++i){
		if (v[i] > maior){
	        maior = v[i];
	    }else if(v[i] < menor){
	    	menor = v[i];
		}
	}

	vector<long long int> aux((maior-menor+1), 0);
	for (int i = 0; i < tamanho; ++i){
	    aux[v[i]-menor]++;
	}

	for (int i = 1; i < aux.size(); ++i){
	    aux[i] += aux[i-1];
	}

	for (int i = tamanho-1; i >= 0; i--){
	    vetorOrdenado[ aux[v[i] - menor ] - 1 ] = v[i];
	    --aux[v[i]-menor];
	}

	for (int i = 0; i < tamanho; ++i){
	    v[i] = vetorOrdenado[i];
	}

}