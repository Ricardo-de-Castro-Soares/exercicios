#include <iostream>

using namespace std;
int main()
{
	float num1, num2, media;
	
	cout<<"Digite sua primeira nota: ";
	cin>>num1;
	cout<<"Digite sua segunda nota: ";
	cin>>num2;
	
	media = (num1 + num2)/2;
	
	cout<<"A media entre "<<num1<<" e "<<num2<<" e igual a "<<media;
	
	return 0;
}