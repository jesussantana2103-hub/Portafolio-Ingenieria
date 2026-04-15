//Hecho por Jesus Osiris Santana Taveras
//24 de marzo del 2023
//Programa que lee dos numeros y realiza la suma, para otra condicion la multiplicacion y division de los mismos


#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    float num1, num2;
    float suma, multiplicacion, division;
    char opcion;
    
    
    
    do {
    	
    system ("cls");
    
    cout << "Ingrese sus dos numeros para luego realizar la suma, para cualquier otra condicion hacer la multiplicacion y division de los mismos. \n";
    
	cout << "\nIngrese su primer numero: ";
    cin >> num1;
    
    cout << "\nIngrese su segundo numero: ";
    cin >> num2;
    
    if (num1 > num2) {
    suma = num1 + num2;
    cout << "\nLa suma de los numeros es: " << suma << endl;
    } else {
    	
    if (num2 != 0) {
    
	multiplicacion = num1 * num2;
    division = num1 / num2;
	
	cout << "\nLa multiplicacion de los numeros es: " << multiplicacion << endl;
	cout << "\nLa division de los numeros es: " << division << endl;
	
	} else {
	cout << "No se puede realizar la division por cero." << endl;
}
    }
	
	cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
	cin >> opcion;
	
    } while (opcion == 's');
    
    return 0;
}
