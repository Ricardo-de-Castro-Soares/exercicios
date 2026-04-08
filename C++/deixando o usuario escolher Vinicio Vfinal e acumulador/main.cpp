#include <iostream>
using namespace std;

void exibirValores(int inicioV, int finalV, int a){
	if(inicioV < finalV){
		for(int i = inicioV; i <= finalV; i+=a)
		cout<<i<<" ";
	}else{
		for(int i = inicioV; i >= finalV; i-=a)
		cout<<i<<" ";	
	}
}

int main()
{		
	int inicioV, finalV, i, a;
	
	cout<<"Digite o valor de inicio: ";
	cin>>inicioV;
	cout<<"Digite o valor final: ";
	cin>>finalV;
	cout<<"Escolha o acumulo: ";
	cin>>a;
	cout<<"\n";
	
	exibirValores(inicioV,finalV, a);
	
	
	return 0;
}