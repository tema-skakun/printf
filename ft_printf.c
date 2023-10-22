/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:57:54 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 14:56:53 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	harvester(va_list *ap, char c, int *cnt)
{
	if (c == '%')
		ft_putchar('%', cnt);
	if (c == 'c')
		ft_putchar((char) va_arg(*ap, int), cnt);
	if (c == 's')
		ft_putstr(va_arg(*ap, char *), cnt);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*ap, int), cnt);
	if (c == 'u')
		ft_putunbr(va_arg(*ap, unsigned int), cnt);
	if (c == 'x')
		ft_putxnbr(va_arg(*ap, unsigned int), cnt);
	if (c == 'X')
		ft_putxXnbr(va_arg(*ap, unsigned int), cnt);
	if (c == 'p')
	{
		ft_putstr("0x", cnt);
		ft_putpnbr((unsigned long int) va_arg(*ap, void *), cnt);
	}
}

int	ft_printf(const char *strf, ...)
{
	va_list	ap;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, strf);
	while (strf[i])
	{
		if (strf[i] == '%')
			harvester(&ap, strf[++i], &count);
		else
			ft_putchar(strf[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	char			c;
	char			*s;
	int				n;
	unsigned int	a;
	int				i;

	c = 'a';
	s = "hello world!";
	n = -1;
	a = 321456;
//
	// i = ft_printf("aava%%aaa");
	// printf("%d\n", i);
	// i = printf("aava%%aaa");
	// printf("%d\n", i);
//
	// i = ft_printf("%c", c);
	// printf("%d\n", i);
	// i = printf("%c", c);
	// printf("%d\n", i);
//
	// i = ft_printf("%s", s);
	// printf("%d\n", i);
	// i = printf("%s", s);
	// printf("%d\n", i);
//
	// i = ft_printf("%i", n);
	// printf("\n%d\n", i);
	// i = printf("%i", n);
	// printf("\n%d\n", i);
//
	// i = ft_printf("%u", a);
	// printf("\n%d\n", i);
	// i = printf("%u", a);
	// printf("\n%d\n", i);
//
	// i = ft_printf("%x", n);
	// printf("\n%d\n", i);
	// i = printf("%x", n);
	// printf("\n%d\n", i);
//
	// i = ft_printf("%p", &a);
	// printf("\n%d\n", i);
	// i = printf("%p", &a);
	// printf("\n%d\n", i);
//
	// i = ft_printf("%% %c %s", c, s);
	// printf("%d\n", i);
	// i = printf("%% %c %s", c, s);
	// printf("%d\n", i);
	return (0);
}
*/