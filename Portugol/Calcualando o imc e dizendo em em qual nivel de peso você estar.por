programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
	//Calcualando o imc e dizendo em em qual nivel de peso você estar
	
	real peso, altura, imc

	escreva("Digite o seu peso: ")
	leia(peso)
	escreva("Informe sua altura: ")
	leia(altura)

	imc = (peso / (altura * altura))

	se(imc < 18.5){
		escreva("IMC igual a ",mat.arredondar(imc, 2)," Abaixo do peso ideal")
	}senao se(imc >18.5 e imc < 25){
		escreva("IMC igual a ",mat.arredondar(imc, 2)," Peso ideal")
	}senao se(imc >25 e imc <30){
		escreva("IMC igual a ",mat.arredondar(imc, 2)," Sobrepeso")
	}senao se(imc >30 e imc <40){
		escreva("IMC igual a ",mat.arredondar(imc, 2)," Obesidade")
	}senao{
		escreva("IMC igual a",mat.arredondar(imc, 2)," Obesidade morbida")
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 78; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */