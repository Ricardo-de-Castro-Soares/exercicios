programa
{
	
	funcao inicio()
	{
	//Fazendo o algoritimo que calcula um aumento salarial de funcionario basedo na quantidade de tempo trabalhado na emprea
 	
 	real salario, anosTrabalhado, salarioNovo1, salarioNovo2, salarioNovo3
 	cadeia nome

 	escreva("Escreva seu nome: ")
 	leia(nome)
 	escreva("Digite quanto você ganha: ")
 	leia(salario)
 	escreva("A quantos anos você trabalha: ")
 	leia(anosTrabalhado)

	salarioNovo1 = (salario * 0.03)
	salarioNovo2 = (salario * 0.125)
	salarioNovo3 = (salario * 0.20)

 	se(anosTrabalhado < 3){
 		escreva("O aumento do salarial do funcionario ",nome," foi de ",salarioNovo1," por ter trabalhado por ", anosTrabalhado)
 	}senao se(anosTrabalhado >= 3 e anosTrabalhado < 10){
 		escreva("O aumento do salarial do funcionario ",nome," foi de ",salarioNovo2," por ter trabalhado por ", anosTrabalhado)
 	}senao{
 		escreva("O aumento do salarial do funcionario ",nome," foi de ",salarioNovo3," por ter trabalhado por ", anosTrabalhado)
 	}
 	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 159; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */