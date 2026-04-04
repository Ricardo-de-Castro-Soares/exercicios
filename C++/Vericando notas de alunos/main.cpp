#include <iostream>
using namespace std;

int main()
{	
	int aluno;	
	float nota1, nota2, nota3, media, soma, mediaGeral, mediaAuxiliar, aprovado = 0, reprovado = 0, maiorMedia = 0, menorMedia = 500;
	
	cout<<"Informe a quantidade de alunos que serão cadastrados: ";
	cin>>aluno;
	
	for(int i=1; i <= aluno; i++){
		
		cout<<"\n\n--- ALUNO "<<i<<" ---\n";
		
		do{
			cout<<"\nNota 1: ";
			cin>>nota1;
			if(nota1 < 0 || nota1 > 10){
				cout<<"Nota invalida! digite um valor entre 0 e 10.";
			}
		}while(nota1 < 0 || nota1 > 10);
		
		do{
			cout<<"\nNota 2: ";
			cin>>nota2;	

			if(nota2 < 0 || nota2 > 10){
				cout<<"Nota invalida! digite um valor entre 0 e 10.";		
			}
		}while(nota2 < 0 || nota2 > 10);
		
		do{
			cout<<"\nNota 3: ";
			cin>>nota3;
			
			if(nota3 < 0 || nota3 > 10){
				cout<<"Nota invalida! digite um valor entre 0 e 10.";			
			}
		}while(nota3 < 0 || nota3 > 10);
		
		soma = nota1 + nota2 + nota3;
		media = soma / 3;
		
		if(media > maiorMedia){
			maiorMedia = media;
		}
		if(media < menorMedia){
			menorMedia = media;
		}
		
		if(media >= 6){
			cout<<"\nMédia do aluno: "<<media;
			cout<<"\nSituação: Aprovado";
			aprovado++;
		}else{
			cout<<"\nMédia do aluno: "<<media;
			cout<<"\nSituação: Reprovado";
			reprovado++;
		}
		
		mediaAuxiliar+=media;
		mediaGeral = mediaAuxiliar / aluno;		
			
	}
	
		
	cout<<"\n===== REULTADO FINAL =====\n";
	cout<<"\nMédia geral da turma: "<<mediaGeral;
	cout<<"\nTotal de aprovados: "<<aprovado;
	cout<<"\nTotal de reprovados: "<<reprovado;
	cout<<"\nMaior média: "<<maiorMedia;
	cout<<"\nMenor média: "<<menorMedia;
	
	return 0;
}