/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:32:44 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 12:42:16 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpnbr(unsigned long int nb, int *cnt)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putpnbr(nb / 16, cnt);
		ft_putpnbr(nb % 16, cnt);
	}
	else
		ft_putchar(base[nb], cnt);
}
