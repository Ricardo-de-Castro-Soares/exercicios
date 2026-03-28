#include <iostream>
using namespace std;

int main()
{
	int numeroSorte;
	
	cout<<"Tente adivinha um o número da sorte: ";
	cin>>numeroSorte;
	
	if(numeroSorte >= 1 && numeroSorte <= 5){
		cout<<"parabéns você acertou o número da sorte";
	}else{
		cout<<"você errou o número da sorte";
	}
	
	return 0;
}