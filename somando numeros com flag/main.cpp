#include <iostream>
#include <vector>
using namespace std;
	
void exibindoSoma(int soma){
	
	cout<<"Soma dos valores digitado: "<<soma;
}

int somando(vector<int> &num, int numS){
	bool saida = true;
	int soma{};
	
	while(saida == true){
		cout<<"Número: ";
		cin>>numS;
		
		if(numS == 1111){		
			saida = false;
		}else{
			num.push_back(numS);
			soma+=numS;
		}
	}
	
	exibindoSoma(soma);
	
	return soma;
}

int main()
{
	vector<int>num{};
	int numS{};
	
	somando(num, numS);
	
	return 0;
}