#include <iostream>
using namespace std;

int main()
{
	int num[7] = {}, soma = {};
	
	for(int i = 0; i < 7; i++){
		cout<<"Digite os números: ";
		cin>>num[i];
		soma+=num[i];
	}

	cout<<"\nA soma do números digitado é: "<<soma;
	
	return 0;
}