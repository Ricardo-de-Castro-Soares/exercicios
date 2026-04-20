#include <iostream>
using namespace std;

void outputValores(int numModificado[], int tamanho){
	
	cout<<"\nVetores atualizados: ";
	for(int i = 0; i < tamanho; i++){
		cout<<"\nV["<<i<<"] = "<<numModificado[i];
	}
	
}
	
void inputValores(int numDigitados[], int tamanho){
	
	cout<<"Vetores iniciais: \n";
	for(int i = 0; i < tamanho; i++){
		cout<<"V["<<i<<"] = ";
		cin>>numDigitados[i];
	}
	
	
	for(int i = 0; i < tamanho; i++){
		cout<<"\nDigite a posição que deseja modificar (0 a 4): ";
		cin>>i;
		if(i == 0){
			cout<<"Digite o novo valor: "; cin>>numDigitados[i];
			numDigitados[i] = numDigitados[i];
			break;
		}
		if(i == 1){
			cout<<"Digite o novo valor: "; cin>>numDigitados[i];
			numDigitados[i] = numDigitados[i];
			break;
		}
		if(i == 2){
			cout<<"Digite o novo valor: "; cin>>numDigitados[i];
			numDigitados[i] = numDigitados[i];
			break;
		}
		if(i == 3){
			cout<<"Digite o novo valor: "; cin>>numDigitados[i];
			numDigitados[i] = numDigitados[i];
			break;
		}
		if(i == 4){
			cout<<"Digite o novo valor: "; cin>>numDigitados[i];
			numDigitados[i] = numDigitados[i];
			break;
		}
	}
	
	outputValores(numDigitados, tamanho);
}

int main()
{
	int vetor[5] = {};
	
	inputValores(vetor, 5);
	
	return 0;
}