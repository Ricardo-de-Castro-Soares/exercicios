#include <iostream>

using namespace std;
int main()
{
	float num, dobro, tercaParte;
	
	cout<<"Digite uma numero decimal: ";
	cin>>num;
	
	dobro = (num * 2);
	tercaParte = (num / 3);
	
	cout<<"O dobro do "<<num<<" e "<<dobro<<"\nA terca parte de "<<num<<" e "<<tercaParte;
	
	return 0;
}