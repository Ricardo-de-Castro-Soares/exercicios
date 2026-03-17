programa
{
	
	funcao inicio()
	{
	//Algoritmo para classificar um terreno de acordo com o tamanho daa area
 	
 	real largura, comprimento, area

 	escreva("Digite a largura do terreno: ")
 	leia(largura)
 	escreva("Digite o comprimento do terreno: ")
 	leia(comprimento)

 	area = (largura * comprimento)

 	se(area < 100){
 		escreva("O terreno de ",area,"m² é considerado um TERRENO POPULAR")
 	}senao se(area >= 100 e area <= 500){
 		escreva("O terreno de ",area,"m² é considerado um TERRENO MASTER")
 	}senao{
 		escreva("O terreno de ",area,"m² é considerando um TERRENO VIP")
 	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 111; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */