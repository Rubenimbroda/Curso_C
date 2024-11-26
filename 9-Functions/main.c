#include<stdio.h>

void print_big(int number);     // creo una función que no devuelve nada que se llama "imprime grande" //

int main(){
    int array[] = {3, 7, 9, 13, 19, 25};       
    int i;
    for(i = 0; i < 6; i++){     // mientras print big esté en una posición mas pequeña que 6 continua el bucle //
        print_big(array[i]);
    }
}

void print_big(int number){
    if(number > 11){
    printf("%d is big\n", number);  // imprimo los números mayores que 11 //
    }
}