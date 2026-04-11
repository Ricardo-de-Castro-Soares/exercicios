#include <iostream>
using namespace std;

int main()
{
	//do-while ---> switch-case (V, P) ---> for (para 15 transações)? + acumulador ---> exibir
	
	char opcao;
	double transacaoAvista, transacaoAprazo , totalValorAvista, totalValorAprazo;
	
	do{
		cout<<"\n======== LOJA ========\n";
		cout<<"\nV. Para compras a vista.";
		cout<<"\nP. para compras a prazo.";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;
		
		switch(opcao){
			case 'V':
			case 'v':
				transacaoAvista = 0;
				
				cout<<"\nTransações a vista\n\n";
				
				for(int i = 1; i <= 15; i++){
					cout<<"Transação: ("<<i<<" de 15)\n";
					cout<<"Digite o valor da transação: ";
					cin>>totalValorAvista;
					transacaoAvista+=totalValorAvista;
				}
				break;
			case 'P':
			case 'p':
				transacaoAprazo = 0;
				
				cout<<"\nTransações a prazo\n\n";
				
				for(int i = 1; i <= 15; i++){
					cout<<"Transação: ("<<i<<" de 15)\n";
					cout<<"Digite o valor da transação: ";
					cin>>totalValorAprazo;
					transacaoAprazo+=totalValorAprazo;
				}
				break;
			}
	}while(opcao == 'P' || opcao == 'p' || opcao == 'V' || opcao == 'v');
	
	cout<<"\nValor total da transação a vista: R$"<<transacaoAvista;
	cout<<"\nValor total da transação da transação a prazo: R$"<<transacaoAprazo;
	cout<<"\nValor total de ambas as transações juntas: R$"<<(transacaoAvista + transacaoAprazo);
		
	return 0;
}