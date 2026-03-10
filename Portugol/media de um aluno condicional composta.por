programa
{
	
	funcao inicio()
	{
	real nota1, nota2, media

	escreva("-----------------------------\n")
	escreva("ESCOLA M. MACHADO DE MACHADO")
	escreva("\n-----------------------------\n")

	escreva("\nDigite a sua primeira nota: ")
	leia(nota1)
	escreva("Digite sua segunda nota: ")
	leia(nota2)

	media = (nota1 + nota2) /2

	escreva("\n-----------------------------\n")
	se(media >= 7){
		escreva("Media: " , media , "\nAluno Aprovado")
		}
	senao se((media >= 5) e (media < 7)){
		escreva("Media: " , media , "\nAluno em recuperação")
		}
	senao{
		escreva("Media: " , media , "\nAluno reprovado")
		}
	escreva("\n-----------------------------")
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 487; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */