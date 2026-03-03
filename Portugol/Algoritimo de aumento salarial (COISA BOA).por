programa
{
	
	funcao inicio()
	{//leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.
	real salario, aumento
	cadeia nome

	escreva("=======Calculo de aumento======= \n" )
	escreva("Digite o nome do funcionario: ")
	leia(nome)
	escreva("Digite o salario atual do funcuionario: ")
	leia(salario)

	aumento = (salario * 0.15)

	escreva("\n=======Resultado=======\n")
	escreva("O Funcionario ", nome , " obteve um aumento salarial de R$", aumento)
	
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 433; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */