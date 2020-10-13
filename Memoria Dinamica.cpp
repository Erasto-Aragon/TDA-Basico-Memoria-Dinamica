	#include <iostream>//Iniciamos implementado la libreria

	using namespace std;

	struct alumno //Declaramos la estructura a usar
	{
		int control; //Variables declaradas dentro de la estructura
		char nombre[50];
		char apellidos[50];
		char ing[50];
		int sem;
	};
	
	int main(){//La funcion principal
		int alumnos;//Declaraci�n de variable
		setlocale(LC_CTYPE,"Spanish");//Paqueteria en espa�ol, permite el acento
		
		cout << "Ingresa el n�mero de alumnos: " ;//Debemos conocer la cantidad de alumnos 
        cin >> alumnos;//Guarda el valor asignado de alumnos
		
		struct alumno alum[alumnos];//Asignamos valor para llamar a la estructura
		
		for (int i=0; i<alumnos; i++){//Inicia el bucle for para repetir las veces de alumnos
			cout << "\n\tIngresa datos del alumno: " << i+1;
			cout << "\n\tN�mero de control: ";
        	cin >> alum[i].control;//El valor se almacena en la variable control de la estructura alumno
        	while(getchar()!='\n');
        	cout << "\n\tNombre: ";
        	gets(alum[i].nombre);
        	cout << "\n\tApellido: ";
        	gets(alum[i].apellidos);
        	cout << "\n\tIngenier�a: ";
        	gets(alum[i].ing);
        	cout << "\n\tSemestre: ";
        	cin >> alum[i].sem;
        	while(getchar()!='\n'); //Bucle que vac�a buffer de entrada
       	}
       	
       	system("cls");//Limpia pantalla
       	
       	//Impresi�n de datos
       	cout << "\tControl\t\tNombre\t\tApellido\tIngenier�a\tSemestre";
       	cout << "\n\t--------------------------------------------------------------\n";
		for (int i=0; i<alumnos; i++){
			//Concatenaci�n de los diferentes tipos de datos ingresados
        	cout << "\t" << alum[i].control <<"\t\t"<<  alum[i].nombre <<"\t\t"<<  +
			alum[i].apellidos <<"\t\t"<< alum[i].ing <<"\t\t"<< alum[i].sem << "\n";
    	}
    	cout << "\n\n";
		system("PAUSE");
		return 0;
	}

