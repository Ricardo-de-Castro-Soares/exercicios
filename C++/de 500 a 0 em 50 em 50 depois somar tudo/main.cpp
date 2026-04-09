#include <iostream>
using namespace std;

int main()
{
	int soma = 0;

	for(int i = 500; i >= 0; i-=50){
		soma += i;
	}
	
	cout<<soma;
	
	
	return 0;
}