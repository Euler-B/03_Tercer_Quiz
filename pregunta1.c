#include <stdio.h>

int main(){
    //short contador;
    short i;

    for (i = 0; i >= 0 && i <= 20; i++){

        if (i % 2 == 0) {
        printf("%d \t --->   Es un numero par =) \n", i);
        } else {
        continue;
        }
    }
}