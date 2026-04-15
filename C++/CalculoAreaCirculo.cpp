#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    float pi=3.1416;
    float diametro,radio,area;
    cout<<"Ingrese el diametro: "<<endl;
    cin>>diametro;
    radio = diametro/2;
    area = pi*pow(radio,2);
    cout<<"El area del circulo es :"<<area<<endl;
    
	return 0;
}
