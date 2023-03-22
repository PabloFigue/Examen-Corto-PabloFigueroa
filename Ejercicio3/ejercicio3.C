#include <stdio.h>

int main() {
    int n, i, termino_anterior = 0, termino_actual = 1, termino_Nuevo;    //valores iniciales
    printf("Ingrese el número de términos de la serie de Fibonacci que desea mostrar: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci de %d términos:\n", n);
    for (i = 1; i <= n; ++i) {
        printf("%d, ", termino_anterior);
        termino_Nuevo = termino_anterior + termino_actual;
        termino_anterior = termino_actual;
        termino_actual = termino_Nuevo;
    }
    return 0;
}