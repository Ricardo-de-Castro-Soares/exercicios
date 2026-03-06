programa
{
	
	funcao inicio()
	{
	inteiro qtdcigarros, quantosAnos, auxiliar, minutos, horas, dias

	escreva("Quantos cigarros você fuma por dia: ")
	leia(qtdcigarros)
	escreva("Já fazem quantos anos que você fuma: ")
	leia(quantosAnos)

	auxiliar = (qtdcigarros * 10)
	minutos = (auxiliar * 365)
	horas = (minutos / 60)
	dias = (horas / 24)

	escreva("A quantidade total de dias de vida perdio é de ", dias , " dias inteiros dentro de ", quantosAnos , " anos")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 37; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */