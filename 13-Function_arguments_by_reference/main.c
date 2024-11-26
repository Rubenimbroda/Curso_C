#include <stdio.h>

typedef struct person
{
    char * name;
    int age;
}person; 

void birthday(person *p); // creo una función antes de sumarle un año //

void birthday(person *p) // creo una función para que se le sume un año //
{
    p->age++;
}

int main()
{
    person Xena;
    Xena.name = "Xena";
    Xena.age = 18;      // asigno los resultados de la estructura //

    printf("%s was before %d years old\n", Xena.name, Xena.age); // imprimo el primer resultado //
    birthday(&Xena);    // llamo a la función para que se haga //
    printf("%s is now %d yers old\n", Xena.name, Xena.age);     // imprimo el segundo resultado despues de que se realice la función anterior //
}