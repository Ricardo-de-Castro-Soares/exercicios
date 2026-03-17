programa
{
	
	funcao inicio()
	{
	inteiro anoAtual, anoNascimento, idade
	
	escreva("Digite o ano atual: ")
	leia(anoAtual)
	escreva("Digite o ano em que nasceu: ")
	leia(anoNascimento)

	idade = (anoAtual - anoNascimento)

	se(idade >= 18){
		escreva("Usuario maior de " , idade , " anos, apto ao voto")
	}senao{
		escreva("Usuario menor de ", idade , " anos, inapto ao voto")
	}
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 386; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */