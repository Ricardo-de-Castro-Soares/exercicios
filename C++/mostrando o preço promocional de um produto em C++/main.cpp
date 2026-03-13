#include <iostream>

using namespace std;
int main()
{
	float produto, precoPromocional;
	
	cout<<"Digite o preco do produto: ";
	cin>>produto;
	
	precoPromocional =(produto / 0.05);
	
	cout<<"O preco promocional do produto e de R$"<<precoPromocional;
	
	return 0;
}