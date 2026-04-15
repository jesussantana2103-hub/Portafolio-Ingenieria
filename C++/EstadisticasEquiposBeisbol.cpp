//Hecho por Jesus Osiris Santana Taveras
//Entregar el 20 de marzo del 2023
//Programa para calcular porcentaje de simpatia en la clase de algoritmos

#include <iostream>
using namespace std;

int main() {
    int aguilas = 9, licey = 5, escogido = 3, estrellas = 3, gigantes = 4, toros = 2;
    int total = aguilas + licey + escogido + estrellas + gigantes + toros;
    char opcion;
    
    do{
	
    float porc_aguilas = (float)aguilas / total * 100;
    float porc_licey = (float)licey / total * 100;
    float porc_escogido = (float)escogido / total * 100;
    float porc_estrellas = (float)estrellas / total * 100;
    float porc_gigantes = (float)gigantes / total * 100;
    float porc_toros = (float)toros / total * 100;
    
    cout << "Porcentaje de simpatia por equipo:" << endl;
    cout << "Aguilas: " << porc_aguilas << "%" << endl;
    cout << "Licey: " << porc_licey << "%" << endl;
    cout << "Escogido: " << porc_escogido << "%" << endl;
    cout << "Estrellas: " << porc_estrellas << "%" << endl;
    cout << "Gigantes: " << porc_gigantes << "%" << endl;
    cout << "Toros: " << porc_toros << "%" << endl;
     
    cout << "Deseas seguir ejecutando el programa? (s/n): ";
    cin >> opcion;

  } while (opcion == 's');
    return 0;
}
