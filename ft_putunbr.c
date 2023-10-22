/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:32:44 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 11:15:14 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb, int *cnt)
{
	if (nb > 9)
	{
		ft_putunbr(nb / 10, cnt);
		ft_putunbr(nb % 10, cnt);
	}
	else
		ft_putchar(nb + '0', cnt);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	n = -2147483648;
	ft_putunbr(n, &i);
	printf("\n%u\n", n);
	return (0);
}
*/