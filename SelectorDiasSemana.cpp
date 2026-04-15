//Hecho por Jesus Osiris Santana Taveras
//4 de abril del 2023
//Programa que al ingresarle un numero del 1 al 7 te dara el dia segun su numero correspondiente


#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main() {
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    int num;
    char opcion;
    
    do{
    	
    system("cls");
    
    cout << "Ingresa un numero del 1 al 7: ";
    cin >> num;
        
    while (num < 1 || num > 7) {
    cout << "\nLa cantidad de dias en una semana son 7 mijo. Debe ser del 1 al 7." << endl;
    cout << "\nIngresa un numero del 1 al 7: ";
    cin >> num;
}
    cout << "\nEl dia de la semana correspondiente al numero " << num << " es: " << dias[num - 1] << endl;
    cout << "\nDeseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
        
}   while (opcion == 's');
    
    return 0;
}
