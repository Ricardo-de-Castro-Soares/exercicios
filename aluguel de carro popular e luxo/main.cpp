#include <iostream>
using namespace std;

int main()
{
	 int opcao, diasAlugado, totalPagarDiasLuxo, diasLuxoAlugado;
	 float quilometrosRodado, totalPagarDiasPopular, totalPagarKm100, totalPagarKmAcima100, totalPagarKm200, totalPagarkmAcima200;
	 
	 cout<<"\n------LOCADORA DE VEÍCULOS------\n";
	 cout<<"\nESCOLHA O TIPO DE CARRO ALUGADO";
	 cout<<"\n[1] Carro Popular --- [2] Carro de Luxo";
	 cout<<"\nEscolha uma opção: ";
	 cin>>opcao;
	 cout<<"\nPor quantos dias pretende alugar o carro: ";
	 cin>>diasAlugado;
	 cout<<"Quantos km pretende andar: ";
	 cin>>quilometrosRodado;
	 
	 
	 totalPagarDiasPopular = diasAlugado * 90;
	 totalPagarDiasLuxo = diasLuxoAlugado * 150;
	 
	 
	  if(opcao == 1 && quilometrosRodado <= 100){
	  	totalPagarKm100 = (quilometrosRodado * 0.20) + totalPagarDiasPopular;
	  	
	 	cout<<"O aluguel diario fica R$"<<totalPagarDiasPopular<<" e pagará um total de R$"<<totalPagarKm100<<" Pelos dias + KM rodado";
	 }else if(opcao == 1 && quilometrosRodado > 100){
	 	totalPagarKmAcima100 = (quilometrosRodado * 0.10) + totalPagarDiasPopular;
	 	
	 	cout<<"O aluguel diario fica R$"<<totalPagarDiasPopular<<" e pagará um total de R$"<<totalPagarKmAcima100<<" Pelos dias + KM rodado";
	 }else if(opcao == 2 && quilometrosRodado <=200){
	 	totalPagarKm200 = (quilometrosRodado * 0.30) + totalPagarDiasLuxo;	 	
	 	
	 	cout<<"O aluguel diario fica R$"<<totalPagarDiasLuxo<<" e pagará um total de R$"<<totalPagarKm200<<" Pelos dias + KM rodado";
	 }else if(opcao == 2 && quilometrosRodado > 200){
		totalPagarkmAcima200 = (quilometrosRodado * 0.25) + totalPagarDiasLuxo;
		
		cout<<"O aluguel diario fica R$"<<totalPagarDiasLuxo<<" e pagará um total de R$"<<totalPagarkmAcima200<<" Pelos dias + KM rodado";
	 }
	return 0;
}