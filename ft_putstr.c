/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:19:44 by acolas-l          #+#    #+#             */
/*   Updated: 2023/12/22 18:20:13 by acolas-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int counter;

    counter = 0;
    while (*str)
    {
        counter += ft_putchar(*str);
        str++;
    }
    return (counter);
}
