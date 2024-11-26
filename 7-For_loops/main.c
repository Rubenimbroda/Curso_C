#include <stdio.h>

int main(){

    int array[] = {1, 2, 3, 4, 8, 10};
    int factorial = 2;                      // creo las variables a multiplicar //
    int i;

        for(i = 0; i < 6; i++){
            factorial *= array[i];      // creo un bucle que mientras se cumplan las codiciones se multiplique el factorial por los números del array //
        }
        printf("La multiplicación es %d\n", factorial); // imprimo el resultado //
}