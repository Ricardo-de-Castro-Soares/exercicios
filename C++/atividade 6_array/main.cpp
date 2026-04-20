#include <iostream>
using namespace std;

void outputValores(int vetorQtdProdutoKG[], double vetorPreco[], int tamanho){
	double soma = {};
	
	cout<<"\nResumo da compra: ";
	for(int i = 0; i < tamanho; i++){
		if(i == 0){
			cout<<"\nAlface: "<<vetorPreco[0] * vetorQtdProdutoKG[i];
		}
		if(i == 1){
			cout<<"\nBeterraba: "<<vetorPreco[1] * vetorQtdProdutoKG[i];
		}
		if(i == 2){
			cout<<"\nCenoura: "<<vetorPreco[2] * vetorQtdProdutoKG[i];
		}
		
		soma+=(vetorPreco[i] * vetorQtdProdutoKG[i]);
	}
	
	cout<<"\n\nPreço total: "<<soma;
}

void inputValores(int vetorQtdProdutoKG[], double vetorPreco[], int tamanho){
	
	cout<<"Prezado cliente, digite a quantidade de quilos desejado: ";	
	for(int i = 0; i < tamanho; i++){
		if(i == 0){
			cout<<"\nAlface: ";
			cin>>vetorQtdProdutoKG[i];
		}
		if(i == 1){
			cout<<"Beterraba: ";
			cin>>vetorQtdProdutoKG[i];
		}
		if(i == 2){
			cout<<"Cenoura: ";
			cin>>vetorQtdProdutoKG[i];
		}
	}
	
	outputValores(vetorQtdProdutoKG, vetorPreco, tamanho);
}

int main()
{
	int vetorQtdProdutoKG[3] = {};
	double vetorPreco[3] = {3.00, 2.00, 1.50};

	inputValores(vetorQtdProdutoKG, vetorPreco, 5);
	
	return 0;
}