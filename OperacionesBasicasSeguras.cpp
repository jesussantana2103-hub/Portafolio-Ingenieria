//Hecho por Jesus Osiris Santana Taveras
//05 de marzo 2023, modificado para entregar el 19 de marzo del 2023
//Programa que lee 2 numeros y muestra la suma, resta, multiplicacion y division


#include <iostream>
using namespace std;

int main() {
  float num1, num2;
  char opcion;

  do {
 
    do {
      cout << "Ingresa el primer numero (entre 0 y 150): ";
      cin >> num1;
      if (num1 < 0 || num1 > 150) {
        cout << "Error: El numero debe estar entre 0 y 150" << endl;
      }
    } while (num1 < 0 || num1 > 150);


    do {
      cout << "Ingresa el segundo numero (entre 0 y 150): ";
      cin >> num2;
      if (num2 < 0 || num2 > 150) {
        cout << "Error: El numero debe estar entre 0 y 150" << endl;
      }
    } while (num2 < 0 || num2 > 150);

   
    cout << "La suma de ambos numeros es: " << num1 + num2 << endl;
    cout << "La resta de ambos numeros es: " << num1 - num2 << endl;
    cout << "La multiplicacion de ambos numeros es: " << num1 * num2 << endl;
    if (num2 != 0) {
      cout << "La division de ambos numeros es: " << num1 / num2 << endl;
    } else {
      cout << "No se puede dividir entre cero" << endl;
    }

      cout << "Deseas seguir ejecutando el programa? (s/n): ";
      cin >> opcion;
     
  } while (opcion == 's');

  return 0;
}
