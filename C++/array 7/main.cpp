#include <iostream>
using namespace std;
	
void outPutValores(int precoMaior, int precoMenor){
	
	cout<<"\nMaior preço: R$"<<precoMaior;
	cout<<"\nMenor preço: R$"<<precoMenor;
}

void inputValores(double produto[],int tamanho){
	double precoMaior, precoMenor;
	
	for(int i = 0; i < tamanho; i++){
		cout<<"Digite o valor dos 8 produtos R$: ";
		cin>>produto[i];
	}
	
	for(int i = 0; i < tamanho; i++){
		if(i == 0){
			precoMaior = produto[i];
			precoMenor = produto[i];
		}else{
			if(produto[i] > precoMaior) precoMaior = produto[i]; 
			if(produto[i] < precoMenor) precoMenor = produto[i];
		}
		
	}
	
	outPutValores(precoMaior, precoMenor);
}

int main()
{
	double vetor[8] = {};
	int tamanho = 8;
	
	inputValores(vetor, tamanho);
	
	return 0;
}