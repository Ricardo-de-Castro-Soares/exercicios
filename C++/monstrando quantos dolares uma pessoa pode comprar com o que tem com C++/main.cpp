#include <iostream>

using namespace std;
int main()
{
	float reais, dolar;
	
	cout<<"Digite a quantia em dinheiro para a convercao: ";
	cin>>reais;
	
	dolar = (reais * 5.21);
	
	cout<<"O usuario pode comprar ate $"<<dolar<<" com um total de R$"<<reais;
	
	return 0;
}