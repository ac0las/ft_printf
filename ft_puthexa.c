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

int	ft_puthexa(unsigned int hexa, char form)
{
	int		count;

	count = 0;
	if (hexa >= 16)
	{
		count += ft_puthexa(hexa / 16, form);
		count += ft_puthexa(hexa % 16, form);
	}
	else
	{
		if (hexa <= 9)
			count += ft_putchar(hexa + '0');
		else
		{
			if (form == 'X')
				count += ft_putchar(hexa - 10 + 'A');
			else if (form == 'x')
				count += ft_putchar(hexa -10 + 'a');
		}
	}
	return (count);
}
