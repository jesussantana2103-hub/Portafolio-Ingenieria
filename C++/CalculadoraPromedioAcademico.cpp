//Hecho por Jesus Osiris Santana Taveras
//25 de marzo del 2023
//Programa que lee las 30 notas de obviamente los 30 estudiantes y tambien calcula y muestra el promedio del primer examen parcial (0-20).


#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    float nota, total = 0;
    int contador = 0;
    char opcion;
    
    do{
	
    cout << "Bueno no son 100, sino 30 ahora dale pa' alla. Por cierto solo puedes agregar numero entre 0 y 20, ni mas ni menos. \n";
    
    for (int i = 0; i < 30; i++) {
    cout << "\nIngrese la nota del estudiante " << i + 1 << ": ";
    cin >> nota;
	
	if (nota >= 0 && nota <= 20) {
    total += nota;
	contador++;
}
    else {
    cout << "\nPAPA pero te dije que es entre 0 y 20, colabora por favor." << endl;
    i--; 
    }
}
    float promedio = total / contador;
    cout << "\nEl promedio de las notas del primer examen parcial en Calculo II es: " << promedio << endl;

    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
	
	if(opcion == 's') {
	system("cls");
    contador = 0;
    total = 0;
    }
        
}   while (opcion == 's');


    return 0;
}
