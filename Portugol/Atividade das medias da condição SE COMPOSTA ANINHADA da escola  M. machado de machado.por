programa
{
	
	funcao inicio()
	{
	real nota1, nota2, media

	escreva("-----------------------------\n")
	escreva("ESCOLA M. MACHADO DE MACHADO")
	escreva("\n-----------------------------\n")
	
	escreva("\nDigite a primeira nota: ")
	leia(nota1)
	escreva("Digte a segunda nota: ")
	leia(nota2)

	media = (nota1 + nota2) /2

	escreva("\n-----------------------------\n")
	se((media >= 10) e (media >= 9)){
		escreva("Media: ", media , "\nAproveitamento: A")
		}
	senao se((media >= 8) e (media <= 8.9)){
		escreva("Media: ", media , "\nAproveitamento: B")
		}
	senao se((media >= 7) e (media <= 7.9)){
		escreva("Media: ", media , "\nAproveitamento: C")
		}
	senao se((media >= 6) e (media <= 6.9)){
		escreva("Media: ", media , "\nAproveitamento: D")
		}
	senao se((media > 5) e (media <= 5.9)){
		escreva("Media: ", media , "\nAproveitamento: E")
		}
	senao{
		escreva("Media: ", media , "\nAproveitamento: F")
		}
	escreva("\n-----------------------------\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 964; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */