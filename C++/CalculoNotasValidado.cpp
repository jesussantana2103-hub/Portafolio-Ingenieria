//Hecho por Jesus Osiris Santana Taveras
//05 de marzo del 2023, modificado para el 19 de marzo del 2023
//Programa que suma practicas y examenes parciales para encontrar la nota total de un estudiante

 #include <iostream>
using namespace std;

int main() {
  float primer_examen_parcial, practicas1, segundo_examen_parcial, practicas2, examen_final, nota_total;
  char opcion;

  do{
  

    do {
      cout << "Ingresa la nota del primer examen parcial (de 0 a 20): ";
      cin >> primer_examen_parcial;
      if (primer_examen_parcial < 0 || primer_examen_parcial > 20) {
        cout << "Error: La nota debe estar entre 0 y 20" << endl;
      }
    } while (primer_examen_parcial < 0 || primer_examen_parcial > 20);

    
    do {
      cout << "Ingresa la nota de las practicas del primer parcial (de 0 a 15): ";
      cin >> practicas1;
      if (practicas1< 0 || practicas1 > 15) {
        cout << "Error: La nota debe estar entre 0 y 15" << endl;
      }
    } while (practicas1 < 0 || practicas1 > 15);

    
    do {
      cout << "Ingresa la nota del segundo examen parcial (de 0 a 20): ";
      cin >> segundo_examen_parcial;
      if (segundo_examen_parcial < 0 || segundo_examen_parcial > 20) {
        cout << "Error: La nota debe estar entre 0 y 20" << endl;
      }
    } while (segundo_examen_parcial < 0 || segundo_examen_parcial > 20);
   
    do {
      cout << "Ingresa la nota de las practicas del segundo parcial (de 0 a 15): ";
      cin >> practicas2;
      if (practicas2 < 0 || practicas2 > 15) {
        cout << "Error: La nota debe estar entre 0 y 15" << endl;
      }
    } while (practicas2 < 0 || practicas2 > 15);

    
    
      cout << "Ingresa la nota del examen final (de 0 a 30): ";
      cin >> examen_final;
      if (examen_final < 0 || examen_final > 30) 
        cout << "Error: La nota debe estar entre 0 y 30" << endl;

    nota_total = primer_examen_parcial + practicas1 + segundo_examen_parcial + practicas2 + examen_final;
 	
 	cout << "La nota total del estudiante es: " << nota_total << endl;
 	
 	cout << "Desea seguir ejecutando el programa? (s/n): ";
 	cin >> opcion;
 } while(opcion == 's');
 	
    return 0;
}
