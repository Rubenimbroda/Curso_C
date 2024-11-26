#include <stdio.h>

int suma_penes(int num)
{
    static int total = 0;
    total += num;               // esta función hace que despues de la suma del número anterior se siga sumando a ese mismo número (es decir: 5 + 5 = 10; 10 + 9= 19) //
    return total;
}

int main()
{
    printf("El primer pene que chupó Ale medía %d cm\n", suma_penes(5));
    printf("El segundo pene que chupó Ale medía %d cm\n", suma_penes(5));
    printf("El tercer pero no último pene que chupó Ale medía %d cm\n", suma_penes(9));     // imprimo los número sumandose con el anterior
}