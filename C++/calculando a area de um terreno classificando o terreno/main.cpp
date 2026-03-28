#include <iostream>
using namespace std;

int main()
{
	float largura, comprimento, area;
	
	cout<<"Digite a largura: ";
	cin>>largura;
	cout<<"comprimento: ";
	cin>>comprimento;
	
	area = (largura * comprimento);
	
	if(area < 100){
		cout<<"TERRENO POPULAR";
	}else if(area > 100 && area < 500){
		cout<<"TERRENO MASTER";
	}else{
		cout<<"TERRENO VIP";
	}
		
	return 0;
}
