#include <iostream>
using namespace std;

int main()
{
	//Calculando o custo total a pagar em um carro alugado. Condsiderando R$90 para dias, e, R$0.20 por Km rodado.
	
	float custoDia, custoKm, custoTotal;
	
	cout<<"Olá, quantos dias o veiculo foi alugado: ";
	cin>>custoDia;
	cout<<"Agora, digite a quatidade rodado em Quilometros: ";
	cin>>custoKm;
	
	custoTotal = ((custoDia * 90) + (custoKm * 0.20));
	
	cout<<"O custo total a ser pago é de R$"<<custoTotal<<"\n";
	
	return 0;
}