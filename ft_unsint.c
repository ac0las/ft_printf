/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:43:13 by acolas-l          #+#    #+#             */
/*   Updated: 2024/01/21 20:42:50 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsint(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar('0' + n);
	else
	{
		count += ft_unsint(n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	return (count);
}
