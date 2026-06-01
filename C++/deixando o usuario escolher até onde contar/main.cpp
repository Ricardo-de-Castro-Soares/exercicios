#include <iostream>
using namespace std;

int main()
{
	int num;
	
	do{
		cout<<"Digite um número: ";
		cin>>num;
		
	}while(num < 0);
	
	for(int i = 0; i <= num; i++){
		cout<<"\nNumero: "<<i;
	}
	
	return 0;
}