#include <iostream>
using namespace std;

int main()
{
	int valorInicial, ultimoValor, incremento;
	
	cout<<"Digite um valor inicial: ";
	cin>>valorInicial;
	cout<<"Digite o último valor: ";
	cin>>ultimoValor;
	cout<<"Digite o incremento: ";
	cin>>incremento;
	
	for(int i = valorInicial; i <= ultimoValor; i+=incremento){
		cout<<"\nNumero: "<<i;
	}
	
		
	return 0;
}