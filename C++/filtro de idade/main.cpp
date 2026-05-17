#include <iostream>
#include <string>
using namespace std;

void informacoes(string nome, string sexo, int &idade)
{
	bool saida = false;
	char opcao{};
	string nomePessoaMaisVelha, nomeMaisVelhaMulheres;
	int qtdHomensMais30{}, qtdMulheresMenos18{}, auxiarNVmais{}, auxiliarNVMulher{};
	double media;
	
	do{
		cout<<"Digite o nome: ";
		cin>>nome;
		
		while(saida == false){
			cout<<"Digite o sexo: ";
			cin>>sexo;
			
			if(sexo == "Feminino" || sexo == "feminino" || sexo == "F" || sexo == "f"){
				saida = true;	
			}else if(sexo == "Masculino" || sexo == "masculino" || sexo == "M" || sexo == "m"){
				saida = true;
			}else{
				cout<<"\nApenas é aceito as letras [F/M] e os nomes [Feminino/Masculino] Tente novamente: \n";
			}
		}
		
		saida = false;
		
		while(saida == false){
			cout<<"Digite sua idade: ";
			cin>>idade;
			
			if(idade > 130 || idade < 1){
				cout<<"Idade invalida!! APENAS É ACEITA IDADES ENTRE [130/1] tente novamente: \n";
			}else if(auxiarNVmais < idade || auxiliarNVMulher < idade){
				auxiarNVmais = idade;
				auxiliarNVMulher = idade;
			
				if(idade >= auxiarNVmais || idade >= auxiliarNVMulher){
					auxiarNVmais = idade;
					nomePessoaMaisVelha = nome;
					
					if(sexo == "Feminino" || sexo == "feminino" || sexo == "F" || sexo == "f"){
						nomeMaisVelhaMulheres = idade;
						nomeMaisVelhaMulheres = nome;
						
						if(idade < 18){
							qtdMulheresMenos18++;
						}
					}
					if(sexo == "Masculino" || sexo == "masculino" || sexo == "M" || sexo == "m"){
						if(idade > 30){
							qtdHomensMais30++;
						}
					}
	
					saida = true;
				}
			}
		}
		
		cout<<"Deseja continuar o registro [S/N]: ";
		cin>>opcao;
		
		saida = false;
	}while(opcao == 'S' || opcao == 's');
	
	cout<<"\nPessoa mais velha: "<<nomePessoaMaisVelha;
	cout<<"\nNome da mulher mais velha: "<<nomeMaisVelhaMulheres;
	cout<<"\nQuantidade de homens acima de 30 anos: "<<qtdHomensMais30;
	cout<<"\nQuanridade de mulheres menor de 18: "<<qtdMulheresMenos18;
}

int main()
{
	string nome, sexo;
	int idade;
	
	informacoes(nome, sexo, idade);
	
	
	return 0;
}