#include <iostream>
using namespace std;

int main()
{
	int acumulador = 100;
	
	for(int i = 100; i > 0; i--){
		if(i == 100){
			cout<<"\nNúmero: "<<i;
		}
		
		i = acumulador-=10;
		cout<<"\nNúmero: "<<i;
	}
	
	return 0;
}
