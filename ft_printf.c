/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:48:19 by acolas-l          #+#    #+#             */
/*   Updated: 2023/12/22 12:43:04 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(va_list varg, char *str)
{
	int counter;
	counter = 0;
	if (*str == 'c')
		counter += ft_putchar(va_arg(varg, int));
	else if (*str == 's')
		counter += ft_putstr(va_arg(varg, int))
	/*
	else if (str == 's')
	else if (str == 'p')
	else if (str == 'd')
	else if (str == 'i')
	else if (str == 'u')
	else if (str == 'x')
	else if (str == 'X')
	else if (str == '%')	*/

	else
		return(0);
	return(counter);
}

int	ft_printf(char const *str, ...)
{
	va_list	varg;
	int	counter;

	counter = 0;
	va_start(varg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			counter += ft_format(varg, (char *)str);
		}
		else
			counter += ft_putchar(*str);
		str++;
	}

	va_end(varg);
	return(counter);
}
