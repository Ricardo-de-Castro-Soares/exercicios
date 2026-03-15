#include <iostream>
using namespace std;

int main()
{
	//Recebendo o salário de um funcionário e calculando um aumento de 15%
	
	float salario, porcentoSalario, novoSalario;
	
	cout<<"Olá, digite o seu salário atual: ";
	cin>>salario;
	
	porcentoSalario = (salario * 0.15);
	novoSalario = (salario + porcentoSalario);
	
	cout<<"O Seu novo salário é de R$"<<novoSalario<<"\n";
	
	return 0;
}