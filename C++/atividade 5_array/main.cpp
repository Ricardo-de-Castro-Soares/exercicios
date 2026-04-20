#include <iostream>
using namespace std;

void outputsoma(int soma, int vetorSomado[], int tamanho){
	
	cout<<"\nValores Digitados: ";
	for(int i = 0; i < tamanho; i++){
		cout<<vetorSomado[i]<<" ";
	}
	
	cout<<"\nA soma do vetor é: "<<soma;
}

int inputVetores(int vetorAsomar[], int tamanho){
	int soma = {};
	
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite os valores: ";
		cin>>vetorAsomar[i];
		soma+=vetorAsomar[i];
	}
	
	
	outputsoma(soma, vetorAsomar, tamanho);
	
	return soma;
}

int main()
{
	int vetor[5] = {};
	
	inputVetores(vetor, 5);
	
	return 0;
}