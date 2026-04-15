//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//programa que te muestra el precio total de la pizza dependiendo del tamaño y de los ingredientes extras


#include <iostream>
#include<cstdlib>

using namespace std;

int main() {
    int tamano, ingredientes;
    float precio_base, precio_total;
    char opcion;
    
do{
	system("cls");
	do{

    cout << "\nBienvenido a la pizzeria\n";
    cout << "\nSeleccione el tamano de la pizza: ";
    cout << "\n1) Pequena\n";
    cout << "2) Mediana\n";
    cout << "3) Grande\n";
    cin >> tamano;
    if (tamano < 1 || tamano > 3){
    cout << "\nError: Tamano invalido. Elige un numero entre 1 y 3 \n";
}
}   while (tamano < 1 || tamano > 3);
    	

    if (tamano == 1) {
    precio_base = 400;
    } else if (tamano == 2) {
    precio_base = 700;
    } else if (tamano == 3) {
    precio_base = 950;
}

    cout << "\nIngrese la cantidad de ingredientes extra:\n";
    cin >> ingredientes;


    precio_total = precio_base + (ingredientes * 30);

    cout << "\nEl precio total es de RD$" << precio_total << endl;
    
    cout << "\nDeseas volver a ejecutar el programa? (s/n): ";
    cin >> opcion;
    
}   while(opcion == 's');

    return 0;
}
