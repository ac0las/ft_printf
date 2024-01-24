/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:06:32 by acolas-l          #+#    #+#             */
/*   Updated: 2024/01/24 12:31:30 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long hexa, char *hex_digits)
{
	int		count;

	count = 0;
	if (hexa >= 16)
	{
		count += ft_puthexa(hexa / 16, hex_digits);
		count += ft_puthexa(hexa % 16, hex_digits);
	}
	else
		count += ft_putchar(hex_digits[hexa]);
	return (count);
}
