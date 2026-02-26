programa
{
	
	funcao inicio()
	{
	real velocidade

	escreva("Qual foi a sua velociadade: ")
	leia(velocidade)




	se (velocidade <= 80)
	{
		escreva("Dentro do limite permitido")
		}
	senao se (velocidade > 80 e velocidade <= 100)
	{
		escreva("Infração: MULTA LEVE", "\n" ,"Valor:R$130,16", "\n" ,"Pontos na CNH: 4 pntos")
		}




	se (velocidade > 100 e velocidade <= 120)
	{
		escreva("nfração: MULTA GRAVE", "\n" ,"Valor:R$195,23", "\n" ,"Pontos na CNH: 5 pntos")
		}
	senao se  (velocidade > 120)
	{
		escreva("nfração: MULTA GRAVÍSSIMA", "\n" ,"Valor:R$293,47", "\n" ,"Pontos na CNH: 7 pntos")
		}
	
		
		
			
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 329; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */