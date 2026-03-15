#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Calculando a redução de vida de um fumante, considerando quantos cigarros ele fuma dia e por quantos anos ja fumou.
	
	float qtdFumadoDias, qtdFumadoAnos, totalDias;
		
	cout<<"Quantos cigarros você fuma por dia: ";
	cin>>qtdFumadoDias;
	cout<<"Á quantos anos você fuma cigarro: ";
	cin>>qtdFumadoAnos;
	
	totalDias = ((qtdFumadoDias * qtdFumadoAnos) * 365 * 10 /1.440);
	
	cout<<fixed<<setprecision(1);
	cout<<"A quantidade de tempo perdido em dias é de "<<totalDias;
	
	return 0;
}