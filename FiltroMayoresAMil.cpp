//Hecho por Jesus Osiris Santana Taveras
//26 de marzo del 2023
//Programa que al ingresar 200 numero te dice la cantidad de numeros mayores que 1000.

#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int num, count = 0;
    char opcion;
    
    do{
	
	system ("cls");
	cout << "Error: Valor fuera de rango. Inténtelo de nuevo. \n";

    for(int i = 1; i <= 200; i++) {
    cout << "\nIngrese el numero " << i << ": ";
    cin >> num;
    if(num > 1000) {
    count++;
}
    }

    cout << "\nLa cantidad de numeros mayores que 1000 es: " << count << endl;
    
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
    
}   while(opcion == 's');

    return 0;
}
