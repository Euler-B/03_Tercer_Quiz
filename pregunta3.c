#include <stdio.h>

int main() {
    short edad = 21;

    if (edad >= 0 && edad <= 2)
    printf("Estimado Bebe, Buenos dias \n");

    if (edad >= 3 && edad <= 14)
    printf("Estimado Niño, Buenos dias  \n");

    if (edad >= 15 && edad <= 20)
    printf("Estimado Adolescente, Buenos dias  \n");

    if (edad > 20)
    printf("Estimado Adulto, Buenos dias  \n");

}