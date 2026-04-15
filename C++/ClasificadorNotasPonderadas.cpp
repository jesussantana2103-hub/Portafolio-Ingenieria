//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//Programa que calcula la nota final numerica y nota final con letra leyendo cada una de las practicas y examenes en base a 100


#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    float practicas1, examen1, practicas2, examen2, examenFinal;
    float notaFinalNumerica;
    char notaFinalLetra;
    char opcion;

do{
    do{
    system ("cls");
    
    cout << "Ingrese la nota de practicas del primer parcial (0-100): " ;
    cin >> practicas1;
    if (practicas1 < 0 || practicas1 > 100) {
    cout << "\nError: La nota debe estar entre 0 y 100" << endl;
}
}   while (practicas1 < 0 || practicas1 > 100);


    do{
    cout << "\nIngrese la nota del primer examen parcial (0-100): ";
    cin >> examen1;
    if (examen1 < 0 || examen1 > 100) {
    cout << "\nError: La nota debe estar entre 0 y 100" << endl;
}
}   while (examen1 < 0 || examen1 > 100);

    do{
    cout << "\nIngrese la nota de practicas del segundo parcial (0-100): ";
    cin >> practicas2;
    if (practicas2 < 0 || practicas2 > 100) {
    cout << "\nError: La nota debe estar entre 0 y 100" << endl;
}
}   while (practicas2 < 0 || practicas2 > 100);

    do{

    cout << "\nIngrese la nota del segundo examen parcial (0-100): ";
    cin >> examen2;
    if (examen2 < 0 || examen2 > 100) {
    cout << "\nError: La nota debe estar entre 0 y 100" << endl;
}
}   while (examen2 < 0 || examen2 > 100);

    do{

    cout << "\nIngrese la nota del examen final (0-100): ";
    cin >> examenFinal;
    if (examenFinal < 0 || examenFinal > 100) {
    cout << "\nError: La nota debe estar entre 0 y 100" << endl;
}
}   while (examenFinal < 0 || examenFinal > 100);

   
    notaFinalNumerica = practicas1 * 0.05 + examen1 * 0.25 + practicas2 * 0.10 + examen2 * 0.30 + examenFinal * 0.30;

    
    if (notaFinalNumerica >= 90) {
        notaFinalLetra = 'A';
    } else if (notaFinalNumerica >= 80) {
        notaFinalLetra = 'B';
    } else if (notaFinalNumerica >= 70) {
        notaFinalLetra = 'C';
    } else if (notaFinalNumerica >= 60) {
        notaFinalLetra = 'D';
    } else {
        notaFinalLetra = 'F';
    }

    
    cout << "\nLa nota final numérica es: " << notaFinalNumerica << endl;
    cout << "\nLa nota final en letra es: " << notaFinalLetra << endl;
    
    cout << "\nDeseas volver ejecutar el programa? (s/n): ";
    cin >> opcion;
}   while (opcion == 's');

    return 0;
}
