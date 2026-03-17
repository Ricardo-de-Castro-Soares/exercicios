programa
{
	
	funcao inicio()
	{
 		 inteiro sexo
 		 cadeia nome
 		 real valorCompra, descontoFeminino, descontoMasculino

 		 escreva("Escreva o seu nome: ")
 		 leia(nome)
 		 escreva("Digite o valor total das compras: ")
 		 leia(valorCompra)
 		 escreva("\n----Escolha entre as duas opções----\n")
 		 escreva("\nFeminino [1]\t")
 		 escreva("Masculino [2]\n")
 		 escreva("\nEscolha seu sexo: ")
 		 leia(sexo)
 		 
 		 escolha(sexo){
 		 	caso 1:
 		 	escreva("\nvocê escolheu sexo Feminino\n")
 		 	pare
 		 	caso 2:
 		 	escreva("Você escolheu sexo Masculino\n")
 		 	pare
 		 caso contrario:
 		 	escreva("NÚMERO INVALIDO")
 		 }

		 descontoFeminino = (valorCompra *0.15)
 		 descontoMasculino = (valorCompra *0.05)

 		 se(sexo == 1){
 		 	escreva("Parabens, ", nome ," você ganhou um desconto de R$", descontoFeminino ," Na sua compra total de R$",valorCompra," para comemorar nesse dia das mulheres")
 		 }senao{
 		 	escreva("Parabens, ", nome ," você ganhou um desconto de R$", descontoMasculino ," Na sua compra total de R$",valorCompra)
 		 }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1066; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */