#include <iostream>
using namespace std;

void outputVetores(int numDeSaida[], int tamanho){
	int totalPar = {};
	
	for(int i = 0; i < 10; i++){
		cout<<"\nPosição ["<<i<<"]: "<<numDeSaida[i];		
	}
	
	cout<<"\n\nValores pares esncontrados: ";
	for(int i = 0; i < 10; i++){
		if(numDeSaida[i] % 2 == 0){
			totalPar = totalPar + 1;
			cout<<numDeSaida[i]<<" ";
		}	
	}
	
	cout<<"\n\nTotal de números pares: "<<totalPar;
}

void inputVetores(int numLidos[],int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite os números: ";
		cin>>numLidos[i];
	}
	
	outputVetores(numLidos, tamanho);
	
}

int main()
{
	int vetor[10] = {}, tamanho;

	inputVetores(vetor, 10);
	
	return 0;
}