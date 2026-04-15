//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//programa que despues de ingresar 200 numeros te da la cantidad de numeros positivos, negativos, cantidad de ceros, numero mayor, numero menor y si es posible la sumatoria y promedio de los numpositivos, por ultimo muestra los primeros y ultimos 50 numeros


#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int numeros[200];
    int positivos = 0, negativos = 0, ceros = 0;
    int mayor = -4000, menor = 4000;
    int suma_positivos = 0, promedio_positivos = 0;
    char opcion;
    
do {
	system("cls");
	
    for (int i = 0; i < 200; i++) {
    cout << "Digite el numero " << i + 1 << ": ";
    cin >> numeros[i];
    
	if (numeros[i] > 0) {
    positivos++;
    suma_positivos += numeros[i];
}   else if (numeros[i] < 0) {
    negativos++;
}   else {
    ceros++;
}
    
	if (numeros[i] > mayor) {
    mayor = numeros[i];
}
    if (numeros[i] < menor) {
    menor = numeros[i];
}
    }
    
    cout << "\nCantidad de numeros positivos: " << positivos << endl;
    cout << "\nCantidad de numeros negativos: " << negativos << endl;
    cout << "\nCantidad de ceros: " << ceros << endl;
    
    
    cout << "\nEl numero mayor es: " << mayor << endl;
    cout << "\nEl numero menor es: " << menor << endl;
    
    
    if (positivos > 0) {
    promedio_positivos = suma_positivos / positivos;
    cout << "\nLa sumatoria de los numeros positivos es: " << suma_positivos << endl;
    cout << "\nEl promedio de los numeros positivos es: " << promedio_positivos << endl;
    } else {
    cout << "\nNo hay numeros positivos para calcular su sumatoria y promedio." << endl;
}
    
    
    cout << "\nLos primeros 50 numeros digitados son: ";
    for (int i = 0; i < 50; i++) {
    cout << numeros[i] << " ";
    }
    
    cout << endl;
    
    cout << "\nLos ultimos 50 numeros digitados son: ";
    for (int i = 150; i < 200; i++) {
    cout << numeros[i] << " ";
    }
    
    cout << endl;
    
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
}   while (opcion == 's');
    
    return 0;
}
