programa
{
	
	funcao inicio()
	{
	inteiro ano, datanasci, idade

	escreva("-------------------------\n")
	escreva("DEPARTAMENTO DE TRANSITO")
	escreva("\n-------------------------\n")

	
	escreva("\nQual o ano atual: ")
	leia(ano)
	escreva("Qual a sua data de nascimento: ")
	leia(datanasci)

	idade = (ano - datanasci)

	se (idade >= 18){
		escreva("\n-------------------------\n")
		escreva("Idade: ", idade , " anos \nApto a tirar a carteira")
		escreva("\n-------------------------\n")
		}
	senao{
		escreva("\n-------------------------\n")
		escreva("Idade: ", idade , " anos \nInapto a tirar a carteira")
		escreva("\n-------------------------\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 204; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */