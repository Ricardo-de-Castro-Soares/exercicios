programa
{
	
	funcao inicio()
	{//leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto./ PREÇO PROMOCIONAL = (produto x 0.05)
	real produto, precoPromocional
	cadeia nome

	escreva("=======Vericando preço propocional======= \n\n")

	escreva("Digite o nome do produto: ")
	leia(nome)
	escreva("Digite o preço do produto escolhido: ")
	leia(produto)

	precoPromocional = (produto * 0.05)


	escreva("\n=======Nota promocional=======\n")
	escreva("Nome do Produto: ", nome , "\n")
	escreva("Preço do Produto: R$", produto , "\n")
	escreva("Preço promocional: R$", precoPromocional , "\n")
	escreva("==============================")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 596; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */