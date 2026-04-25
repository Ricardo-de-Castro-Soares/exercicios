#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;


void inputVetores(vector<string>&nome, vector<double>&nota){
	string nomes;
	double notas{}, soma{}, media{}, totalAcimaDaMedia{};
	
	cout<<"Digite o nome do aluno: ";
	for(int i = 0; i < 3; i++){
		cout<<"\nNome: ";
		cin>>nomes;
		nome.push_back(nomes);
		
		bool temNumero = false;
		for(char c : nomes){
			if (isdigit(c)){
				temNumero = true;
				break;
			}
		}
		
		if(temNumero){
			cout<<"Numeros não são validos!! Apenas nomes";
			
			nome.pop_back();
  			i--;
		}
	}
	
	
	cout<<"\nDigite as notas ";
	for(int i = 0; i < 3; i++){	
		cout<<"\nDigite a nota do Aluno "<<nome.at(i)<<": ";
		cin>>notas;
		nota.push_back(notas);
		
		
		if(notas < 0 || notas > 10){
			cout<<"\nNota invalida!! Digite uma nota entre  [0 e 10]";
			
			nota.pop_back(); 
  			i--; 
		}else{
			soma+=notas;
			media = soma / i;
		}
		if(notas > 7){
			totalAcimaDaMedia++;
		}
	}

	cout<<"\n\nAlunos aprovados: ";
	for(int i = 0; i < 3; i++){
		if(nota.at(i) >= 7){
			cout<<"\nAluno: "<<nome.at(i)<<" com media: "<<nota.at(i);
		}
	}
	
	cout<<"\n\nAlunos em Recupeção: ";
	for(int i = 0; i < 3; i++){
		if(nota.at(i) >= 6 && nota.at(i) < 7){
			cout<<"\nAluno: "<<nome.at(i)<<" com media: "<<nota.at(i);
		}
	}
	
	cout<<"\n\nAlunos Reprovados: ";
	for(int i = 0; i < 3; i++){
		if(nota.at(i) <= 5.9){
			cout<<"\nAluno: "<<nome.at(i)<<" com media: "<<nota.at(i);
		}
	}		
	
	cout<<"\n\nMedia da Turma: "<<media;
	cout<<"\nTotal de alunos acima da media: "<<totalAcimaDaMedia;
}

int main()
{
	vector<string>nome;
	vector<double>nota;

	inputVetores(nome, nota);
	
	return 0;
}