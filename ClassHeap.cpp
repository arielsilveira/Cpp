#include "Arquivos.hpp"

void Heap::ordenaHeap(vector<long long int> &v, long long int tamanho){

	long long int i = tamanho/2, pai, filho, t;
	while(true){

		if(i > 0){
			i--;
			t = v[i];
		} else {
			tamanho--;
			if(tamanho == 0) return;
			t = v[tamanho];
			v[tamanho] = v[0];
		}
		pai = i;
		filho = i*2 + 1;
		while(filho < tamanho){
			if((filho + 1 < tamanho) && (v[filho + 1] > v[filho])){
				filho++;
			}
			if(v[filho] > t){
				v[pai] = v[filho];
				pai = filho;
				filho = pai*2 +1;
			} else {
				break;
			}
		}
		v[pai] = t;
	}
}