#include <iostream>
using namespace std;

void calculoDaMedia(char A,char a){
	float soma = 0, num, media;
	
	for(int i = 1; i <= 3; i++){
		cout<<"\nDigite as suas notas: ";
		cin>>num;
		soma+=num;
		
		media = soma / 3;
	}
	
	cout<<"\nA media aritmetica: "<<media;
}

void calculoPonderado(char P, char p){
	float peso1 = 2, peso2 = 3, peso3 = 5, num1, num2, num3, media;
	
	cout<<"Digite a primeira nota: ";
	cin>>num1;
	cout<<"Digite a segunda nota: ";
	cin>>num2;
	cout<<"Digite a terceira nota: ";
	cin>>num3;
	
	media = (num1 * peso1 + num2 * peso2 + num3 * peso3) / (peso1 + peso2 + peso3); 
	
	cout<<"A Media ponderada: "<<media;
}

void calculoHarmonica(char H,char h){
	float num, media, soma = 0;
	
	for(int i = 1; i <= 3; i++){
		cout<<"Digite as suas notas: ";
		cin>>num;
		soma+=(1/num);
		
		media = 3.0 / soma;		
	}
	
	cout<<"A media harmonica: "<<media;
}

int main()
{
	char A, a, P, p, H, h, letra;
	
	cout<<"Digite uma letra: (A, H, P): ";
	cin>>letra;
		
	if(letra == 'A' || letra == 'a'){
		calculoDaMedia(A, a);

	}else if(letra == 'P' || letra == 'p'){
		calculoPonderado(P, p);
	}else if(letra == 'H' || letra == 'h'){
		calculoHarmonica(H, h);
	}
	
	return 0;
}