#include <stdio.h>
#include <stdlib.h>

typedef struct coordination     // defino la estructura y le asigno un nombre //
{
    int x;
    int y;
} coordination;

int main()
{
    coordination * mycoordination;
    mycoordination = (coordination *) malloc(sizeof(coordination)); 

    mycoordination->x = 34;
    mycoordination->y = 54;     // asigno el valor a mycoordination "x" & "y" //

    printf("My coordination: %d, %d\n", mycoordination->x, mycoordination->y);      // imprimo los valores de mycoordination //

    free(mycoordination);
}