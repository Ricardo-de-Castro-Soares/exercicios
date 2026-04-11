#include <iostream>
using namespace std;

int main()
{
	int num, i;
	
	cout<<"Digite um número: ";
	cin>>num;
	
	for(int i = 1; i <= 10; i++){
		cout<<"\n"<<num<<" x "<<i<<" = "<<num * i;
	}
	
	return 0;
}