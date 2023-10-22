/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:32:49 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 12:23:36 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *cnt)
{
	*cnt += write(1, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 1;
	ft_putchar_fd(c, i);
	return (0);
}
*/