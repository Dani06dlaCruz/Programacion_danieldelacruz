#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int fila= 4, columna= 4;
	
	int matriz [fila][columna];
	
	int sumafila[4];
	int sumacolumna[4];
	
	for (int i=0; i<fila; i++){

	for(int x=0; x<columna; x++){
		
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz [i][x];
		}
	}
	cout<<"La matriz es:"<<endl;
	
	for (int x=0; x<columna; x++){	
	
	sumafila[x]= matriz[0][x] + matriz[1][x] + matriz[2][x] + matriz[3][x];
	
	cout<<matriz[0][x]<<"   "<<matriz[1][x]<<"   "<<matriz[2][x]<<"   "<<matriz[3][x]<<"   "<<"   =   "<<sumafila[x]<<endl;
}

cout<<"=   =   =   ="<<endl;

for (int x=0; x<columna; x++){	
	
	sumafila[x]= matriz[x][0] + matriz[x][1] + matriz[x][2] + matriz[x][3];
	
	cout<<sumafila[x]<<"   ";
}
	

	
	return 0;
}
