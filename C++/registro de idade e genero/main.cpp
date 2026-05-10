#include <iostream>
#include <vector>
#include <string>
using namespace std;
	
void inputIdadeEgenero(vector<string>genero, vector<double>idade)
{
	string generos;
	bool saida = true, saida2 = true, saida3 = true;
	int opcao, idades{}, maiorIdades{}, qtdMasculino{}, menorFeminina{}, idadeMasculina{};
	char escolha{};
	
	do{
		cout<<"\n[1] Digite o sexo e a idade da pessoa";
		cout<<"\n[0] Sair";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;
		
		saida = true;
		
		switch(opcao){
			case 1:
				while(saida == true){
					while(saida2 == true){
						cout<<"\nDigite o seu sexo: ";
						cin>>generos;
					
						if(generos == "m" || generos == "M"){
							genero.push_back(generos);
							qtdMasculino++;
							saida2 = false;
						}else if(generos == "masculino" || generos == "Masculino"){
							genero.push_back(generos);
							qtdMasculino++;
							saida2 = false;
						}else if(generos == "f" || generos == "F"){
							genero.push_back(generos);
							saida2 = false;
						}else if(generos == "feminino" || generos == "Feminino"){
							genero.push_back(generos);
							saida2 = false;
						}else{
							cout<<"\nApenas é aceito Masculino e Feminino ou [M/m] Para masculino e [F/f] para feminino";
						}
					}
					
					while(saida3 == true){
						cout<<"Digite a sua idade: ";
						cin>>idades;
						
						if(idades >= 132 || idades <= 0){
							cout<<"\nIdade invalida";	
						}else{					
							if(idades > maiorIdades){
								maiorIdades = idades;
							}
							if(generos == "f" || generos == "F" || generos == "feminino" || generos == "Feminino"){									
								if(idades > menorFeminina){
									menorFeminina = idades;
								}else{
									if(idades < menorFeminina) menorFeminina = idades;
								}
							}
							if(generos == "m" || generos == "M" || generos == "masculino" || generos == "Masculino"){
								if(idades > idadeMasculina){
									idadeMasculina = idades;
								}
							}
						
							idade.push_back(idades);
							saida3 = false;
						}
					}
					
					cout<<"\nDeseja continuar [S/N]: ";
					cin>>escolha;
					
					
					if(escolha == 'N' || escolha == 'n'){
						saida = false;
					}else{
						escolha++;
						saida2 = true;
						saida3 = true;
					}
				}
				break;
			
		}
	}while(opcao != 0);
	
	cout<<"\nMaior idade registrada: "<<maiorIdades;
	cout<<"\nQuantidade de homens: "<<qtdMasculino;
	cout<<"\nMaior idade Masculina registrada: "<<idadeMasculina;
	cout<<"\nMenor idade Feminina registrada: "<<menorFeminina;
}

int main()
{
	vector<string>genero;
	vector<double>idade;
	
	inputIdadeEgenero(genero, idade);
	
	return 0;
}