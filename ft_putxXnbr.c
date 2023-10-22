/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxXnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:32:44 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 12:42:03 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putxXnbr(unsigned int nb, int *cnt)
{
	char			*base;

	base = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_putxXnbr(nb / 16, cnt);
		ft_putxXnbr(nb % 16, cnt);
	}
	else
		ft_putchar(base[nb], cnt);
}
/*
#include <stdio.h>

int	main(void)
{
	int		n;
	int		i;

	n = -2147483648;
	ft_putxXnbr(n, &i);
	printf("\n%X\n", n);
	return (0);
}
*/