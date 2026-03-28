#include <iostream>
using namespace std;

int main()
{
	float casaValor, salario, anosPagarCasa, prestasaoMensal, salarioLimite;
	
	cout<<"Qual o valor total da casa: ";
	cin>>casaValor;
	cout<<"Qual o seu salario mensal: ";
	cin>>salario;
	cout<<"Em quantos anos pretende pagar a prestasal: ";
	cin>>anosPagarCasa;
	
	prestasaoMensal = (casaValor / (anosPagarCasa * 12));	
	salarioLimite = (salario * 0.30);
		
	if(prestasaoMensal > salarioLimite){
		cout<<"\nO salario excede o limite de 30% de R$"<<salarioLimite;	
	}else{
		cout<<"\nO seu empréstimo foi aprovado, pagando um valor de R$"<<prestasaoMensal<<" Mês";
	}
	
	return 0;
}