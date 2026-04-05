#include <iostream>
using namespace std;

int main()
{
	int pedra = 1, papel = 2, tesoura = 3, jogador1, jogador2;
	
	do{
		cout<<"\n\n========================== JOKENPO ==========================\n";
		
		cout<<"\nEscolha entre (pedra = 1, papel = 2 e tesoura = 3) (Player 1): ";
		cin>>jogador1;
			
		if(jogador1 == 0){
			break;
		}
		
		if(jogador1 < 1 || jogador1 > 3){
			cout<<"Número invalido!";
			continue;
		}
			
		cout<<"\nEscolha entre (pedra = 1, papel = 2 e tesoura = 3) (Player 2): ";
		cin>>jogador2;
		
		if(jogador2 == 0){
			break;
		}
		
		if(jogador2 < 1 || jogador2 > 3){
			cout<<"Número invalido!";
			continue;
		}
		
		if(jogador1 == jogador2){
			cout<<"\nEmpate";
			continue;
		}
		
		if(jogador1 == 1 && jogador2 == 3 || jogador1 == 2 && jogador2 == 1 || jogador1 == 3 && jogador2 == 2){
			cout<<"Player 1 ganha de Player 2";
		}else{
			cout<<"Player 2 ganha de Player 1";
		}
		
	}while(jogador1 != 0 && jogador2 != 0);
	
	
	//Essa foi a primeira forma que fiz as condições
	
	/*if(jogador1 == jogador2){
		cout<<"\nEmpate";
	}else if(jogador1 == 1 || jogador2 == 3){
		cout<<"Player 1 ganha de Player 2";
	}else if(jogador1 == 3 || jogador2 == 1){//logica da pedra ganhar para tesoura e tesoura perder para pedra
		cout<<"Player 2 ganha de Player 1";
	}else if(jogador1 == 2 || jogador2 == 1){
		cout<<"Player 1 ganha de Player 2";
	}else if(jogador1 == 1 || jogador2 == 2){ //logica do papel ganha de pedra e pedra perder de papel
		cout<<"Player 2 ganha de Player 1";	
	}else if(jogador1 == 3 || jogador2 == 2){
		cout<<"Player 1 ganha de Player 2";
	}else if(jogador1 == 2 || jogador2 == 3){//logica da tesoura ganha do papel e papel perde para tesoura 
		cout<<"Player 2 ganha de Player 1";
	}*/
	
	
	return 0;
}