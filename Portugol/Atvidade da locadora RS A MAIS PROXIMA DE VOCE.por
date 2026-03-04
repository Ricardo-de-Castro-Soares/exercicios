programa
{
	
	funcao inicio()
	{
	real qtdpercorridaKM, precototal, qtddias, preco1, preco2
	
	escreva("          =======LOCADORA RS=======\n\n")
	escreva("Digite a quantidade de Km percorrida com o carro: ")
	leia(qtdpercorridaKM)
	escreva("Digite a quantidade de dias que o locatario utilizou o carro: ")
	leia(qtddias)
	
	preco1 = (qtddias + 90)
	preco2 = (qtdpercorridaKM * 0.20)
	precototal = (preco1 + preco2)

	escreva("\n==========NOTA DA LOCADORA==========\n")
	escreva("Quilometros percorrido: ", qtdpercorridaKM , "Km\n")
	escreva("Total de dias alugado: ", qtddias , "\n")
	escreva("Total a pagar: R$", precototal , "\n")
	escreva("======================================\n")
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 98; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */