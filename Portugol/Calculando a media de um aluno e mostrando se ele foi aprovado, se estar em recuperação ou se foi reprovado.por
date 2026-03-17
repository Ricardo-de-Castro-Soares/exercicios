programa
{
	
	funcao inicio()
	{
	//Calculando a media de um aluno e mostrando se ele foi aprovado, se estar em recuperação ou se foi reprovado
 
 	real nota1, nota2, media

 	escreva("Digite sua primeira nota: ")
 	leia(nota1)
 	escreva("Digite sua segunda nota: ")
 	leia(nota2)

 	media = (nota1 + nota2) /2

	se(media >= 11){
		escreva("Nota invalida")
	}senao se(media <= 4.9){
 		escreva("Media: ",media," Aluno reprovado")
 	}senao se((media == 5.0) e (media <= 6.9)){
 		 escreva("Media: ",media," Aluno em recuperação")
 	}senao{
 		escreva("Media: ",media," Aluno aprovado")
 	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 148; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */