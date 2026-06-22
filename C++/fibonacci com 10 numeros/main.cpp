#include <iostream>
using namespace std;

int main()
{
	int fibonacci{}, numAtual = 1, numAnterior{};
	
	for(int i = 1; i <= 10; i++){		
		fibonacci = (numAtual) + (numAnterior);
		
		cout<<fibonacci<<" ";
		
		numAtual = numAnterior;
		numAnterior = fibonacci;
	}
	
	return 0;
}