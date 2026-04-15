//Hecho por Jesus Osiris Santana Taveras
//26 de marzo del 2023
//Programa que imprimer los numeros pares entre 1201 y 1399

#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	char opcion;
	
	do {
		
	system ("cls");
	
    for(int i=1201; i<=1399; i++) {
    if(i % 2 == 0) {
    cout << i << "\t ";
}
    }
    
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
    
}   while(opcion == 's');
    
	return 0;
}
