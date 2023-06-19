#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char nombre [20];
	
	for(i=0;i<5;i++){
	cout<<"ingrese el nombre de la persona: "<<endl;
	cin.getline(nombre,20,'/n') //ingresar los datos com string, necesita3 parametros
}
	
	for(i=0;i<5;i++){
	cout<<nombre<<endl;
	
	int distancia = strelen(nombre); // para determinar la cantidadde espacios
	
	cout<<"cantidad de espacios: " << distancia;
}
	
	return 0;
}
