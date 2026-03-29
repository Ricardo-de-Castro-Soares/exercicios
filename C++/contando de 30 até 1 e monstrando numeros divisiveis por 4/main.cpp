#include <iostream>
using namespace std;

int main()
{
	for(int i = 30; i >= 1; i--){
		
		if(i % 4 == 0){
			cout<<"["<<i<<"] ";
		}else{
			cout<<i<<" ";
		}
	}
	
	return 0;
}