#include <iostream>
#include <string>
using namespace std;

	/*Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:

	a) Quantos homens foram cadastrados
	b) Quantas mulheres foram cadastradas
	c) A média de idade do grupo
	d) A média de idade dos homens
	e) Quantas mulheres tem mais de 20 anos*/
	
	/*recebe a idade e o sexo da pessoa idividual 5 total ---> if (usei swicth case) == homem monstrar total ---> if (usei swicth case) == mulheres monstrar total 
	---> calcular a media de idade total e a de homens ---> mulheres de 20 anos*/
	
void calculoDeinformacoes(int idade[], char sexo[], int tamanho){
	double mediaIdadeTotal = {}, somaTotal = {}, somaTotalHomens = {}, mediaIdadeTotalHomens = {};
	int qtdHomens = {},	qtdMulheres = {}, qtdMulheres20 = {};
	
	for(int i = 0; i < tamanho; i++){
		switch(sexo[i]){
			case 'M':
			case 'm':
				qtdHomens++;
				somaTotalHomens+=idade[i];
				mediaIdadeTotalHomens = somaTotalHomens / qtdHomens;
				break;
			case 'F':
			case 'f':
				qtdMulheres++;
				if(idade[i] > 20){
					qtdMulheres20++;
				}
				break;
		}
		
		somaTotal+=idade[i];
		mediaIdadeTotal = somaTotal / tamanho;
	}
	
	cout<<"\nTotal de homens: "<<qtdHomens;
	cout<<"\nTotal de Mulheres: "<<qtdMulheres;
	cout<<"\nA media de idade Total: "<<mediaIdadeTotal;
	cout<<"\nA media de total dos homens: "<<mediaIdadeTotalHomens;
	cout<<"\nTotal de mulheres com acima de 20 anos: "<<qtdMulheres20;
		
}
	
void inputInformacoes(int idade[], char sexo[], int tamanho){
	int qtdHomens = {},	qtdMulheres = {};
	
	for(int i = 0; i < tamanho; i++){
		cout<<"\n============== CADASTRO ==============";
		cout<<"\nDigite Seu Sexo [M/F]: ";
		cin>>sexo[i];
		cout<<"Digite Sua Idade: ";
		cin>>idade[i];
		
		system("cls");		
	}
	
	calculoDeinformacoes(idade, sexo, tamanho);
}

int main()
{
	int vetorIdade[5] = {}, tamanho = 5;
	char vetorSexo[5] = {};
	
	inputInformacoes(vetorIdade, vetorSexo, tamanho);
	
	return 0;
}