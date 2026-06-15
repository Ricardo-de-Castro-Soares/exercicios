#include <iostream>
using namespace std;

int main()
{
	int termo{}, razao{}, soma{};
	
	cout<<"Escreva o Primeiro termo da PA: ";
	cin>>termo;
	cout<<"Escreva a Razão da PA: ";
	cin>>razao;
	
	cout<<"Todos os termos: ";
	for(int i = 1; i <= 10; i++){
		termo+=razao;
		
		cout<<termo<<", ";
		
		soma+=termo;
	}
	
	cout<<"Soma total dos termos: "<<soma;
	
	return 0;
}