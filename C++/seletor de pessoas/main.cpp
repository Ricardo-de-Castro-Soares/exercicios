#include <iostream>
using namespace std;

int main()
{
	int opcao, opcao2;
	string idade, cabelo, sexo;
	
	do{
		cout<<"\n===================\n";
		cout<<"\tSELETOR DE PESSOAS";
		cout<<"\n===================\n";
		cout<<"[1] Para escolher o sexo: ";
		cin>>opcao;	
		
		if(opcao == 1){
			cout<<"Qual o seu Sexo? ";
			cin>>sexo;
		}
		
		cout<<"Qual sua idade? ";
		cin>>idade;
		
		cout<<"[2] Qual a cor do cabelo? ";
		cin>>opcao;
		
		if(opcao == 2){
			do{
				cout<<"[1] Preto";
				cout<<"[2] Catanho";
				cout<<"[3] Loiro";
				cout<<"[4] Ruivo";
				cout<<"[5] Sair";
				cout<<"Escolha uma opção: ";
				cin>>opcao2;
			}while(opcao2 != 5);
		}
		
		cout<<"Deseja continuar o registro? [s/n]";
		cin>>'s', 'n';
	}while(opcao != 'n');
	
	return 0;
}