/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:48:19 by acolas-l          #+#    #+#             */
/*   Updated: 2024/01/24 08:27:56 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char *format, va_list variadicargs)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(variadicargs, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(variadicargs, char *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(variadicargs, int));
	else if (*format == '%')
		count += ft_putchar(*format);
	else if (*format == 'u')
		count += ft_unsint(va_arg(variadicargs, unsigned int));
	else if (*format == 'p')
		count += ft_putptr(va_arg(variadicargs, unsigned long long));
	else
	{
		return (0);
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	varg;
	int		counter;

	if (!str)
		return (0);
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
	return (counter);
}
