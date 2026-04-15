//Hecho por Jesus Osiris Santana Taveras
//05 de marzo 2023, modificado para el 19 de marzo del 2023
//Programa que agrega 5 numeros, los suma y saca el promedio

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main (){
	cout << ("Favor agregar 5 numeros para la suma y promedio de los mismos: \n");

	int num1,num2,num3,num4,num5,sumatoria,promedio;
	char opcion;
	
	do {
	
	 do {
      cout << "Ingresa tu primer numero (de 0 a 100): ";
      cin >> num1;
      if (num1 < 0 || num1 > 100) {
        cout << "Error: El numero debe estar entre 0 y 100" << endl;
      }
    } while (num1 < 0 || num1 > 100);
	
	
	 do {
      cout << "Ingresa tu segundo numero (de 0 a 100): ";
      cin >> num2;
      if (num2 < 0 || num2 > 100) {
        cout << "Error: El numero debe estar entre 0 y 100" << endl;
      }
    } while (num2 < 0 || num2 > 100);
	
	
	 do {
      cout << "Ingresa tu tercer numero (de 0 a 100): ";
      cin >> num3;
      if (num3 < 0 || num3 > 100) {
        cout << "Error: El numero debe estar entre 0 y 100" << endl;
      }
    } while (num3 < 0 || num3 > 100);
	
	 do {
      cout << "Ingresa tu cuarto numero (de 0 a 100): ";
      cin >> num4;
      if (num4 < 0 || num4 > 100) {
        cout << "Error: El numero debe estar entre 0 y 100" << endl;
      }
    } while (num4 < 0 || num4 > 100);
	
	
	 do {
      cout << "Ingresa tu quinto numero (de 0 a 100): ";
      cin >> num5;
      if (num5 < 0 || num5 > 100) {
        cout << "Error: El numero debe estar entre 0 y 100" << endl;
      }
    } while (num5 < 0 || num5 > 100);
	
	sumatoria = num1 + num2 + num3 + num4 + num5;
	promedio = (num1 + num2 + num3 + num4 + num5)/5;
	
	cout << "\nLa sumatoria de los 5 numeros es: " << sumatoria << endl;
	cout << "\nEl promedio de los 5 numeros es: "<< promedio << endl;

  cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
  } while (opcion == 's');
  
	return 0;
	}
