/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:41:05 by acolas-l          #+#    #+#             */
/*   Updated: 2024/01/21 19:46:59 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long hexa)
{
	int	count;

	count = 0;
	if (hexa >= 16)
	{
		count += ft_puthexa(hexa / 16);
		count += ft_puthexa(hexa % 16);
	}
	else
	{
		if (hexa <= 9)
			count += ft_putchar(hexa + '0');
		else
			count += ft_putchar(hexa -10 + 'a');
	}
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthexa(ptr);
	return (count);
}
