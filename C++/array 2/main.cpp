#include <iostream>
using namespace std;

void inputVetor(int numeros[], int tamanho){
	int num, i;
	bool input = false;
		
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite os Números: ";
		cin>>numeros[i];
	}
	
		cout<<"\nDigite um número: ";
		cin>>num;
		
		for(int i = 0; i < tamanho; i++){
			if(numeros[i] == num){
				input = true;
				cout<<"Econtrado na posição: "<<i;
			}
		}

	
	if(!input){
		cout<<"Não encontrado";
	}
}


int main()
{
	int vetor[5];
	
	inputVetor(vetor, 5);
	
	return 0;
}