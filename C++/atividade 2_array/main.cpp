#include <iostream>
using namespace std;

void inputVetorea(int num[], int tamanho){
	int maior = 0, menor = 999;
	
	cout<<"Digite 10 valores\n";
	for(int i = 0; i < tamanho; i++){
		cout<<"Posição ["<<i<<"] = ";
		cin>>num[i];
	}
	
	for(int i = 0; i < tamanho; i++){
		if(menor > num[i]){
			menor = num[i];
		}
		if(maior < num[i]){
			maior = num[i];
		}
	}
	
	cout<<"\nO menor valor: "<<menor;
	cout<<"\nO menor valor: "<<maior;
}

int main()
{
	int vetor[10] = {}, tamanho;
	
	inputVetorea(vetor, 10);
	
	return 0; 
}