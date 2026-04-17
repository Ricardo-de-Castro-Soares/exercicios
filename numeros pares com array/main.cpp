#include <iostream>
using namespace std;

int main()
{
	int vetor[6] = {}, num, totaPares = {}, totalImpares = {};
	
	for(int i = 0; i < 6; i++){
		cout<<"Digite os números: ";
		cin>>vetor[i];
		
		if(vetor[i] % 2 == 0){
			totaPares = totaPares + 1;
		}else{
			totalImpares = totalImpares + 1;
		}
	}
	
	cout<<"\nTotal de Pares: "<<totaPares;
	cout<<"\nToal de Impares: "<<totalImpares;
	
	return 0;
}