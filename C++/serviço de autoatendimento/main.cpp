#include <iostream>
using namespace std;

int main()
{
	long long cpf = 12345678901, opcao;
	string nome;
	
	do{
		cout<<"\n\n===== TERMINAL DE AUTOATENDIMENTO =====\n";
		cout<<"Informe seu nome: ";
		cin>>nome;
		cout<<"Informe seu CPF (somente 11 números) : ";
		cin>>cpf;
		
		if(cpf < 12345678901 || cpf > 12345678901){
			cout<<"\nCPF invalido! Digite os 11 números sem ponto ou traço.";
			cout<<"\nInforme seu CPF (Somente 11 númemros) : ";
			cin>>cpf;
		}
		
	}while(cpf != 12345678901);
	
	
	do{
		cout<<"\n--- SELECIONE O TIPO DE SERVIÇO ---\n";
		cout<<"\n1. Abertura de Conta";
		cout<<"\n2. Empréstimo e Financiamento";
		cout<<"\n3. Cartão de Credito";
		cout<<"\n4. Caixa - Deposito e Saque";
		cout<<"\n5. Atendimento Prioritário";
		cout<<"Escolha uma opção (1-5): ";
		cin>>opcao;
		
		if(opcao > 5){
			cout<<"\nOpção invalida! Escolha entre 1 e 5.";
			cout<<"\nEscolha uma opção (1-5):";
			cin>>opcao; 
		}
		
		switch(opcao){
			case 1:
				cout<<"\n========================================\n";
				cout<<"\tCOMPROVANTE DE ATENDIMENTO";
				cout<<"\n========================================\n";
				cout<<"Nome    : "<<nome;
				cout<<"\nCPF 	: "<<cpf;
				cout<<"\nServiço : Abertura de Conta";
				cout<<"\nMesa    : 01 - Gerência";
				cout<<"\n-------------------------------------------";
				cout<<"\n     SENHA DE ATENDIMENTO\n\n";
				cout<<"\t[ 1002 ]\n";
				cout<<"\n   Aguarde ser chamado no painel";
				cout<<"\n==============================================";
				break;
			case 2: 
				cout<<"\n========================================\n";
				cout<<"\tCOMPROVANTE DE ATENDIMENTO";
				cout<<"\n========================================\n";
				cout<<"Nome    : "<<nome;
				cout<<"\nCPF 	: "<<cpf;
				cout<<"\nServiço : Empréstimo e Financiamento";
				cout<<"\nMesa    : 02 - Crédito";
				cout<<"\n-------------------------------------------";
				cout<<"\n     SENHA DE ATENDIMENTO\n\n";
				cout<<"\t[ 2002 ]\n";
				cout<<"\n   Aguarde ser chamado no painel";
				cout<<"\n==============================================";
				break;
			case 3:
				cout<<"\n========================================\n";
				cout<<"\tCOMPROVANTE DE ATENDIMENTO";
				cout<<"\n========================================\n";
				cout<<"Nome    : "<<nome;
				cout<<"\nCPF 	: "<<cpf;
				cout<<"\nServiço : Cartão de Crédito";
				cout<<"\nMesa    : 03 - Crédito";
				cout<<"\n-------------------------------------------";
				cout<<"\n     SENHA DE ATENDIMENTO\n\n";
				cout<<"\t[ 3002 ]\n";
				cout<<"\n   Aguarde ser chamado no painel";
				cout<<"\n==============================================";
				break;
			case 4:
				cout<<"\n========================================\n";
				cout<<"\tCOMPROVANTE DE ATENDIMENTO";
				cout<<"\n========================================\n";
				cout<<"Nome    : "<<nome;
				cout<<"\nCPF 	: "<<cpf;
				cout<<"\nServiço : Caixa - Depósito e Saque";
				cout<<"\nMesa    : Guichê 01 - Caixa";
				cout<<"\n-------------------------------------------";
				cout<<"\n     SENHA DE ATENDIMENTO\n\n";
				cout<<"\t[ 4002 ]\n";
				cout<<"\n   Aguarde ser chamado no painel";
				cout<<"\n==============================================";
				break;
			case 5:
				cout<<"\n========================================\n";
				cout<<"\tCOMPROVANTE DE ATENDIMENTO";
				cout<<"\n========================================\n";
				cout<<"Nome    : "<<nome;
				cout<<"\nCPF 	: "<<cpf;
				cout<<"\nServiço : Atendimento Prioritário";
				cout<<"\nMesa    : Mesa 04 - Prioritário";
				cout<<"\n-------------------------------------------";
				cout<<"\n     SENHA DE ATENDIMENTO\n\n";
				cout<<"\t[ 5002 ]\n";
				cout<<"\n   Aguarde ser chamado no painel";
				cout<<"\n==============================================";
				break;
		}
		
	}while(opcao > 5 && opcao < 1);
	
	
	
	return 0;
}
