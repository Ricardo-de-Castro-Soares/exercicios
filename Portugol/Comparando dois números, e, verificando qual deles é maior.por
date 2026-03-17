programa
{
	
	funcao inicio()
	{
	
 	//Comparando dois números, e, verificando qual deles é maior

 	inteiro num1, num2

 	escreva("Digite o primeiro número: ")
 	leia(num1)
 	escreva("Digite o segundo número: ")
 	leia(num2)

 	se(num1 > num2){
 		escreva("O número ", num1 ," é maior que ", num2)
 	}senao se(num1 < num2){
 		escreva("O número ", num1 ," é menor que ", num2)
 	}senao{
 		escreva("Não existe valor maior, os dois são iguais.")
 	}
 	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 44; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */