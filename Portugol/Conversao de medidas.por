programa
{
	
	funcao inicio()
	{
	real distanciaMetros, kilometro, hectometro, decametro, decimetro, centimetro, milimetro

	
	escreva("Escreva a distancia em metros: ")
	leia(distanciaMetros)

	kilometro = (distanciaMetros * 3.6)
	hectometro = (distanciaMetros / 100)
	decametro = (distanciaMetros / 10)
	decimetro = (distanciaMetros * 10)
	centimetro = (distanciaMetros * 100)
	milimetro = (distanciaMetros  * 1000)

	escreva("A distascia em Km e de ", kilometro ,  "\n")
	escreva("A distascia em Ha e de ", hectometro , "\n")
	escreva("A distascia em Dam e de ", decametro , "\n")
	escreva("A distascia em Dm e de ", decimetro , "\n")
	escreva("A distascia em Cm e de ", centimetro , "\n")
	escreva("A distascia em mm e de ", milimetro , "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 472; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */