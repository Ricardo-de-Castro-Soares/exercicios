#include <iostream>
using namespace std;

int main()
{
	string nome;
	float salarioMensal, anosTrabalhado, novoSalario1, novoSalario2, novoSalario3;
	
	cout<<"Escreva seu nome: ";
	cin>>nome;
	cout<<"Digite o seu salario mensal atual: ";
	cin>>salarioMensal;
	cout<<"Quantos anos de empresa você tem: ";
	cin>>anosTrabalhado;
	
	novoSalario1 = (salarioMensal * 1.03);
	novoSalario2 = (salarioMensal * 1.125);
	novoSalario3 = (salarioMensal * 1.20);
	
	if(anosTrabalhado <= 3){
		cout<<"O funcionario "<<nome<<" e contribuiu por "<<anosTrabalhado<<" anos e ganhava R$"<<salarioMensal<<" agora passa a receber R$"<<novoSalario1;
	}else if(anosTrabalhado > 3 && anosTrabalhado < 10 ){
		cout<<"O funcionario "<<nome<<" e contribuiu por "<<anosTrabalhado<<" anos e ganhava R$"<<salarioMensal<<" agora passa a receber R$"<<novoSalario2;
	}else{
		cout<<"O funcionario "<<nome<<" e contribuiu por "<<anosTrabalhado<<" anos e ganhava R$"<<salarioMensal<<" agora passa a receber R$"<<novoSalario3;		
	}
	
			
	return 0;
}