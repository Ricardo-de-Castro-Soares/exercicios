#include <iostream>
using namespace std;

int main()
{
	int senha = 2026, tentativa, i = 1, opcao;
	float valorDeposito = 0, saque = 0, valorTotal = 0;
	
	
	cout<<"\n===== TERMINAL BANCÁRIO =====\n\n";
	
	for(int i=1; i <= 3; i++){ 
	cout<<"Digite a senha (4 digitos): ";
	cin>>tentativa;
	if(tentativa == senha){
		cout<<"\nAcesso permitido.";
		break;
		
		}else{
			cout<<"\nSenha incorreta\n";
		}
	if(i == 3){
		cout<<"Acesso bloquado!";
		return 0;
	}
	}
	
	
	do{
		cout<<"\n----------------------------------";
		cout<<"\n1 - Depositar";
		cout<<"\n2 - Sacar";
		cout<<"\n3 - Extrato";
		cout<<"\n0 - Sair";
		cout<<"\n----------------------------------\n";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;
		
		switch(opcao){
			case 1:
				cout<<"\nInforme o valor a depositar: ";
				cin>>valorDeposito;
			
				if(valorDeposito <= 0 ){
					cout<<"Quantia invalida para deposito";
					break;
				}
				
				valorTotal+=valorDeposito;	
				
				cout<<"\nDeposito realizado com sucesso!";
				break;
			case 2:
				cout<<"\nInforme o valor do saque: ";
				cin>>saque;	
				
				if(valorTotal < saque){
					cout<<"\nSaldo insuficiente para saque";
					break;
				}
				
				valorTotal-=saque;
				
				cout<<"\nSaque realizado com sucesso!";
				break;
			case 3:
				cout<<"\n===== EXTRATO =====\n";
				cout<<"Saldo atual: "<<valorTotal;
				break;
		}
		
	}while(opcao != 0);
	
	cout<<"\nEncerrando sistema...";
	
	return 0; 
}