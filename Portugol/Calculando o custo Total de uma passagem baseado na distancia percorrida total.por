programa
{
	
	funcao inicio()
	{
	//Calculando o custo Total de uma passagem baseado na distancia percorrida total. sendo R$0.50 até 200Km e R$0.45 acima de 200km.

	real distanciaKm, custoTotal1, custoTotal2

	escreva("Qual a distancia total a ser percorrida em Km : ")
	leia(distanciaKm)

	custoTotal1 = (distanciaKm * 0.50)
	custoTotal2 = (distanciaKm * 0.45)
	
	se(distanciaKm <= 200){
		escreva("O custo11 total da passagem sera de: R$", custoTotal1)
	}senao{
		escreva("O custo22 total da passagem será de: R$", custoTotal2)
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 119; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */