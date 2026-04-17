#include <iostream>
using namespace std;

void outputVetoresPares(int parOuImpar[], int tamanho){
	int total = 0;

	for(int i = 0; i < tamanho; i++){
		if(parOuImpar[i] % 2 == 0){
			cout<<"\nÉ Par na posição: "<<i;
		}else{
			cout<<"\nÉ Impar na posição : "<<i;
		}
	}
	
	for(int i = 0; i < tamanho; i++){
		if(parOuImpar[i] % 2 == 0){
			total = total + 1;
		}                                        
	}
	
	cout<<"\nTotal de pares: "<<total;
}


void inputVetor(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite os núemros: ";
		cin>>num[i];  
	} 
	
	outputVetoresPares(num, tamanho);
}


int main()
{
	int vetor[7] = {}, tamanho = 7;
	
	inputVetor(vetor, tamanho);
	
	
	return 0;
}