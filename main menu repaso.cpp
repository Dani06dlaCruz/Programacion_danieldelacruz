#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int mai() {
	int opcion = 0;
	char NombreApellido[100];
	int NumeroCalificaciones = 0;
	int Calificacion;
	int SumaCalificaciones = 0;
	int promedio = 0;
	
	while (opcion !=5){
	cout<<"---MENÚ---"<<endl;
	cout<<"1. ingresa el nombre y apellido del estudiante"<<endl;
	cout<<"2. las notas de los cursos asignados por el docente"<<endl;
	cout<<"3. visualizacion de las notas individuales"<<endl;
	cout<<"4. promedio general de las notas"<<endl;
	cout<<"5. salir"<<endl;
	
	cout<<"eliga una opcion: "<<endl;
	cin>> opcion;
	
	switch (opcion){
		
		case 1:
		cout<<"ingrese nombre y apellido del estiduante"<<endl;
		cin.ignore();
		cin.getline(NombreApellido,100);
		break;
		
		case 2:
		cout<<"ingrese notas de los cursos asignados"<<endl;
		cin>>NumeroCalificaciones;
		cout<<"ingrese: "<<NumeroCalificaciones<<"Calificaciones"<<endl;
		break;
		
		case 3:
		cout<<"notas individuales"<<endl;
		for (int i=1;i<=NumeroCalificaciones;i++){
			cout<<"Calificacion"<<i<<". ";
			cin>>Calificacion;
			SumaCalificaciones += Calificacion;
		}
		break;
		
		case 4:
			cout<<"promedio general"<<endl;
			if (NumeroCalificaciones>0){
				promedio=SumaCalificaciones/NumeroCalificaciones;
				int decimal=(SumaCalificaciones% NumeroCalificaciones)*100 /NumeroCalificaciones;
				cout<<"El promedio general del aula: "<<promedio<<"."<<decimal<<endl;
			}
			else{
				cout<<"No ingreso las calificaciones:"<<endl;
			}
			break;
		
		case 5:
			cout<<"opcion salida"<<endl;
			break;
		
		default:
			cout<<"ingrese otra opcion pues la que selecciono no es valida: "<<endl;
			break;
		
	}
	
	}
	
	
	
	
	
	return 0;
}
