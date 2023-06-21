#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	char nombres[5][20];
    int distancias[5];  // Arreglo para almacenar las distancias
    
    
    for (int i = 0; i < 5; i++) {
        cout << "puede ingresar el nombre " << i + 1 << ": " << endl;
        cin.getline(nombres[i], 20, '\n');
        distancias[i] = strlen(nombres[i]);
    }
    
    
    for (int i = 0; i < 5; i++) {
        cout << nombres[i] << " tiene una cantidad de espacios de : " << distancias[i] << endl;
    }
    	

	
	return 0;
}
