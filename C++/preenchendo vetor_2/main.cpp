#include <iostream>
using namespace std;

int main()
{
	int num[10]{}, acumulador{};
	
	for(int i = 0; i < 10; i++){
		num[i] = acumulador+=5;
		
		cout<<"Vetor: "<<num[i]<<"\n";
	}
	
	return 0;
}