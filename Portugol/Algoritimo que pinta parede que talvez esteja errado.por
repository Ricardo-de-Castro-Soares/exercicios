programa
{
	
	funcao inicio()
	{//ler largura e altura da parede, calcular área a ser pintada e qtd de tinta a ser usada cada litro pinta uma area de 2 metros²
	real largura, altura, area, quantidadeTinta, metros

	escreva("============PINTANDO UMA PAREDE============ \n\n") 
	
	escreva("Qual a largura da parede: ")//em c++ escreva = cout << "";
	leia(largura)//em c++ leia = cin >>***; 
	escreva("Qual a altura da parede: ")
	leia(altura)  
	escreva("\n")

	escreva("============CALCULOS============ \n\n") 

	area = (largura * altura)
	quantidadeTinta = (area / 2)

	escreva("A quantidade de tinta que sera usada é ", quantidadeTinta , " para uma area de ", area)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 32; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */