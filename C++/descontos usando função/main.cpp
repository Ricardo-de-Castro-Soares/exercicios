#include <iostream>
using namespace std;

void outputinfo(double inputProduto, double outputDesconto, double outputPrecofinal){
	
	cout<<"\nValor original do produto: "<<inputProduto;
	cout<<"\nValor a ser descontado: "<<outputDesconto;
	cout<<"\nValor total a ser pago: "<<outputPrecofinal;
}

void inputDeUsuario(double input){
	bool saida = true; 
	double inputProduto, inputDesconto, outputDesconto, outputPrecofinal;
	
	while(saida){
		cout<<"Digite o preço do produto: ";
		cin>>inputProduto;
		cout<<"Digite o desconto do produto: ";
		cin>>inputDesconto;
		
		if((inputProduto < 0 || inputProduto >= 101) || (inputDesconto < 0 || inputDesconto >= 101)){
			cout<<"\nNúmero invalido!!";
			continue;
		}else{
			saida = false;
		}
	}
	
	outputDesconto = inputProduto * (inputDesconto / 100.0);
    outputPrecofinal = inputProduto - outputDesconto;
	
	outputinfo(inputProduto, inputDesconto, outputPrecofinal);
}

int main()
{
	double input;
	
	inputDeUsuario(input);
	
	return 0;
}