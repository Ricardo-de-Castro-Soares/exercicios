#include <iostream>
#include <vector>
using namespace std;

void outputAlunosMediaIdade(int &AlunosExistem, double &media)
{
	cout<<"\nO total de alunos: "<<AlunosExistem;
	cout<<"\nA media de idade: "<<media;
}	
	
double inputIdades(vector<int>&idade)
{
	int idades{}, AlunosExistem{}, soma{};
	bool saida = true;
	double media{};

	cout<<"Digite a idade dos alunos: ";	
	while(saida == true){
		cout<<"\nIdade: ";
		cin>>idades;
		
		if(idades == 999){
			saida = false;
		}else if(idades >= 131){
			cout<<"A idade maxima permitida é 130 Anos";
		}else{
			idade.push_back(idades);
			soma+=idades;
			AlunosExistem++;
			
			if(!idade.empty()){
				
				media = soma/AlunosExistem;
			}	
		}
	}
	
	outputAlunosMediaIdade(AlunosExistem, media);
	
	return 0;
}	

int main()
{
	vector<int>idade{};
	
	inputIdades(idade);
	
	return 0;
}