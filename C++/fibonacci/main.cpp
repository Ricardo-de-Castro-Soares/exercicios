#include <iostream>
using namespace std;

int main()
{
	int soma, a = 0, b = 1;
	
	for(int i = 0; i <= 377; i++){
		if( i >= 0 && i <= 377){
		soma = a + b;
		
		a = b;
		b = soma;
		
		cout<<soma<<" ";
		}
	} 

	return 0;
}