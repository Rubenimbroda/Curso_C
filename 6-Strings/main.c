#include <stdio.h>
#include <string.h>

int ft_strlen(char * string){   // función que cuenta la longitud de un string //

    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    return(i); 
}

int main() {
  char  *first_name = "John";
  char last_name[] = "Dohemia";
  char name[100];

  last_name[0] = 'B'; // cambio la primera posición de "last_name" por una "B"
    sprintf(name, "%s %s", first_name, last_name);  // digo que el nombre es lo que se imprime //

  if (strncmp(name, "John Bohemia", ft_strlen(name)) == 0) {    // si el nombre es "Jhon Bohemia" imprime "is the same" //
      printf("Is the same!\n"); 
  }

  //esto name[0]='\0' es == vaciar el string
  name[0]='\0';
  //esto concatena la variable name con firt name con un limite de 4 char
  strncat(name,first_name,ft_strlen(first_name));
  //esto concatena la variable name con last name con un limite de 7 char
  strncat(name,last_name,ft_strlen(last_name));
  printf("%s\n",name);
}