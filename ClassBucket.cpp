#include "Arquivos.hpp"

void Bucket::ordenaBucket(vector<long long int> &v, long long int tamanho){
	long long int minValue = v[0];
	long long int maxValue = v[0];
	double numBaldes = sqrt(tamanho);

	for (long long int i = 1; i < tamanho; i++){
		if (v[i] > maxValue){
			maxValue = v[i];
		}

		if (v[i] < minValue){
			minValue = v[i];
		}
	}

	long long int pos;
	vector<vector<long long int> > bucket(numBaldes+5);
	double espacoBalde = (maxValue)/numBaldes;

	for (long long int i = 0; i < tamanho; ++i){
		pos = floor(v[i]/espacoBalde);
		bucket[pos].push_back(v[i]);
	}

	long long int t = 0;

	for (long long int i = 0; i <= numBaldes; ++i){
		vector<long long int> aux(bucket[i].size());

		aux = bucket[i];

		mergeSort.ordenaMergeSort(aux, 0, aux.size()-1);


		int tam = aux.size();
		for (int k = 0; k < tam; ++k, t++){
			v[t] = aux[k];
		}

	}
}