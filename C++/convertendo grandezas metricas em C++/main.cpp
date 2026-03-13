#include <iostream>

using namespace std;
int main()
{
	float metros, metrosKm, metrosHm, metrosDam, metrosDc, metrosCm, metroSmm;
	
	cout<<"Digite a distancia em metros: ";
	cin>>metros;
	cout<<"\n";
	
	metrosKm = (metros / 1000);
	metrosHm = (metros / 100);
	metrosDam = (metros / 10);
	metrosDc = (metros * 10);
	metrosCm = (metros * 100);
	metroSmm = (metros * 1000);
	
	
	cout<<"A distancia em metros de "<<metros<<" para Kilometro e de "<<metrosKm<<"Km"<<"\n";
	cout<<"A distancia em metros de "<<metros<<" para Hectometro e de "<<metrosHm<<"Hm"<<"\n";
	cout<<"A distancia em metros de "<<metros<<" para Decametro e de "<<metrosDam<<"Dam"<<"\n";
	cout<<"A distancia em metros de "<<metros<<" para Decimetro e de "<<metrosDc<<"Dc"<<"\n";
	cout<<"A distancia em metros de "<<metros<<" para Centimetro e de "<<metrosCm<<"Cm"<<"\n";
	cout<<"A distancia em metros de "<<metros<<" para Milimetro e de "<<metroSmm<<"mm"<<"\n";
	
	return 0;
}