#include <iostream>
using namespace std;

void inputVetores(int numeros[], int tamanho){
	int maior{}, i, menor = 999;
	
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite os números: ";
		cin>>numeros[i];
	}
	
	
	cout<<"\nTodos os valores digitados: ";
	for(int i = 0; i < tamanho; i++){
		cout<<numeros[i]<<" ";

		if(numeros[i] > maior){
		maior = numeros[i];
	 	}else if(numeros[i] < menor){
	 		menor = numeros[i];
		 }
 }
 	cout<<"\nO maior número digitado: "<<maior;
 	cout<<"\nO menor número digitado: "<<menor;

}

int main()
{
	int vetor[5];
		
	inputVetores(vetor, 5);
}