#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool saida = true;
	string sexo;
	double peso{}, homensPesamAcima100{}, qtdFeminino{}, media{}, maiorPeso{};

	
	for(int i = 1
	; i <= 8; i++){	
		cout<<"Digite o sexo ["<<i<<"]: " ;
		cin>>sexo;
		
		if(sexo == "M" || sexo == "m" || sexo == "F" || sexo == "f"){
			cout<<"Sexo valido...\n\n";
			
			if(sexo == "F" || sexo == "f"){
				qtdFeminino++;
			}
		}else{
			cout<<"Sexo invalido\n\n";
			i--;
		}
		
		cout<<"Digite o peso ["<<i<<"]: ";
		cin>>peso;
		
		if(peso <= 450){
			cout<<"Peso valido...\n\n";
			
			if(sexo == "M" || sexo == "m" && peso >= 100){
				homensPesamAcima100++;
			}
			if(maiorPeso < peso){
				maiorPeso = peso;
				
				if(maiorPeso > peso) maiorPeso = peso;
			}
			
			if(sexo == "F" || sexo == "f"){
				media = peso / qtdFeminino;
			}
		}else{
			cout<<"Peso invalido...\n\n";
			i--;
		}
	}
	
	cout<<"Quantidade de pessoas do sexo Feminio: "<<qtdFeminino<<"\n";
	cout<<"Quantidade Homens com peso acima de 100Kg: "<<homensPesamAcima100<<"\n"; 
	cout<<"Media de peso das mulheres: "<<media<<"\n";
	cout<<"Maior peso resgistrado entre os homens: "<<maiorPeso<<"\n";
	
	
	return 0;
}