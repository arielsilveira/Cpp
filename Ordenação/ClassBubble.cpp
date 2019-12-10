#include "Arquivos.hpp"

void Bubble::ordenaBubble(vector<long long int> &v, long long int tamanho){
	long long int aux;

	for (int i = tamanho - 1; i > 0 ; i--){
		for (int j = 0; j < i; ++j){
			if(v[j+1] < v[j]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}


/* Método da Paula
void Bubble::ordenaBubble(vector<long long int> &v, long long int tamanho){

	for (int i = 0; i < tamanho; ++i){
		for (int j = i+1; j < tamanho; ++j){
			if(v[i] > v[j]){
				swap(v[i], v[j]);
			}
		}
	}
}
*/