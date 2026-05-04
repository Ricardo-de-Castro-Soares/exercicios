#include <iostream>
#include <vector>
using namespace std;

void outputValores(vector<int>&filho, vector<double>&salario, int filhos)
{
	int contador150{};
	double somaSalarios{}, mediaSalario, somaFilhos{}, mediaFilhos{}, maiorSalario{}, porcentagemPessoas{};
	
	for(int i = 0; i < 10; i++){
		if(filhos < 1 || filhos > 10){
			cout<<"A você precisa ter no minimo 1 filho, e uma renda minima de R$800 Mês";
			
			filho.pop_back();
			salario.pop_back();
			i--;				
		}else{
			somaFilhos+=filho[i];
		
			somaSalarios+=salario[i];	
				
			if(salario[i] > maiorSalario) maiorSalario = salario[i];
			if(salario[i] <= 150){
				contador150++;
			}
		}
	}
	
	mediaFilhos = somaFilhos / 10;	
	mediaSalario = somaSalarios / 10;
	
	porcentagemPessoas = ( (double)contador150 / 10) * 100;
	
	cout<<"\nMedia de filhos: "<<mediaFilhos;
	cout<<"\nMedia de salario: R$"<<mediaSalario;
	cout<<"\nMaior salario registrado: R$"<<maiorSalario;
	cout<<"\nPorcentagem de pessoas que ganham até R%150: "<<porcentagemPessoas<<"%";
}


void inputValores(vector<int>&filho, vector<double>&salario)
{
	int filhos{};
	double salarios{};
	
	cout<<"=========== REGISTRO FAMILIAR ===========";
	for(int i = 0; i < 10; i++){
		cout<<"\nFamilia ["<<i<<"]";
		cout<<"\nInforme quantos filhos possui: ";
		cin>>filhos;
		filho.push_back(filhos);
		
		cout<<"Digite o seu salario: ";
		cin>>salarios;
		salario.push_back(salarios);
	}
	
	outputValores(filho, salario, filhos);
}


int main()
{
 	vector<int>filho;
	vector<double>salario;
	
	inputValores(filho, salario);
	
	return 0;
}