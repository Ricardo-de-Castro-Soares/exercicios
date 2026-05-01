#include <iostream>
using namespace std;

int main()
{
	int matriz[3][3];
	
	for(int i = 0; i < 3; i++){//Adicionando os numeros na matriz
		for(int j = 0; j < 3; j++){
			cout<<"Adicione números as posições ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"\n";
	
	for(int i = 0; i < 3; i++){//Indentificando numeros pares e exibindo
		for(int j = 0; j < 3; j++){
			if(matriz[i][j] % 2 == 0){
				cout<<"{"<<matriz[i][j]<<"}"<<" ";
			}else{
				cout<<matriz[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}