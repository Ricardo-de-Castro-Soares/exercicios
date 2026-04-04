#include <iostream>
using namespace std;

int main()
{
	int registro, opcao;
	char novoRegistro;
	string nome;
	
	for(int i = 1; i <= 20; i++){
		cout<<"\n----------- RGISTRO DE PACIENTE ("<<i<<"/20)-----------\n";
		cout<<"\nNome do Paciente: ";
		cin>>nome;
		
		do{
			cout<<"\nNÍVEIS DE PRIORIDADE:";
			cout<<"\n1. Urgência";
			cout<<"\n2. Preferencial";
			cout<<"\n3. Normal";
			cout<<"\nSelecione a prioridade (1-3): ";
			cin>>opcao;
			
			switch(opcao){
				case 1:
					cout<<"\n-------------------------------------------\n";
					cout<<"\t  REGISTRO CONFIMADO";
					cout<<"\n-------------------------------------------\n";
					cout<<"\nPaciente: "<<nome;
					cout<<"\nPrioridade: Úrgência";
					cout<<"\nTempo Estimado: Atendimento Imediato";
					break;
				case 2:
					cout<<"\n-------------------------------------------\n";
					cout<<"\t  REGISTRO CONFIMADO";
					cout<<"\n-------------------------------------------\n";
					cout<<"\nPaciente: "<<nome;
					cout<<"\nPrioridade: Preferencial";
					cout<<"\nTempo Estimado: 15 a 30 minutos";
					break;	
				case 3:
					cout<<"\n-------------------------------------------\n";
					cout<<"\t  REGISTRO CONFIMADO";
					cout<<"\n-------------------------------------------\n";
					cout<<"\nPaciente: "<<nome;
					cout<<"\nPrioridade: Normal";
					cout<<"\nTempo Estimado: 45 a 60 minutos";
					break;
				default:
					cout<<"Número invalido";
					continue;
			}
			
		cout<<"\n\nDeseja registra outro paciente? (S/N: ";
		cin>>novoRegistro;
		
		switch(novoRegistro){
			case 'S':
			case 's':
				continue;
			case 'N':
			case 'n':
				cout<<"Encerrando sistema...";
				return 0;
		}
		
		}while(opcao > 3 || opcao < 1);
	}
	
	return 0;
}