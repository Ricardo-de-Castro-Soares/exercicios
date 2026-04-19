#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	
void inputVetores(int rodadas){
	
	int totalAcima5 = 0, divisivelPor3 = 0;
	
	for(int i = 0; i < rodadas; i++){
			int numero = rand() % 11;
			
			cout<<"\nNúmeros sorteados: "<<numero;
			
			if(numero > 5){
				totalAcima5++;
			}
			if(numero / 3){
				divisivelPor3++;
			}
	}
	
	cout<<"\n\nNumeros acima de 5: "<<totalAcima5<<" ";
	cout<<"\nNumeros divisiveis por 3: "<<divisivelPor3<<" ";
}


int main()
{
	srand(time(0));
	int numSorteio = 20;
	
	inputVetores(numSorteio);
	
	return 0;
}