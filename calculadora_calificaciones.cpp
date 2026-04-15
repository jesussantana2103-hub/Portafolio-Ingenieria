#include<iostream>
#include<stdio.h>

using namespace std; 

int main(){
	float Primer_examen_parcial, Practicas1, Segundo_examen_parcial, Practicas2, Examen_final;
	float Nota_final;
	
	cout << "Ingresar nota del primer examen parcial: (de 0 a 20)";
	cin >> Primer_examen_parcial;
	cout << "Ingresar nota de las practicas del primer parcial: (de 0 a 15)";
	cin >> Practicas1;
	cout << "Ingresar nota del segundo examen parcial: (de 0 a 20)";
	cin >> Segundo_examen_parcial;
	cout << "Ingresar nota de las practicas del segundo parcial: (de 0 a 15)";
	cin >> Practicas2;
	cout << "Ingresar nota del examen parcial: (de 0 a 30)";
	cin >> Examen_final;
	
	Nota_final = Primer_examen_parcial + Practicas1 + Segundo_examen_parcial + Practicas2 + Examen_final;
	
	cout << "\nNota total del estudiante es: " << Nota_final << endl;

	return 0;
}
