#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit); //Captura el valor flotante ingresado y lo guarda en la direccion de fahrenheit
    celsius = (fahrenheit - 32) * 5 / 9;    //formular para convertir de grados fahrenheit a celsius
    printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);
    return 0;
}