#include <iostream>

using namespace std;
int main()
{
	int num1, num2, num3;
	
	cout<<"Digite o primeiro numero: ";
	cin>>num1;
	cout<<"Digite o segundo numero: ";
	cin>>num2;
	
	num3 = (num1 + num2);
	
	cout<<"\n---------------------------------------------------";
	cout<<"\nSOMA\n\n";
	cout<<"A soma entre "<<num1<<" e "<<num2<<" e igual a "<<num3;
	cout<<"\n----------------------------------------------------";
	return 0;
}