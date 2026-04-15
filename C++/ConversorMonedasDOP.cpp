//Hecho por Jesus Osiris Santana Taveras
//24 de marzo del 2023
//Programa que al ingresar los pesos dominicanos te los pasa a dolares o a euros


#include<iostream>
#include<cstdlib>

using namespace std;

int main() { 
    float pesos;
    float Pesos_a_dolar = 54.92;
    float Pesos_a_euro = 59.09;
    int opcion;
    char opcion2;

    do { 
	
	system ("cls");

    cout << "Ingrese la cantidad en pesos dominicanos: ";
	cin >> pesos;
	
	cout << "\nElija una opcion: " << endl;
	cout << "1. Convertir a dolares \n";
    cout << "2. Convertir a euros \n";
    cin >> opcion;
	
	
	
	switch(opcion) {
	case 1:
    cout << "\nLa cantidad en dolares es: " << pesos / Pesos_a_dolar << endl;
    break;
    case 2:
    cout << "\nLa cantidad en euros es: " << pesos / Pesos_a_euro << endl;
    break;
   
    default:
    cout << "\nTu no ve que nama te da a elegir 1 o 2? INGRESA 1 o 2, pero ahora va a tene que darle a la S" << endl;
    break;
}

    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion2;

    } while (opcion2 == 's');

    return 0;
}
