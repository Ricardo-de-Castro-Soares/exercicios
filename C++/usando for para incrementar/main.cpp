#include <iostream>
using namespace std;

int main()
{
	int acumulador{};
	 
	for(int i = 0; i < 40; i++){
		if(i == 0){
			cout<<"\nNúmero: "<<i;
		}
	
		i = acumulador+=5;
		cout<<"\nNúmero: "<<i;
	}
	
	return 0;
}