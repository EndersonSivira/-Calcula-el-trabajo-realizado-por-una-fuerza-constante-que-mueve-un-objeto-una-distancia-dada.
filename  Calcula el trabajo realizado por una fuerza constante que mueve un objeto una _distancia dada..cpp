#include <stdio.h>

int main() {
    float fuerza, distancia, trabajo;

    printf("Ingrese la fuerza aplicada al objeto (en newtons): ");
    scanf("%f", &fuerza);

    printf("Ingrese la distancia recorrida por el objeto (en metros): ");
    scanf("%f", &distancia);

    trabajo = fuerza * distancia;

    printf("El trabajo realizado por la fuerza es: %.2f joules\n", trabajo);

    return 0;
}