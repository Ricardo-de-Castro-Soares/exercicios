#include <iostream>
using namespace std;

int main()
{
	//calculando a media de aluno
	 
	 float nota1, nota2, media;
	 
	 cout<<"Digite a primeira nota do aluno: ";
	 cin>>nota1;
	 cout<<"Digite a segundo nota do aluno: ";
	 cin>>nota2;
	 
	 media = (nota1 + nota2) /2;
	 
	 if(media <= 4.9){
	 	cout<<"\nAluno com media "<<media<<" portanto foi REPROVADO";
	 }else if(media >= 5 && media <= 6.9){
	 	cout<<"\nAluno com media "<<media<<" portanto o ALUNO ESTARÁ EM RECUPEÇÃO";
	 }else if(media >= 7 && media <= 10){
	 	cout<<"\nAluno com media "<<media<<" portanto o ALUNO ESTAR APROVADO";
	 }else{
	 	cout<<"\nMEDIA INVALIDA\n";
	 }
	
	return 0;
}