//Hecho por Jesus Osiris Santana Taveras
//Entregar el 20 de marzo del 2023
//Programa para calcular la distancia en km de Santo Domingo hasta cualquier parte del pais

#include <iostream>
using namespace std;

int main() {
    float rendimiento = 27; 
    float precioGalon = 293; 
    float distancia, galones, costo;

    char opcion;

    do {
    
	do{
		
    cout << "Ingrese la distancia en km desde Santo Domingo hasta cualquier parte del pais: ";
    cin >> distancia;
    if (distancia < 0) {
    cout << "Error: El numero debe ser positivo. " << endl;
}
  } while (distancia < 0);

    galones = distancia / rendimiento;
    costo = galones * precioGalon;
    
	cout << "\nEl costo de combustible para el viaje es de: RD$" << costo << endl;
    
	cout << "\nDesea seguir ejecutando el programa para medir otra distancia? (s/n): ";
    cin >> opcion;
    
    } while (opcion == 's');

    return 0;
}

