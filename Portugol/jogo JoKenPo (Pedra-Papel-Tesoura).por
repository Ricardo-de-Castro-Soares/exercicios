programa
{
	
	funcao inicio()
	{
	//Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

	inteiro jogador1, jogador2

	escreva("Escolha: Pedra [1] Papel [2] tesoura [3]\n")

	escreva("Digite a sua escolha Joagdor 1: ")
	leia(jogador1)
	escreva("Digite a sua escolha jogar 2: ")
	leia(jogador2)

	se(jogador1 == jogador2){
		escreva("Que pena o jogo deu empate")
	}senao se(jogador1 == 1 e jogador2 == 3){
		escreva("O jogador 1 escolheu pedra e o jogador 2 escolheu tesoura, JOAGADOR 1 VENCEU!!")
	}senao se(jogador1 == 1 e jogador2 == 2){
		escreva("O jogador 1 escolheu pedra e o jogador 2 escolheu papel, JOAGADOR 2 VENCEU!!")
	}senao se(jogador1 == 2 e jogador2 == 3){
		escreva("O jogador 1 escolheu papel e o jogador 2 escolheu tesoura, JOAGADOR 2 VENCEU!!")
	}senao se(jogador1 == 2 e jogador2 == 1){
		escreva("O jogador 1 escolheu papel e o jogador 2 escolheu pedra, JOAGADOR 1 VENCEU!!")
	}senao se(jogador1 == 3 e jogador2 == 2){
		escreva("O jogador 1 escolheu tesoura e o jogador 2 escolheu papel, JOGADOR 1 VENCEU!!")
	}senao se(jogador1 == 3 e jogador2 == 1){
		escreva("O jogador 1 escolheu tesoura e o jogador 2 escolheu pedra, JOAGADOR 2 VENCEU!!")
	}
	
	
	
	
	
	/*senao se(pedra == 1 e pedra == 1 e tesoura == 2 e tesoura == 2 e papel == 3 e papel == 3){
		escreva("Empate")
	}*/





	
	/*se(pedra == 1 e tesoura == 1 e  papel == 1){
		escreva("Empate")
	}senao se(pedra == 2 e tesoura == 2 e  papel == 2){
		escreva("Empate")
	}senao se(pedra == 3 e tesoura == 3 e  papel == 3)
		escreva("Empate")*/
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 169; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */