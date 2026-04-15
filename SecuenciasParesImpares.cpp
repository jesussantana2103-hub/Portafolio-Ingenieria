//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//Programa que al ingresar un numero entero entre 1000 y 2000 te muestra los primeros 100 numeros : enteros, pares e impares.


#include<iostream>
#include<cstdlib> 
using namespace std;

int main() {
    int num;
    char opcion;
    
do{
    do {
    system ("cls");
    
    cout << "Ingrese un numero entero positivo entre 1000 y 2000: ";
    cin >> num;
    if (num < 1000 || num > 2000) {
    cout << "Error: El numero debe estar entre 1000 y 2000";
}
    }while (num < 1000 || num > 2000);


    cout << "Los primeros 100 numeros enteros que van a continuacion de " << num << " son:" << endl;
    for (int i = num + 1; i <= num + 100; i++) {
    cout << i << " ";
    }
    cout << endl;


    cout << "Los primeros 100 numeros pares que van a continuacion de " << num << " son:" << endl;
    int count = 0;
    for (int i = num + 1; i <= num + 200; i++) {
    if (i % 2 == 0) {
    cout << i << " ";
    count++;
}
    if (count == 100) {
    break;
}
    }
    cout << endl;


    cout << "Los primeros 100 numeros impares que van a continuacion de " << num << " son:" << endl;
    count = 0;
    for (int i = num + 1; i <= num + 200; i++) {
    if (i % 2 == 1) {
    cout << i << " ";
    count++;
}
    if (count == 100) {
    break;
}
    }
    cout << endl;

    cout << "Deseas volver a ejecutar este programa? (s/n): ";
    cin >> opcion;
}   while (opcion == 's');

    return 0;
}
