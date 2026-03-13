#include <iostream>

using namespace std;
int main()
{
	float largura, altura, area, quantidadeTinta;
	
	cout<<"Digite a Largura da parede: ";
	cin>>largura;
	cout<<"Digite a altura da parede: ";
	cin>>altura;
	
	area = (largura * altura);
	quantidadeTinta = (area / 2);
	
	cout<<"Para pintar uma Area de "<<area<<" e preciso de um total de "<<quantidadeTinta<<" litros de tinta";
	
	system ("pause");
	return 0;
}