#include <iostream>
using namespace std;

void valoresDivPor4(){
	for(int i = 30; i >= 1; i--){
		if(i % 4 == 0){
			cout<<"["<<i<<"] ";
		}else{
			cout<<i<<" ";
		}
	}
}

int main()
{
	cout<<"Números divisiveis por 4\n\n";
	valoresDivPor4();
		
	return 0;
}