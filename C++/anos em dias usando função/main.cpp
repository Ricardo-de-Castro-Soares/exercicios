#include <iostream>
using namespace std;

void idadeEmDias(int anos,int dias,int meses,int diasTotaisDepois){
		
	diasTotaisDepois = (anos * 365) + (meses * 30) + dias;
	
	cout<<"\nEsse é o total de dias que se passaou desde o seu aniversario: "<<diasTotaisDepois;
}

int main()
{
	 int anos, dias, meses, diasTotaisDepois;
	 
	 cout<<"Quantos anos você tem: ";
	 cin>>anos;
	 cout<<"Quntos dias já se passaram: ";
	 cin>>dias;
	 cout<<"Quantos meses se passaram: ";
	 cin>>meses;
	
	 idadeEmDias(anos, dias, meses, diasTotaisDepois);
	 
	return 0;
}