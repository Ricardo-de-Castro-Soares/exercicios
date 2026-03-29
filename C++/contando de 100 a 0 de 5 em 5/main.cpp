#include <iostream>
using namespace std;

int main()
{
	int contador = 100;
	
	while(contador >= 0){
		cout<<"\nNúmero: "<<contador;
		contador-=5;
	}
	
	return 0;
}