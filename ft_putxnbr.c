/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:32:44 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 12:41:49 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putxnbr(unsigned int nb, int *cnt)
{
	char			*base;

	base = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putxnbr(nb / 16, cnt);
		ft_putxnbr(nb % 16, cnt);
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
	ft_putxnbr(n, &i);
	printf("\n%x\n", n);
	return (0);
}
*/