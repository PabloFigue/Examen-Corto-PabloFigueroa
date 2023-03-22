#include <stdio.h>

int main() {
    int N;
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &N);
    
    int array[N];
    
    printf("Ingrese los %d valores del array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("El array multiplicado por 2 es:\n");
    int *p = &array[0];
    for (int i = 0; i < N; i++) {
        printf("%d ", (*p) * 2);
        p++;
    }
    printf("\n");
    
    return 0;
}