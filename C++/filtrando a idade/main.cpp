#include <iostream>
using namespace std;

int main()
{
	int idade, idadeMaior18,idadeMenores = 999, idadeMaiores = 0;
	bool idadeBool = true;
	
	
	while(idadeBool){
		cout<<"Digite a sua idade: ";
		cin>>idade;
		
		if(idade <= 0){
			idadeBool = false;	
		}else{
		if(idade >= 18){
			idadeMaior18++;
		}
		if(idade < idadeMenores){
			idadeMenores = idade;
		}
		if(idadeMaiores < idade){
			idadeMaiores = idade;
		}
		}
	}
	
	cout<<"\nMaiores de idade: "<<idadeMaior18;
	cout<<"\nMenor idade: "<<idadeMenores;
	cout<<"\nMaior idade: "<<idadeMaiores;
	
	return 0;
}