#include "ft_printf.h"
#include <stdio.h>

int main() {
    char num = 'a';
    int result;

    result = ft_printf("%c\n", num);
    printf("%i\n", result);

    result = printf("%c\n", num);
    printf("%i\n", result);
/*
    printf("printf: ");
    printf("El char es %c\n", num);

    ft_printf("ft_printf: ");
    ft_printf("El número es %c\n", num);

    printf("printf: Counter = %i\n", counter_printf);
    ft_printf("ft_printf: Counter = %i\n", counter_ft_printf);*/

    return (0);
}

