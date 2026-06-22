#include <iostream>
using namespace std;

int main()
{
	int num[10], decremento{9};
	
	for(int i = 0; i < 10; i++){
		num[i] = decremento--;
		
		cout<<"Vetor: "<<num[i]<<"\n";
	}
	
	return 0;
}