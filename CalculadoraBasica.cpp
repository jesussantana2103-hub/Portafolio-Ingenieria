#include<iostream>
using namespace std;

int main(){
	float num1, num2;
	cout << ("Favor leer 2 numeros y mostar la suma, resta, multiplicacion y division de los mismos: \n");

	cout << "Ingrese el primer numero: ";
	cin >> num1; 
	cout << "Ingrese el segundo numero: ";
	cin >> num2;


	cout << "\nLa suma de ambos numeros es: " << num1 + num2 << endl;
	cout << "\nLa resta de ambos numeros es: " << num1 - num2 << endl;
	cout << "\nLa mutliplicacion de ambos numeros es: "<< num1 * num2 << endl;
	cout << "\nLa division de ambos numeros es: "<< num1 / num2 << endl;
	
	return 0;
}
