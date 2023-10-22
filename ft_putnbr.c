/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:32:44 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/15 16:10:32 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *cnt)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-', cnt);
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10, cnt);
		ft_putnbr(n % 10, cnt);
	}
	else
		ft_putchar(n + '0', cnt);
}
/*
int	main(void)
{
	int	n;
	int	i;

	n = -2147483648;
	ft_putnbr(n, &i);
	return (0);
}
*/