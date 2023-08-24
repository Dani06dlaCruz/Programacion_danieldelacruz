#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	
	cout<<"vector desordenado"<<endl;
	int num[5]={1, 3, 2, 5, 4};
	for(int m=0; m<5; m++){
	cout<<num[m]<<" ";
	}
	cout<<endl;
	int aux;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		
		if(num[j]>num[j+1]){
			aux=num[j];
			num[j]=num[j+1];
			num[j+1]=aux;
			
	}
	}
	}
	cout<<"vector ordenado"<<endl;
	for(int k=1; k<=5; k++){
	cout<<num[k]<<" ";
	}
	
 getch();

 return 0;
}
