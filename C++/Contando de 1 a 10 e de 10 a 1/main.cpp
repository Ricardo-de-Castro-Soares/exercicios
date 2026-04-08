#include <iostream>
using namespace std;

int main()
{
	int opcao, i;
	
	do{
		cout<<"\n\n==================\n";
		cout<<"|"<<"\tMENU"<<"     |";
		cout<<"\n==================\n";
		cout<<"|"<<" [1] de 1 a 10 "<<" |";
		cout<<"\n|"<<" [2] de 10 a 1 "<<" |";
		cout<<"\n|"<<" [3] Sair"<<"       |";
		cout<<"\n==================";
		cout<<"\n\nEscolha uma opção: ";
		cin>>opcao;
		
		if(opcao == 1){
			for(int i = 1; i <= 10; i++)
			cout<<"\nNúmero: "<<i;
		}else if(opcao == 2){
			for(int p = 10; p >= 1; p--)
			cout<<"\nNúmero: "<<p;
		}
		
	}while(opcao != 0);
	
	return 0;
}