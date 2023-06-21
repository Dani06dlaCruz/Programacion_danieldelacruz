#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main() {
	
	char frase[36];
	int contadorA, contadorE, contadorI, contadorO, contadorU [5]={0}

	
    cout<< "Ingrese su frase: ";
	cin.getline(frase, 36, '\n');
	
	int distancia = strlen(frase);
	for (int x=0; x<distancia; x++){
		switch (frase[x]){
			case 1:
				contadorA[0]++;
				break;
			case 2:
				contadorE[1]++;
				break;
			case 3:
				contadorI[2]++;
				break;
			case 4:
				contadorO[3]++;
				break;
			case 5:
				contadorU[4]++;
				break;
		}	
	}
	
	cout<< "Cantidad de vocales:" << endl;
    cout<<"a:" << contadorA[0] << endl;
    cout<<"e:" << contadorE[1] << endl;
    cout<<"i:" << contadorI[2] << endl;
    cout<<"o:" << contadorO[3] << endl;
    cout<<"u:" << contadorU[4] << endl;
	
	return 0;
}

 
