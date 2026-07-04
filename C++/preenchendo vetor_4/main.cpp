#include <iostream>
using namespace std;

int main()
{
	int num[10], acumulator{10};
	
	for(int i = 10; i > 0; i--){
		
		num[i] = acumulator--;
				
		cout<<"Vetores: "<<num[i]<<"\n";
	}
}