//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//Programa que al ingresar una cantidad de segundos te dara las horas, minutos y segundos restantes

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int segundos, horas, minutos, seg_restantes;
    char opcion;
    
    do{
    	
	system("cls");
	
    cout << "Ingrese una cantidad de segundos: ";
    cin >> segundos;
    
    horas = segundos / 3600;
    seg_restantes = segundos % 3600;
    minutos = seg_restantes / 60;
    seg_restantes = seg_restantes % 60;
    
    cout << "Equivalente a " << horas << " hora(s), " << minutos << " minuto(s), " << seg_restantes << " segundo(s)." << endl;
    
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
        
}   while (opcion == 's');

    return 0;
}
