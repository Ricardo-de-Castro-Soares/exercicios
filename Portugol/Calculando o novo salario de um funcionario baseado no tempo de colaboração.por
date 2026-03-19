programa
{
	
	funcao inicio()
	{
 	//Calculando o novo salario de um funcionario baseado no tempo de colaboração

	real salario, anosTrabalhado, novoSalarioF1, novoSalarioF2, novoSalarioF3, novoSalarioM1, novoSalarioM2, novoSalarioM3
 	cadeia genero

 	escreva("Digite o seu salario: ")
 	leia(salario)
 	escreva("Digite o seu genero entre Masculino e Feminino: ")
 	leia(genero)
 	escreva("A quantos anos você trabalha: ")
 	leia(anosTrabalhado)

 	novoSalarioF1 = (salario * 1.05)
 	novoSalarioF2 = (salario * 1.12)
 	novoSalarioF3 =  (salario * 1.23)

 	novoSalarioM1 = (salario * 1.03)
 	novoSalarioM2 = (salario * 1.13)
 	novoSalarioM3 = (salario * 1.25)
 	
 	se(genero == "Feminino" e genero == "feminino" e anosTrabalhado < 15){
 		escreva("O seu novo salario pelos ",anosTrabalhado," anos trabalhado foi de R$",novoSalarioF1)
 	}senao se(genero == "Feminino" e genero == "feminino" e anosTrabalhado > 15 e anosTrabalhado > 20){
 		escreva("O seu novo salario pelos ",anosTrabalhado," anos trabalhado foi de R$",novoSalarioF2)
 	}senao se(genero == "Feminino" e genero == "feminino" e anosTrabalhado >= 21){
 		escreva("O seu novo salario pelos ",anosTrabalhado," anos trabalhado foi de R$",novoSalarioF3)
 	}senao se(genero == "Masculino" e genero == "masculino" e anosTrabalhado < 20){
 		escreva("O seu novo salario pelos ",anosTrabalhado," anos trabalhado foi de R$",novoSalarioM1)
 	}senao se(genero == "Masculino" e genero == "masculino" e anosTrabalhado >= 21 e anosTrabalhado < 30){
 		escreva("O seu novo salario pelos ",anosTrabalhado," anos trabalhado foi de R$",novoSalarioM2)
 	}senao{
 		escreva("O seu novo salario pelos ",anosTrabalhado," anos trabalhado foi de R$",novoSalarioM3)
 	}
 	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 42; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */