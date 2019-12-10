 #ifndef ARQUIVOS_HPP
 #define ARQUIVOS_HPP

#include <bits/stdc++.h>
using namespace std;

//Classe do Algoritmo Bubble
class Bubble {

public:
	void ordenaBubble(vector<long long int> &v, long long int tamanho);
};

//Classe do Algoritmo Selection
class Selection {

public:
	void ordenaSelection(vector<long long int> &v, long long int tamanho);
};

//Classe do Algoritmo Insertion
class Insertion {

public:
	void ordenaInsertion(vector<long long int> &v, long long int tamanho);	
};

//Classe do Algoritmo Merge
class Merge {

public:
	void ordenaMergeSort(vector<long long int> &v, long long int inicio, long long int fim);
	void ordenaMerge(vector<long long int> &v, long long inicio, long long meio, long long fim );

};

//Classe do Algoritmo Heap
class Heap {

public:
	void ordenaHeap(vector<long long int> &v, long long int tamanho);
	
};

//Classe do Algoritmo Quick
class Quick {

public:
	void ordenaQuick(vector<long long int> &v, long long int inicio, long long int fim);
	long long int Lomuto(std::vector<long long int> &vetor, long long int inicio, long long int fim);
	long long int Hoare(vector<long long int> &v, long long int inicio, long long int fim);
};

//Classe do Algoritmo Counting
class Counting {

public:
	void ordenaCounting(vector<long long int> &v, long long int tamanho);
	
};


//Classe do Algoritmo Bucket
class Bucket {
	Merge mergeSort;
public:
	void ordenaBucket(vector<long long int> &v, long long int tamanho);
};

 #endif