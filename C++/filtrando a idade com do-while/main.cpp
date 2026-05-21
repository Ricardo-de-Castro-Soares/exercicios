#include <iostream>
using namespace std;

void outputInfomacoes(int &totalIdades, int &idade21, double &media)
{
	cout<<"\n\nTotal de idades digitadas: "<<totalIdades;
	cout<<"\nA media de idade: "<<media;
	cout<<"\nPessoas com idade maior que 21: "<<idade21;
}	
	
void inputIdade(int &idade)
{
	bool saida = false;
	char opcao;
	int soma{}, idade21{}, totalIdades{};
	double media{};
	
	do{
		while(saida == false){
			cout<<"Digite sua idade: ";
			cin>>idade;
			
			if(idade >= 131 || idade <= 0){
				cout<<"Idade invalida!! Tente novamente: \n";
			}else{
				totalIdades++;
				soma+=idade;
				
				if(idade >= 21){
					idade21++;
				}
				
				media = soma / totalIdades;
				saida = true;
			}
		}
		
		cout<<"Deseja registrar mais uma idade? [S/N]";
		cin>>opcao;
		
		if(opcao == 'S' || opcao == 's'){
			saida = false;
		}
		
	}while(opcao == 'S' || opcao == 's');
	
	outputInfomacoes(totalIdades, idade21, media);
}

int main()
{
	int idade;
	
	inputIdade(idade);
	
	return 0;
}