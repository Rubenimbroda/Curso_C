#include <stdio.h>

int main() {
    int grades[5];
    int average;    // creo las variables //

    grades[0] = 27;
    grades[1] = 42;
    grades[2] = 51;
    grades[3] = 83;
    grades[4] = 2005;   //  asigno valor a las variables //

    average = grades[0] + grades[1] + grades[2] + grades[3] + grades[4] / 5;    // creo la función para que realice la media de los 5 números //

    printf("The average of the 5 grades is: %d\n", average); // imprimo el resultado //

    return (0);
}