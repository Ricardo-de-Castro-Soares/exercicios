#include <iostream>

using namespace std;
int main()
{
	string nome;	
	float salario;
	
	cout<<"Qual o nome do funcionario: ";
	cin>>nome;
	
	cout<<"Quanto o funcionario ganha por mes: ";
	cin>>salario;
	
	cout<<"\n-------------------------------------------------------\n";
	cout<<"O funcionario "<<nome<< " ganha um total de R$"<<salario<< " por mes";
	cout<<"\n-------------------------------------------------------";
	return 0;
}