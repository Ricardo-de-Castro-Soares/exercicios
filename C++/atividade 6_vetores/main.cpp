#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double>num;
	double numDigitados;
	
	for(int i = 0; i < 5; i++){
		cout<<"Preços: R$";
		cin>>numDigitados;
		num.push_back(numDigitados);
	}
	
	
	cout<<"\nProcessando pagamentos (do ultimo ao primeiro): ";
	while(!num.empty()){
		num.pop_back();
	
		if(!num.empty()){
			cout<<"\nProcessando: R$"<<num.back();
		}else{
			cout<<"\n\nFila vazia! Todos os pagamentos processados.";
		}
	}
	
	return 0;
}