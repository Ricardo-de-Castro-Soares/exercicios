#include <iostream>
using namespace std;

int main()
{	 
	 float altura, peso, imc;
	 
	 cout<<"\n-----CALULANDO SEU IMC-----\n";
	 cout<<"\nDigite sua altura: ";
	 cin>>altura;
	 cout<<"Digite o seu peso: ";
	 cin>>peso;
	 
	 imc = peso / (altura * altura);
	 
	 if(imc >=18.5 && imc < 25){
	 	cout<<"\nIMC de "<<imc<<" NO PESO IDEAL";
	 }else if(imc > 25 && imc < 30){
	 	cout<<"\nIMC de "<<imc<<" EM SOBREPESO";
	 }else if(imc > 30 && imc < 40){
	 	cout<<"\nIMC de "<<imc<<" COM OBESIDADE";
	 }else{
	 	cout<<"\nIMC de "<<imc<<" COM OBESIDADE MORBIDA";
	 }
	
	return 0;
}