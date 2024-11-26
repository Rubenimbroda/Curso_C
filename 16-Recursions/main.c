#include <stdio.h>

int factorial(int number);

int main()
{
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("2! = %i\n", factorial(2));
    printf("3! = %i\n", factorial(3));
    printf("4! = %i\n", factorial(4));
    printf("5! = %i\n", factorial(5));
    printf("15! = %i\n", factorial(15));
    
}

int factorial(int number)
{
    if(number > 1) {
        return number * factorial(number-1); // esta función multiplica el número del factorial por el factorial anterior //
                                            // el factorial se calcula multiplicando ese número por todos los anteriores (5! = 5 x 4 x 3 x 2 x 1 = 120) //
    }
    else {
        return 1;
    }
}