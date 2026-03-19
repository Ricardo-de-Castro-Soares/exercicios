programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
	real valorCasa, salario, anosPagar, meses, limiteSalario, parcela

	escreva("Qual o valor total da casa: ")
	leia(valorCasa)
	escreva("Digite o seu salario: ")
	leia(salario)
	escreva("Em quantos anos deseja pagar a compra: ")
	leia(anosPagar)

	meses = (anosPagar * 12)
	parcela = (valorCasa / meses)
	limiteSalario = (salario * 0.30)

	se(parcela <= limiteSalario){
		escreva("Valor total da parcela R$",mat.arredondar(parcela, 2)," que será paga em ", meses ," Meses, EPRESTIMO BANCARIO APROVADO!!")
	}senao{
		escreva("infelizmente o seu EMPRESTIMO BANCADARIO FOI NEGADO por excender o limite de 30%")
	}
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 483; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */