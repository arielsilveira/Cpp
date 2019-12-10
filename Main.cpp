#include "Arquivos.hpp"
#include <ctime>

void menu();

int start, stop;

int main(int argc, char const *argv[]){
	/*
		-Falta criar a leitura do arquivo para salvar
			no vetor e ordena-lo em seguida.
		-Talvez colocar algum deles em paralelo
	*/

	menu();

	return 0;
}

void menu(){
	int escolha;
	long long int valor, tamanho;
	vector<long long int > vetor;
	// vector<auto> vetor;

	do{

		cout << "Escolha uma das opções" << endl;
		cout << "1 - Ler arquivo" << endl;
		cout << "2 - Criar um vetor" << endl;
		cout << "3 - Escolher o algoritmo para ordenar" << endl;
		cout << "4 - Imprimir vetor" << endl;
		cout << "0 - Sair" << endl;
		cout << endl;
		cin >> escolha;

		system("clear"); //Limpa a tela do terminal

		switch(escolha){
			case 1:
			{
				string nomeArquivo;
				cout << "Digite o nome do arquivo junto com seu formato" << endl;
				cin >> nomeArquivo;

				ifstream arquivo;
				arquivo.open(nomeArquivo);
				string aux;

				while(arquivo >> aux){
					stringstream val(aux);
					val >> valor;
					vetor.push_back(valor);
				}

				tamanho = vetor.size();

				break;
			}
			
			case 2:
			{
				cout << "Digite o tamanho do vetor" << endl;
				cin >> tamanho;

				cout << "Digite os valores para colocar no vetor" << endl;
				for (int i = 0; i < tamanho; ++i){
					cin >> valor;
					vetor.push_back(valor);
				}

				break;	
			}

			case 3:
			{
				int algoritmo;

				cout << "Algoritmos:" << endl;
				cout << "1 - Bubble sort" << endl;
				cout << "2 - Selection sort" << endl;
				cout << "3 - Insertion sort" << endl;
				cout << "4 - Merge sort" << endl;
				cout << "5 - Quick sort" << endl;
				cout << "6 - Heap sort" << endl;
				cout << "7 - Counting sort" << endl;
				cout << "8 - Bucket sort" << endl << endl;
				cin >> algoritmo;
	
				switch(algoritmo){
					/*
						Escolhe o algoritmo e calcula o tempo em ms
					*/
					case 1:
					{	
						start = clock();
							Bubble *bubble = new Bubble();
							bubble -> ordenaBubble(vetor, tamanho);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}
			
					case 2:
					{
						start = clock();
							Selection *selection = new Selection();
							selection -> ordenaSelection(vetor, tamanho);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

					case 3:
					{
						start = clock();
							Insertion *insertion = new Insertion();
							insertion -> ordenaInsertion(vetor, tamanho);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

					case 4:
					{
						start = clock();
							Merge *merge = new Merge();
							merge -> ordenaMergeSort(vetor, 0, tamanho-1);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

					case 5:
					{	
						start = clock();
							Quick *quick = new Quick();
							quick -> ordenaQuick(vetor, 0, tamanho-1);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

					case 6:
					{
						start = clock();
							Heap *heap = new Heap();
							heap -> ordenaHeap(vetor, tamanho);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

					case 7:
					{
						start = clock();
							Counting *counting = new Counting();
							counting -> ordenaCounting(vetor, tamanho);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

					case 8:
					{
						start = clock();
							Bucket *bucket = new Bucket();
							bucket -> ordenaBucket(vetor, tamanho);
						stop = clock();
						cout << (stop - start)*1000/(double) CLOCKS_PER_SEC << endl;
						break;
					}

				}

				ofstream saida;
				saida.open("saida.txt");

				for (int i = 0; i < vetor.size(); ++i){
					saida << vetor[i] << endl;
				}


				break;
			}

			case 4:
			{
				
				for (int i = 0; i < tamanho; ++i){
					cout << vetor[i] << " ";
				}
				cout << endl;
				cout << endl;

				break;
			}


		}


	}while( escolha != 0 );
}
