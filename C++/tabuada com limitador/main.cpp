#include <iostream>
using namespace std;

int main()
{
	int num{};
	bool entrada = true;
	
	while(entrada){
		cout<<"Escreva um numero: ";
		cin>>num; cout<<"\n";
	
		if(num > 100){
			cout<<"Numero invalido aceitamos numeros até [100]\n\n";
		}else{
			entrada = false;
		}
	}
	
	for(int i = 1; i <= 10; i++){
		cout<<num<<" x "<<i<<" = "<<num * i<<"\n";
	}
	
	return 0;
}