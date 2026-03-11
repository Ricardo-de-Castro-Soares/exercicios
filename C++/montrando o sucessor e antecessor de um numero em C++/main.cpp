#include <iostream>

using namespace std;
int main()
{
	int num, antecessor, sucessor;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	antecessor = (num - 1);
	sucessor =(num + 1);
	
	cout<<"O anteceso de "<<num<<" e "<<antecessor<<"\n"<<"O sucessor "<<num<<" e "<<sucessor;
	
	return 0;
}