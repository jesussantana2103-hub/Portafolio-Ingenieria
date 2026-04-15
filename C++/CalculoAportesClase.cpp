//Hecho por Jesus Osiris Santana Taveras
//25 de marzo del 2023
//Programa que lee el monto aportado por cada una de los 25 estudiantes y dicho monto debe de estar entre (0 y 500) pesos.

#include<iostream>
#include<cstdlib>
using namespace std;

int main() { 
    float aporte, total = 0;
    int contador = 0;
    bool Mensaje = true;
    char opcion;
    
    
	do{
	
	if (Mensaje) {
	
    cout << "El monto que vas a ingresar por cada estudiante tiene que estar entre 0 y 500, ni mas ni menos. \n";
    Mensaje = false;
}
	
	do {
	
	cout << "\nIngrese el aporte del estudiante " << contador+1 << ": ";
    cin >> aporte;
	
	if (aporte >= 0 && aporte <= 500) {
	total += aporte;
    contador++;
}   
    else {
    cout << "El monto ingresado no es valido. Intentelo de nuevo" << endl;
    }
    
}   while (contador < 25);

    cout << "\nEl monto total aportado por los estudiantes es: " << total << endl;
    cout << "\nEl monto promedio aportado por los estudiantes es: " << total/25 << endl;
	
	cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
	
	if(opcion == 's') {
	system("cls");
    contador = 0;
    total = 0;
    Mensaje = true;
    }
        
}   while (opcion == 's');


    return 0;
}
