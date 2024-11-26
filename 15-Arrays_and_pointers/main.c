#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
                // aquí creo 2 variables como si fuese un multidimentional array //
    int **numbers;

    numbers = (int **) malloc(3 *sizeof(int *));
    numbers[0] = (int*) malloc(1 *sizeof(int));
    numbers[1] = (int*) malloc(2 *sizeof(int));  
    numbers[2] = (int*) malloc(3 *sizeof(int));            // asigno los huecos que hay para rellenar //

    numbers[0][0] = 1;
    numbers[1][0] = numbers[0][0] + numbers[0][0];
    numbers[1][1] = numbers[1][0] + numbers[0][0];
    numbers[2][0] = numbers[1][1] + numbers[1][0] + numbers[0][0];
    numbers[2][1] = numbers[2][0] + numbers[1][1] + numbers[1][0] + numbers[0][0];
    numbers[2][2] = numbers[2][1] + numbers[2][0] + numbers[1][1] + numbers[1][0] + numbers[0][0];      //relleno los huecos con los número que quiero poner //

    for(x = 0; x < 3; x++){
        for(y = 0; y <= x; y++){
        printf("%d ", numbers[x][y]);  // se explica que mientras haya menos de 3 posiciones de cada uno sigan el bucle y se imprima el número que se calcule arriba //
        }
        printf("\n");     // imprimo un salto de línea para rellenar los huecos cuando se acaben los de cada línea //
    }
    for(x = 0; x < 3; x++){
        free(numbers[x]);       // libero el malloc creado anteriormente después de haber impreso el resultado //
    }     
        free(numbers);  // libero el primer malloc creado //
}