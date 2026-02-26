programa
{
	
	funcao inicio()
	{
	real salario, mult , vendas, soma
	cadeia nome

	 escreva("Digite seu nome: ")
	 leia(nome)
	 escreva("Digite seu salario: ")
	 leia(salario)
	 escreva("Qual o valor total de vendas feitas nesse mês: ")
	 leia(vendas)

	 mult = (vendas * 0.15)
	 soma = (salario + mult)
	 escreva("O vendedor ", nome , " que ganha R$", salario , " por mês fixo e fez um total de R$", vendas , " neste mês, ganhando um total de R$", mult ,"\n", " de comissão, ganhou ao final do mês um total de R$", soma)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 80; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */