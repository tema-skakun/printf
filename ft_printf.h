/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:00:56 by fdarkhaw          #+#    #+#             */
/*   Updated: 2021/11/17 12:51:39 by fdarkhaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *strf, ...);
void	ft_putchar(char c, int *cnt);
void	ft_putstr(char *s, int *cnt);
void	ft_putnbr(int nb, int *cnt);
void	ft_putunbr(unsigned int nb, int *cnt);
void	ft_putxnbr(unsigned int nb, int *cnt);
void	ft_putxXnbr(unsigned int nb, int *cnt);
void	ft_putpnbr(unsigned long int nb, int *cnt);

#endif
