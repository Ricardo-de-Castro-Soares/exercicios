#include <iostream>
using namespace std;

int main()
{
	//comparando se um numero é maior ou menor que o outro ou se são iguais
	
 	int num1, num2;
	
	cout<<"Digite um número: ";
	cin>>num1;
	cout<<"Digite outro número: ";
	cin>>num2;
	
	if(num1 > num2){
		cout<<"O primeiro Número é maior";
	}else if(num1 < num2){
		cout<<"O segundo número é maior";
	}else{
		cout<<"Os dois números são iguais";
	}
	
	return 0;
}