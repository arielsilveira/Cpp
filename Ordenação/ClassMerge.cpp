#include "Arquivos.hpp"

void Merge::ordenaMergeSort(vector<long long int> &v, long long int inicio, long long int fim){
	long long int meio;

	if(inicio >= fim){
		return;
	}

	meio = (inicio + fim) /2;

	this -> ordenaMergeSort(v, inicio, meio);
	this -> ordenaMergeSort(v, meio+1, fim);
	this -> ordenaMerge(v, inicio, meio, fim);
}

void Merge::ordenaMerge(vector<long long int> &v, long long inicio, long long meio, long long fim ){
long long int i = inicio, m = meio+1, aux = 0;
	vector<long long> auxiliar((fim-inicio)+1, 0);

	//Volta comparando e ordenando
	while(i <= meio && m <= fim){
		if(v[i] < v[m]){
			auxiliar[aux] = v[i];
			i++;
		}else{
			auxiliar[aux] = v[m];
			m++;
		}
		aux++;
	}

	//Verifica se existe elementos em um lado para ordenar
	while(i <= meio){
		auxiliar[aux] = v[i];
		aux++;
		i++;
	}

	//Verifica se possui elementos do outro lado para ordenar
	while(m <= fim){
		auxiliar[aux] = v[m];
		aux++;
		m++;
	}

	//Acredito que vai
	aux=0;
	for (int i = inicio; i <= fim; i++){
		v[i] = auxiliar[aux++];
	}

}