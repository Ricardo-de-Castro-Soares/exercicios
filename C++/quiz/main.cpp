#include <iostream>
using namespace std;

int main()
{
	char resposta, A, B, C, D;
	
	do{
		cout<<"\n\n===== QUIZ CONHECIMENTOS GERAIS =====";
		cout<<"\nResponda corretamente para avançar";
		cout<<"\n\nQuestão 1: Quanto é 8 x 7? ";
		cout<<"\nA) 54";
		cout<<"\nB) 56";
		cout<<"\nC) 64";
		cout<<"\nD) 48";
		cout<<"\nSua resposta (A/B/C/D): ";		
		cin>>resposta;
		
		switch(resposta){
			case 'A':
			case 'C':
			case 'D':
			case 'a':
			case 'c':
			case 'd':	
				cout<<"\nErrado! tente novamente.";
				cout<<"\nSua resposta (A/B/C/D): ";
				cin>>resposta;
		switch(resposta)
			case 'B':
			case 'b':
				cout<<"\nParabéns! resposta correta";
				break;
			case 'B':
			case 'b':
				cout<<"\nParabéns! resposta correta";
				break;
		}

	}while(resposta != 'B' && resposta != 'b');
	
	
	do{	
		cout<<"\n\nQuestão 2: Qual o nome da primeira programadora de computadores?";
		cout<<"\nA) Ada Lovelace";
		cout<<"\nB) Grace Hopper";
		cout<<"\nC) Margare Hamilton";
		cout<<"\nD) Annie Easley";
		cout<<"\nSua resposta (A/B/C/D): ";		
		cin>>resposta;
		
		switch(resposta){
		
			case 'B':
			case 'C':
			case 'D':
			case 'b':
			case 'c':
			case 'd':	
				cout<<"\nErrado! tente novamente.";
				cout<<"\nSua resposta (A/B/C/D): ";
				cin>>resposta;
		switch(resposta)
			case 'A':
			case 'a':
				cout<<"\nParabéns! resposta correta";
				break;
			case 'A':
			case 'a':
				cout<<"\n===== FIM DO QUIZ =====";
				cout<<"\nParabéns!";
				break;
				
			}

	}while(resposta != 'A' && resposta != 'a');
	
	return 0;
}