programa
{
	
	funcao inicio()
	{
	//Dando pontos de atividade fisica por hora feitas

	real horas, dinheiro1, dinheiro2, dinheiro3, pontos1, pontos2, pontos3
	
	escreva("Qunastas horas de atividade você fez por mês: ")
	leia(horas)

	pontos1 = (horas * 2)
	dinheiro1 = (pontos1 * 0.05)

	pontos2 = (horas * 5)
	dinheiro2 = (pontos2 * 0.05)
	
	pontos3 = (horas * 10)
	dinheiro3 = (pontos3 * 0.05)
	

	se(horas < 10){
		escreva("Parabéns, você gnahou 2 pontos por fazer 10h de atividade no mês e ganhou um total de R$",dinheiro1)
	}senao se (horas >10 e horas <20){
		escreva("Parabéns, você gnahou 5 pontos por fazer entre 10h e 20h de atividade no mês e ganhou um total de R$",dinheiro2)
	}senao{
		escreva("Parabéns, você gnahou 10 pontos por fazer 20h ou mais de atividade no mês e ganhou um total de R$",dinheiro3)
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 223; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */