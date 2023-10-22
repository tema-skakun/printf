/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:31:07 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 11:21:38 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *cnt)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		*cnt += write(1, "(null)", 6);
		return ;
	}
	while (s[i] != '\0')
		i++;
	*cnt += write(1, s, i);
}
/*
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	ft_putstr(str, &i);
	printf("\n%s\n", str);
	return (0);
}
*/