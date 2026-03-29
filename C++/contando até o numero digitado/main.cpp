#include <iostream>
using namespace std;

int main()
{
	int contador = 1, numero; 
	
	cout<<"Digite um numero: ";
	cin>>numero;
	
	while(contador <= numero){
		cout<<"\nNúmero: "<<contador;
		contador++;
	}
	
	cout<<"\n\nAcabou!";
	
	return 0;
}