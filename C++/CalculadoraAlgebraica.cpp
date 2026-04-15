//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//Programa que al ingresarle un valor a la incognita lo eleva y multiplica

#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main() {
    float x, y, resultado;
    char opcion;
    
    do{
    	
	system("cls");
    cout << "Otorgale un valor a 'X' y a 'Y' \n";
    cout << "\nIngresa el valor de X: ";
    cin >> x;
    
    cout << "\nIngresa el valor de Y: ";
    cin >> y;
    
    resultado = sqrt(3 * pow(x, 2) + 4 * pow(y, 2));
    
    cout << "\nEl resultado de la expresion es: " << resultado << endl;
    
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
    
}   while (opcion == 's');

    return 0;
}
