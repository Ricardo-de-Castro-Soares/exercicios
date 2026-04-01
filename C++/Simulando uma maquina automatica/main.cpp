#include <iostream>
using namespace std;

int main()
{
	int opcao, produto, pagamento, teste, senha=1234;
	
	do{
		cout<<"\n===== MAQUINA DE BEBIDA =====\n";
		cout<<"\nPordutos disponiveis:";
		cout<<"\n1. Coca-Cola     - R$ 5,00";
		cout<<"\n2. Guaraná       - R$ 4,50";
		cout<<"\n3. Suco de uva   - R$ 6,00";
		cout<<"\n4. Água sem gás  - R$ 2,50";
		cout<<"\n\nEscolha uma opção (1-4): ";
		cin>>produto;
		
		switch(produto){
			case 1:
				cout<<"Você escolheu: Coca-Cola (R$ 5,00)\n";
				break;
			case 2:
				cout<<"Você escolheu: Guaraná (R$ 4.50)\n";
				break;
			case 3:
				cout<<"Você escolheu: Suco de Uva (R$ 6.00)\n";
				break;
			case 4:
				cout<<"Você escolheu: Água sem gás (R$ 2.50)\n";
				break;
		}

	}while(produto > 4 || produto < 1);				
			
		do{
			cout<<"\n--- FORMA DE PAGAMENTO ---\n";
			cout<<"\n1. Cartao";
			cout<<"\n2. pix";
			cout<<"\n\nEscolha uma opção: ";
			cin>>pagamento;
		}while(pagamento > 2 || pagamento < 1);
	
		do{		
			switch(pagamento){
				case 1:
					cout<<"\n[CARTÃO selecionado]";
					cout<<"\nDigite sua senha de 4 números inteiros: ";
					cin>>teste;
					if(teste != senha){
						cout<<"Senha invalida! Digite exatamente 4 números inteiros: ";
						cin>>teste;
					}
					if(senha == 1234){
						cout<<"Pagamento no Cartão confirmado!";
					}
					break;
				case 2:
					cout<<"\n[PIX selecionado]";
					cout<<"\nDigite sua senha de 4 números inteiros: ";
					cin>>teste;
					if(teste != senha){
						cout<<"Senha invalida! Digite exatamente 4 números inteiros: ";
						cin>>teste;
					}
					if(senha == 1234){
						cout<<"Pagamento no Pix confirmado!";
					}
				}
		}while(teste != senha);
		
	return 0;
}