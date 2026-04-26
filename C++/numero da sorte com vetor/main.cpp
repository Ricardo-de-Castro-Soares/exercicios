#include <iostream>
#include <vector>
using namespace std;

void inputvetor(vector<int> &num){
	int numDigitado{};
	int numeroDaSorte1 = 3;
	
	cout<<"Digite 5 números";
	for(int i = 0; i < 5; i++){
		cout<<"\nNúmero: "<<i<<": ";
		cin>>numDigitado;
		num.push_back(numDigitado);
		
		if(numDigitado < 1 || numDigitado > 5){
			cout<<"Número invalido!! digite números entre [1/5]";
			
			num.pop_back();
			i--;
		}
	}
	
	for(int i = 0; i < 5; i++){
		if(num [i] == 3){
			cout<<"\nParabéns você acertou o número da sorte: "<<numeroDaSorte1;
		}
	}
}

int main()
{
	vector<int>num;
	
	inputvetor(num);
	
	
	return 0;
}