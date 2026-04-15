//Hecho por Jesus Osiris Santana Taveras
//25 de marzo del 2023
//Programa que lee 100 numeros y determina cuantos son positivos en una sola cantidad


#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int num, count_positivos = 0;
    int contador = 0;
    char opcion;
    
    do{
	
	cout << "Tendras que agregar 100 numeros nuevamente, estas seguro?. \n";
    
	for(int i=0; i<100; i++) {
    
	cout << "\nIngrese un numero " << contador + 1 << ": ";
    cin >> num;
	
	if(num > 0) {
    count_positivos++;
    contador++;
}
    }
    
    cout << "\nHAY " << count_positivos << " NUMEROS POSITIVOS." << endl;
    
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
	
	if(opcion == 's') {
	system("cls");
    contador = 0;
    count_positivos = 0;
    }
        
}   while (opcion == 's');


    return 0;
}
