#include <iostream>
using namespace std;

int main()
{
	int soma = 0, num;
	
	for(int i = 1; i <= 7; i++){
		cout<<"Digite um número: ";
		cin>>num;
		soma+=num;
	}
	
	cout<<"\nA soma é igual a: "<<soma;	
	
	return 0;
}