#include <iostream>
using namespace std;

int main()
{
	int codigo, registroEntrada = 0, registroSaida = 0;
	char registro;
	
	do{
		cout<<"\n============= CONTROLE DE ACESSO =============\n";
		cout<<"\nInforme o código do funcionário (0 para sair): ";
		cin>>codigo;
		if(codigo == 0){
				break;
		}
		
		cout<<"\nTipo de registro (E - Entrada / S - Saida): ";
		cin>>registro;
		
		switch(registro){
			case 'E':
			case 'e':
				cout<<"\nEntrada registrada com sucesso!";
				registroEntrada++;
				break;
			case 'S':
			case 's':
				cout<<"\nSaida registrada com sucesso!";
				registroSaida++;
				break;
			default:
				cout<<"Tipo invalido! Digite apenas E ou S";
		}

		cout << "\nDEBUG: O codigo agora e: " << codigo;		
	}while(codigo != 0);
	
	
	cout<<"\n================= RELATORIO =================\n";
	cout<<"\nTotal de entradas: "<<registroEntrada;
	cout<<"\nTotal de saidas: "<<registroSaida;
	
	
	return 0;
}