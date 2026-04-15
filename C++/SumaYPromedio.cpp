#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main (){
	cout << ("Favor agregar 5 numeros para la suma y promedio de los mismos: \n");

	int num1,num2,num3,num4,num5,sumatoria,promedio;

	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	sumatoria = num1 + num2 + num3 + num4 + num5;
	promedio = (num1 + num2 + num3 + num4 + num5)/5;
	
	printf("\nLa sumatoria de los 5 numeros es: %d",sumatoria);
	printf("\nEl promedio de los 5 numeros es: %d",promedio);

	return 0;
	}
