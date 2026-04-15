//Hecho por Jesus Osiris Santana Taveras
//05 de marzo 2023, modificado para el 19 de marzo del 2023
//Programa que encuentra el area de un circulo

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
   
    float pi=3.1416;
	float diametro,radio,area;
    char opcion;
    
    do {
	

    
     do {
      cout << "Ingresa tu primer numero (de 0 a 100): ";
      cin >> diametro;
      if (diametro < 0 || diametro > 100) {
        cout << "Error: El numero debe estar entre 0 y 100" << endl;
      }
    } while (diametro < 0 || diametro > 100);
    
    radio = diametro/2;
    area = pi*pow(radio, 2);
    cout << "El radio del circulo es: " << radio << endl;
	cout <<"El area del circulo es: "<< area << endl;
   
   cout << "Deseas seguir ejecutando el programa? (s/n): ";
   cin >> opcion;
   
} while (opcion == 's');

    
	return 0;
}
