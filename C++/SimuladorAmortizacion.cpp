//Hecho por Jesus Osiris Santana Taveras
//Entregar el 20 de marzo del 2023
//Programa para calcular la tasa, el monto, el interes anuel y mensual de Oscar

#include <iostream>
using namespace std;

int main() {
    float tasa = 0.25; //La tasa de interes en el ejercicio 2 de la A10 dice que es 25%
    float monto, interes_anual, interes_mensual;
    float monto_total;
    char opcion;
    
    do{
	
	do{
	
    cout << "Ingresar cantidad del prestamo: ";
    cin >> monto; 
    if(monto < 0) {
	cout << "\nError: El numero debe ser positivo. " << endl;
}
  } while (monto < 0);
  
    interes_anual = monto * tasa;
    interes_mensual = interes_anual / 12;
    
    monto_total = interes_anual + monto;
    
   
    cout << "\nEl monto de interes a pagar anual es: $" << interes_anual << endl;
    cout << "\nEl monto de interes a pagar en un mes es: $" << interes_mensual << endl;
    cout << "\nEl monto total a pagar anualmente es: $" << monto_total << endl;
    
    cout << "\nDesea seguir ejecutando el programa? (s/n): ";
    cin >> opcion;
    
 } while (opcion == 's');
 
    return 0;
}
