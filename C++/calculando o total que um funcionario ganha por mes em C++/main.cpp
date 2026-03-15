#include <iostream>
using namespace std;

int main()
{
	//Calculo salarial recebido por mês, sendo que, o funcionario trabalha 8h dias e ganha R$25 por hora
	
	float diasTrabalhadoMes, salario;
	
	cout<<"Olá, quantos dias você trabalhor este mês: ";
	cin>>diasTrabalhadoMes;
	
	salario = ((25 * 8 ) * diasTrabalhadoMes);
	
	cout<<"\n\n------------------------------------------------------\n";
	cout<<"\tO funcionario ganhou um total de R$"<<salario;
	cout<<"\n------------------------------------------------------\n";
	return 0;
}