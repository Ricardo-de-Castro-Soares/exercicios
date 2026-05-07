#include <iostream>
#include <vector>
using namespace std;

void menu()
{
	int opcao{}, totalVendas{};
	vector<double>venda;
	double vendas{}, somaVendas{};
	bool saida = true;
	
	do{
		cout<<"\n==============================";
		cout<<"\n       SISTEMA DE VENDAS";
		cout<<"\n==============================";
		cout<<"\n[1] Registar venda";
		cout<<"\n[2] Ver total de vendas";
		cout<<"\n[3] Ver quantidade de vendas";
		cout<<"\n[0] Sair";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;
		
		system ("cls");
		
		if(opcao < 1 && opcao > 3){
			cout<<"Opção invalida digite entre [1 e 3]";
			continue;
		}
		
		
		switch(opcao){
			case 1:
				while(saida == true){
					cout<<"\nPreço de venda: R$";
					cin>>vendas;
				
					if(vendas >= 1){
						venda.push_back(vendas);
						totalVendas++;
						somaVendas+=vendas;
				
					}else if(vendas == 0){
						saida = false;
					}else if(vendas < 1){
						cout<<"\nNúmero de venda invalido o minimo é R$1";
					
						venda.pop_back();
					}
				}
				break;
			case 2:
				cout<<"\nTotal de Vendas feitas: "<<totalVendas;
				cout<<"\nTotal já vendido: R$"<<somaVendas;
				break;
			case 3:
				cout<<"Valor total vendido: "<<totalVendas;
				cout<<"Total de vendas registradas: R$"<<somaVendas;
			break;
		}
	}while(opcao != 0);
}

 	/*Desenvolva um programa que simule um sistema de vendas simples,
	utilizando um menu interativo.
	O programa deve apresentar o seguinte menu:
	● 1 – Registrar venda
	● 2 – Ver total de vendas
	● 3 – Ver quantidade de vendas
	● 0 – Sair

	O sistema deve:
	Permitir as seguintes operações:

	○ Registrar venda: solicitar o valor da venda e somar ao total
	acumulado;

	○ Ver total de vendas: mostrar o valor total já vendido;
	○ Ver quantidade de vendas: mostrar quantas vendas foram
	registradas;
		
	Ao final, o programa deve mostrar o valor total vendido e a quantidade
	de vendas.*/

int main()
{
	
	menu();
	
	return 0;
}