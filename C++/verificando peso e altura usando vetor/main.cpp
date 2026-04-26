#include <iostream>
#include <vector>
using namespace std;

	/*Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando
	no final

	a) Qual foi a média de altura do grupo
	b) Quantas pessoas pesam mais de 90Kg
	c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
	d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg.
	*/
	
void outputVetores(vector<double> &peso, vector<double> &altura){
	double soma{}, media{}, totalPeso90Kg{}, totalPeso50Altura160{}, totalPeso100Altura190{}, pesos, alturas;
	
	for(int i = 0; i < altura.size(); i++){
		soma+=altura[i];
	}	
	
	if(!altura.empty()){
		media = soma / altura.size();
	}else{
		cout<<"Não se pode dividir uma nota por zero";
	}

	for(int i = 0; i < peso.size(); i++){
		if(peso[i] >= 90){
			totalPeso90Kg++;
		}
		if(peso[i] <= 50 && altura[i] <= 1.60){
			totalPeso50Altura160++;
		}
		if(altura[i] >= 1.90 && peso[i] >= 100){
			totalPeso100Altura190++;
		}
	}
	
	cout<<"\nMedia de altura: "<<media<<"m";
	cout<<"\nTotal de pessoa com 90kg ou mais: "<<totalPeso90Kg;
	cout<<"\nTotal de pessoa com menos de 50kg e menores de 1.60m e de Altura: "<<totalPeso50Altura160;
	cout<<"\nTotal de pessoas com 100kg e maiores de 1.90m e de Altura: "<<totalPeso100Altura190;
}

void inputVetores(vector<double> &peso, vector<double> &altura){
	double pesos, alturas;
	
	cout<<"Digite a altura: \n\n";
	for(int i = 0; i < 7; i++){
		cout<<"Altura: ";
		cin>>alturas;
		altura.push_back(alturas);
		
		if(alturas > 2.25 || alturas < 0.81){
			cout<<"\nAltura invalida!!\n\n";
			
			altura.pop_back();
			i--;
		}
	}
	
	
	cout<<"\n\nDigite o peso: \n\n";
	for(int i = 0; i < 7; i++){
		cout<<"Peso ";
		cin>>pesos;
		peso.push_back(pesos);
		
		if(pesos < 8.1 || pesos > 500){
			cout<<"Peso invalido!!";
			
			peso.pop_back();
			i--;
		}
	}
	
	outputVetores(peso, altura);
}

int main()
{
	vector<double>peso;
	vector<double>altura;
	
	inputVetores(peso, altura);
	
	return 0;
}