#include <iostream>
using namespace std;

int main()
{
	int produto;
	float pesoKg, precoApagar;
	
	do{
		cout<<"\n===== SISTEMA SIMPLES DE VENDA =====\n\n";
		cout<<"\n1. Fruta  - R$ 3,50/Kg";
		cout<<"\n2. Arroz  - R$ 5,00/Kg";
		cout<<"\n3. Feijão - R$ 8,00/Kg";
		cout<<"\n4. Carne  - R$ 35,00Kg";
		cout<<"\n\nSelecine o produto (1-4): ";
		cin>>produto;
		
		switch(produto){
			case 1:
				cout<<"\nProduto selecionado: Fruta";
				cout<<"\nPreço: R$ 3,50/kg";
				cout<<"\n\nInforme o peso em Kg: ";
				cin>>pesoKg;
				
				if(pesoKg <= 0){
					cout<<"\nPeso invalido! O peso deve ser maior que zero.";
					cout<<"\nInforme o peso em kg: ";
					cin>>pesoKg;
				}else if(pesoKg > 0){
					precoApagar = pesoKg * 3,50;
					
					cout<<"Fruta com o peso escolhido "<<pesoKg<<"Kg será pago um valor total de R$"<< precoApagar;
				}
				break;
			case 2:
				cout<<"\nProduto selecionado: Arroz";
				cout<<"\nPreço: R$ 5,00/kg";
				cout<<"\n\nInforme o peso em Kg: ";
				cin>>pesoKg;
				
				if(pesoKg <= 0){
					cout<<"\nPeso invalido! O peso deve ser maior que zero.";
					cout<<"\nInforme o peso em kg: ";
					cin>>pesoKg;
				}else if(pesoKg > 0){
					precoApagar = pesoKg * 5,00;
					
					cout<<"Arroz com o peso escolhido "<<pesoKg<<"Kg será pago um valor total de R$"<< precoApagar;
				}
				break;
			case 3:
				cout<<"\nProduto selecionado: Feijão";
				cout<<"\nPreço: R$ 8,00/kg";
				cout<<"\n\nInforme o peso em Kg: ";
				cin>>pesoKg;
				
				if(pesoKg <= 0){
					cout<<"\nPeso invalido! O peso deve ser maior que zero.";
					cout<<"\nInforme o peso em kg: ";
					cin>>pesoKg;
				}else if(pesoKg > 0){
					precoApagar = pesoKg * 8,00;
					
					cout<<"Feijão com o peso escolhido "<<pesoKg<<"Kg será pago um valor total de R$"<< precoApagar;
				}
				break;
			case 4:
				cout<<"\nProduto selecionado: Carne";
				cout<<"\nPreço: R$ 35,00/kg";
				cout<<"\n\nInforme o peso em Kg: ";
				cin>>pesoKg;
				
				if(pesoKg <= 0){
					cout<<"\nPeso invalido! O peso deve ser maior que zero.";
					cout<<"\nInforme o peso em kg: ";
					cin>>pesoKg;
				}else if(pesoKg > 0){
					precoApagar = pesoKg * 35,00;
					
					cout<<"Carne com o peso escolhido "<<pesoKg<<"Kg será pago um valor total de R$"<< precoApagar;
				}						
		}		
	}while(produto > 4 || produto < 1);	
	
	
	return 0;
}