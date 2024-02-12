/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:45:19 by acolas-l          #+#    #+#             */
/*   Updated: 2024/02/12 17:50:21 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int result_o;
	int result_m;

	//  %c
	result_o = printf("printf c orig: %c %c %c %c\n", 'm', '1', ' ', '#');
	result_m = ft_printf("printf c mine: %c %c %c %c\n", 'm', '1', ' ', '#');
	printf("Result original: %d, Result mine: %d\n", result_o, result_m);


	//  %s
	result_o = printf("printf s orig: %s\n", "special c ¢@#|∞≠çñäêó$&¿?¡!");
	result_m = ft_printf("printf s mine: %s\n", "special c ¢@#|∞≠çñäêó$&¿?¡!");
	printf("Result original: %d, Result mine: %d\n", result_o, result_m);
	result_o = printf("printf s orig: %s\n", NULL);
	result_m = ft_printf("printf s mine: %s\n", NULL);
	printf("Result original: %d, Result mine: %d\n", result_o, result_m);


	//  %p
	int var = 123;
	result_o = printf("printf p orig: %p\n", (void*)&var);
	result_m = ft_printf("printf p mine: %p\n", (void*)&var);
	printf("Result original: %d, Result mine: %d\n", result_o, result_m);

	//  %d, %i, %u, %x, %X 
	int num = -42;
	result_o = printf("printf d orig: %d, printf i orig: %i, printf u orig: %u, printf x orig: %x, printf X orig: %X\n", num, num, num, num, num);
	result_m = ft_printf("printf d mine: %d, printf i mine: %i, printf u mine: %u, printf x mine: %x, printf X mine: %X\n", num, num, num, num, num);
	printf("Result original: %d, Result mine: %d\n", result_o, result_m);


	//  %%
	result_o = printf("%%\n");
	result_m = ft_printf("%%\n");
	printf("Result original: %d, Result mine: %d\n", result_o, result_m);

	return (0);
}
