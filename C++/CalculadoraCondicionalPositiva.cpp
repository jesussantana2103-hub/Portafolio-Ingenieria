//Hecho por Jesus Osiris Santana Taveras
//24 de marzo del 2023
//Programa que lee dos numeros y realiza la resta, para otra condicion la multiplicacion y division de los mismos

#include<iostream>
#include <cstdlib>
using namespace std;

int main() {
	
    float num1, num2, resta, multiplicacion, division;
    char opcion;


    do {
	
	system ("cls");
	
	cout << "Ingrese sus dos numeros para luego realizar la resta. Para cualquier otra condicion hacer la multiplicacion y division de los mismos. \n";
	
	cout << "\nIngrese su primer numero: ";
	cin >> num1;
	cout << "\nIngrese su segundo numero: ";
	cin >> num2;
	if (num1 > 0 && num2 > 0) {
	resta = num1 - num2;
	cout << "\nLa resta de ambos numeros es: " << resta << endl;
}
    else { 
    multiplicacion = num1 * num2;
    cout << "\nLa multiplicacion de ambos numeros es: " << multiplicacion << endl;
	
	if (num2 == 0) { 
	cout << "\nNo se puede dividir entre cero." << endl;
}
    else {
	division = num1 / num2;
	cout << "\nLa division de ambos numeros es: " << division << endl;
    }
}
    cout << "\nDesea seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
    } while (opcion == 's');

    return 0;
}
