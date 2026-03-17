programa
{
	
	funcao inicio()
	{
	real nota1, nota2, media

	escreva("Digite sua primeira nota: ")
	leia(nota1)
	escreva("Digite sua segunda nota: ")
	leia(nota2)

	media = (nota1 + nota2) /2

	se(media>=7){
		escreva("Aluno aprovado com media igual a ", media)
	}
	senao{
		escreva("Aluno reprovado com media igual a ", media)
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 289; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */