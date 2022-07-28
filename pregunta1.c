#include <stdio.h>

int main(){
    short  contador;
    contador = 0;

    while (contador >=0 && contador <= 20) {
        
        if (contador % 2 == 0){
        printf("%d \t --->  Es un Numero Par \n", contador);
        contador++;
        } else {
            contador++;
        }
    }
}