#include <iostream>
using namespace std;

int main()
{
	const float metrosPorKm = 1000;
	float metros;	
	
	while(metros > = 0){
		cout<<"\n\nDigite uma distancia em metros: ";
		cin>>metros;
		
		if(metros <= 0){
			break;
		}
	
		cout<<"\nQuilometros: "<<metros / metrosPorKm<<" Km";
		cout<<"\nMetros: "<<metros<<" m";
	}
		
	return 0;
}