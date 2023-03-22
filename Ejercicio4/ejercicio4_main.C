#include <stdio.h>
#include "ejercicio4_add.h" //libreria creada

int main() {
    float operador1,operador2, resultado;

    printf("Ingrese el primer numero a operar: ");
    scanf("%f", &operador1);
    printf("\nIngrese el segundo numero a operar: ");
    scanf("%f", &operador2);
    
    printf("Valor de PI: %.5f\n", PI);
    
    resultado = suma(operador1, operador2);
    printf("%.2f + %.2f = %.2f\n", operador1, operador2, resultado);
    
    resultado = resta(operador1, operador2);
    printf("%.2f - %.2f = %.2f\n", operador1, operador2, resultado);
    
    resultado = multiplicacion(operador1, operador2);
    printf("%.2f * %.2f = %.2f\n", operador1, operador2, resultado);
    
    resultado = division(operador1, operador2);
    printf("%.2f / %.2f = %.2f\n", operador1, operador2, resultado);
    
    return 0;
}