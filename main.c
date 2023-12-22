#include "ft_printf.h"
#include <stdio.h>

int main() 
{
    int i;
    int j;
    char *s;

    s = "Hola mundo";
 

  i = ft_printf("Holaa  %c %s ", 'A', s);
  j = printf("Holaa  %c %s ", 'A', s);

  //ft_printf("mio:\t\t%i\noriginal:\t%i", i, j);
}

