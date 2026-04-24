#include <iostream>
#include <vector>
using namespace std;

void vetores(vector<double>&nota, double notaAlunos){
	int opcao{}, contador{}, i{};
	
	do{
		cout<<"============================";
		cout<<"\n   GERENCIAMENTO DE NOTAS";
		cout<<"\n============================";
		cout<<"\n[1] Adicionar nota";
		cout<<"\n[2] Remover ultima nota";
		cout<<"\n[3] Ver primeira nota";
		cout<<"\n[4] Ver ultima nota";
		cout<<"\n[5] Total de notas";
		cout<<"\n[6] Lista esta vazia?";
		cout<<"\n[7] Limpar todas as notas";
		cout<<"\n[0] Sair";
		cout<<"\nEscolha uma opção: ";
		cin>>opcao;

		system("cls");
		
		switch(opcao){
			case 1:
				for(int i = 0; i < 1;i++){
					cout<<"Digite a nota: ";
					cin>>notaAlunos;
					nota.push_back(notaAlunos);
				}
				cout<<"Nota "<<notaAlunos<<" adicionada.\n\n";
				break; 
			case 2:
				nota.pop_back();
				break;
			case 3:
				cout<<"Priemira nota: "<<nota.front()<<"\n\n";
				break;
			case 4:
				cout<<"Ultima nota: "<<nota.back()<<"\n\n";
				break;
			case 5:
				cout<<"Total de notas digitadas: ";
				for(int i = 0; i < 1; i++){
					cout<<nota.size()<<" ";
				}
				cout<<"\n\n";
				break;
			case 6:	
				while(i < nota.size()){
      			  cout << "Nota: "<<nota[i]<<"\n\n";
        
				  i++;
    			}
    
    			if(nota.empty()){
     			   cout << "\nA lista esta vazia!!\n\n";
 			   }
				break;
			case 7:
				nota.clear();
				cout<<"Todas as notas foram removidas\n\n";
				break;
			}
	}while(opcao != 0);
}

int main()
{
	vector<double>nota;
	double notaAlunos;
	
	vetores(nota, notaAlunos);
	
	return 0;
}