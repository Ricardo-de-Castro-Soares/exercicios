programa
{
	
	funcao inicio()
	{
	real qtddias, salario, auxiliar
	inteiro horasdia, horatrabalhada
	cadeia nome

	escreva("Escreva o nome do funcionario: ")
	leia(nome)
	escreva("Digite a quantidade de dias trabalhado: ")
	leia(qtddias)

	horasdia = (8)
	horatrabalhada = (25)
	auxiliar = (horasdia * horatrabalhada)
	salario = (auxiliar * qtddias)

	escreva("\n==========NOTA DO FUNCIONARIO==========\n")
	escreva("Nome do funcionario: ", nome , "\n")
	escreva("Dias trabalhados: ", qtddias , "\n")
	escreva("Total a receber de salario neste mês: R$", salario , "\n")
	escreva("=========================================\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 68; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */