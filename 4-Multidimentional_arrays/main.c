#include <stdio.h>

int main() {
    int grades[2][5];
    float average;
    int i;
    int j;      // creo las variables en diferentes niveles //

    grades[0][0] = 80;
    grades[0][1] = 75;
    grades[0][2] = 60;
    grades[0][3] = 99;
    grades[0][4] = 100;     
                                // asigno el valor a las variables //
    grades[1][0] = 25;
    grades[1][1] = 100;
    grades[1][2] = 95;
    grades[1][3] = 87;
    grades[1][4] = 73;

    for (i =0; i < 2; i++) {    // creo una función que haga un bucle mientras se cumplan las condiciones //
        average = 0;

        for (j = 0; j < 5; j++) {      // creo otro bucle y explico que sume los números si se cumplen las condiciones //
            average += grades[i][j];
        }

        average /= 5.0;    // función para que realice la media //
        printf("The average marks obtained in subjet %d is: %2f\n", i, average);    // imprimo el resultado //
    }
}