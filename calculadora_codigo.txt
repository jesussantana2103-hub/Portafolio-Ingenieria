#include <stdio.h>
#include <stdlib.h>

int contarDigitos(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

int main() {
    int opcion;
    float x, y, w, z;
    int totalCaracteres = 0;

    while (1) {
        printf("********Calculadora********\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
 printf("\n");

        if (opcion == 5) {
            printf("Saliendo del programa...\n");
            break;
        }

        if (opcion < 1 || opcion > 4) {
            printf("La opcion seleccionada no es correcta\n");
             printf("\n");
            continue;
        }

        printf("Ingrese el primer numero: ");
        while (scanf("%f", &x) != 1 || x <= 0) {
            printf("El valor ingresado no es valido. Intente nuevamente: ");
            while (getchar() != '\n');
        }
        totalCaracteres += contarDigitos((int)x);

        printf("Ingrese el segundo numero: ");
        while (scanf("%f", &y) != 1 || y <= 0) {
            printf("El valor ingresado no es valido. Intente nuevamente: ");
            while (getchar() != '\n');
        }
        totalCaracteres += contarDigitos((int)y);

        printf("Ingrese el tercer numero: ");
        while (scanf("%f", &w) != 1 || w <= 0) {
            printf("El valor ingresado no es valido. Intente nuevamente: ");
            while (getchar() != '\n');
        }
        totalCaracteres += contarDigitos((int)w);

        printf("Ingrese el cuarto numero: ");
        while (scanf("%f", &z) != 1 || z <= 0) {
            printf("El valor ingresado no es valido. Intente nuevamente: ");
            while (getchar() != '\n');
        }
        totalCaracteres += contarDigitos((int)z);

        float resultado;
        char operador;

        switch (opcion) {
            case 1:
                resultado = x + y + w + z;
                operador = '+';
                break;
            case 2:
                resultado = x - y - w - z;
                operador = '-';
                break;
            case 3:
                resultado = x * y * w * z;
                operador = '*';
                break;
            case 4:
                resultado = x / y / w / z;
                operador = '/';
                break;
        }
 printf("\n");

        printf("%.1f %c %.1f %c %.1f %c %.1f = %d\n", x, operador, y, operador, w, operador, z, (int)resultado);
 printf("Total de caracteres introducidos: %d\n", totalCaracteres);
  printf("\n");

    }

    return 0;
}
