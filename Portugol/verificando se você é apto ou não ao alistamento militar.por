programa
{
	
	funcao inicio()
	{
	inteiro anoNascimento, anoAtual, idade, anosPassados, anosRestantes

	escreva("Digite ano qem que nasceu: ")
	leia(anoNascimento)
	escreva("Digite o ano atual: ")
	leia(anoAtual)

	idade = (anoNascimento - anoAtual)
	anosPassados = idade - 18
	anosRestantes = 18 - idade

	se(idade > 18){
		escreva("Sua idade é igual a ", idade ," Ja se passaram ", anosPassados , " anos  do alistamento militar")
	}
	senao se(idade == 18){
		escreva("Sua idade é igual a ", idade ," apto para o alitamento militar")
	}
	senao{
		escreva("Sua idade é igual a ", idade , " ainda faltam ", anosRestantes , " anos para o alistamento")
	}
	}	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 310; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */