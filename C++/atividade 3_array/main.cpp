#include <iostream>
using namespace std;

void outputValores(int num[], int  tamanho){
	int valorIgual = {};
	
	for(int i = 0; i < tamanho; i++){
		for(int j = i + 1; j < tamanho; j++){
			if(num[i] == num[j]){
				cout<<"Números iguais: "<<num[i]<<" ";
			}
		}
	}
	
	cout<<"Números iguais: "<<valorIgual;
}

 void inputVetores(int num[],int tamanho){
 	int valorIgual = {};
 	
	for(int i = 0; i < tamanho; i++){
		cout<<"Posição ["<<i<<"]: ";
		cin>>num[i];
	}
		
	outputValores(num, tamanho);		
}

int main()
{
	int vetor[10] = {};
	
	inputVetores(vetor, 10);
	
	return 0;
}