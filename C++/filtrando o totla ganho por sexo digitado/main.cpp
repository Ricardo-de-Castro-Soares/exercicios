#include <iostream>
#include <string>
#include <vector>
using namespace std;
	
void SalarioSexo(vector<double>&salarioM, vector<double>&salarioF, vector<string>&sexo){
	double salariosM, salariosMa{};
	double salariosF, salariosFe{};
	string sexos;
	bool saida = true;
	
	
	cout<<"Digite [S] para sair:\n";
	while(saida == true){
		cout<<"\nSexo: ";	
		cin>>sexos;
		
		if(sexos == "M" || sexos == "Masculino" || sexos == "m" || sexos == "masculino"){
			sexo.push_back(sexos);
			
			cout<<"Salário: ";
			cin>>salariosM;
			salarioM.push_back(salariosM);
			salariosMa+=salariosM;
			
		}else if(sexos == "F" || sexos == "Feminino" || sexos == "f" || sexos == "feminino"){
			sexo.push_back(sexos);
			
			cout<<"Salário: ";
			cin>>salariosF;
			salarioF.push_back(salariosF);
			salariosFe+=salariosF;
			
		}else if(sexos == "s" || sexos == "S"){
			cout<<"Por favor, Aguarde...\n\n";
			saida = false;
			system("pause");
			
		}else{
			cout<<"Apenas [F] para Feminino e [M] para Masculino é permitido.\n";
			
			continue;
		}
	}
	
	cout<<"\nTotal de Salarios lidos de Mulheres: "<<salariosFe;
	cout<<"\nTotal de Salarios lidos de Homens: "<<salariosMa;	
}

int main()
{
	vector<double>salarioM;
	vector<double>salarioF;
	vector<string>sexo;
	
	SalarioSexo(salarioM, salarioF, sexo);
	
	return 0;
}