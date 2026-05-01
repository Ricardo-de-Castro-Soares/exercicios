#include <iostream>
using namespace std;

int main()
{
	int matriz[3][2];
	
	for(int i = 0; i < 3; i++){//Lendo valores e adicionando na matriz
		for(int j = 0; j < 2; j++){
			cout<<"Adicnione um número a matriz ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){//exibindo a matriz
		for(int j = 0; j < 2; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}