#include <iostream>
using namespace std;

int main()
{
	int soma = 0;
	
	for(int i = 6; i <= 100; i+=2){
		soma += i;		
	}
	
	cout<<soma<<" ";
	
	return 0;
}