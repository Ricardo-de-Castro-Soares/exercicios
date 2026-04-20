#include <iostream>
using namespace std;

void outputValores(int tamanho){
	int vetorA[5] = {10, 20, 30, 40, 50}, vetorB[5] = {10, 20, 0, 0, 0}, vetorC[5] = {0, 0, 30, 0, 0};
	
	cout<<"Vetor A: ";
	for(int a = 0; a < tamanho; a++){
		cout<<vetorA[a]<<" ";
	} 
	
	cout<<"\nVetor B: ";
	for(int b = 0; b < tamanho; b++){
		cout<<vetorB[b]<<" ";
	}
	
	cout<<"\nVetor C: ";
	for(int c = 0; c < tamanho; c++){
		cout<<vetorC[c]<<" ";
	}
}


int main()
{
	
	outputValores(5);
	
	return 0;
}