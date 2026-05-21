#include <iostream>
using namespace std;

void outputValores(int soma, int media, int menorValorDigitado, int contadorPar)
{
	cout<<"\n\nA soma de todos os numeros digitados: "<<soma;
	cout<<"\nMenor valor digitado: "<<menorValorDigitado;
	cout<<"\nMedia dos valores digitado: "<<media;
	cout<<"\nTotal de números pares: "<<contadorPar;
}

void inputValores(int &num)
{
	bool saida = false;
	char opcao;
	int menorValorDigitado{}, contador{}, soma{}, contadorPar{};
	double media{};
	
	do{
		while(saida == false){
			cout<<"Digite um número: ";
			cin>>num;
			
			if(num < 0){
				cout<<"Não aceitamos números menores que [0]: ";
			}else{
				soma+=num;
				contador++;
				media = soma / contador; 
				
				if(num > menorValorDigitado){
					menorValorDigitado = num;
				}else{
					if(num < menorValorDigitado) menorValorDigitado = num;
				}
				if(num % 2 == 0){
					contadorPar++;
				}
				
				saida = true;
			}
		}
		
		cout<<"Deseja continuar [S/N]: ";
		cin>>opcao;	
		
		if(opcao == 'S' || opcao == 's'){
			saida = false;
		}		
	}while(opcao == 'S' || opcao == 's');
	
	outputValores(soma, media, menorValorDigitado, contadorPar);
}

int main(){
	int num{};
	
	inputValores(num);
	
	return 0;
}