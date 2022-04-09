/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:32:33 by aocak             #+#    #+#             */
/*   Updated: 2022/03/02 18:12:49 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_inttype(long arguman, int *len)
{
	if (arguman < 0)
	{
		ft_putchar('-', len);
		arguman = -arguman;
	}
	return (arguman);
}

void	ft_type(char s, va_list arguman, int *len)
{
	if (s == 'c')
		ft_putchar(va_arg(arguman, int), len);
	else if (s == 's')
		ft_putstr(va_arg(arguman, char *), len);
	else if (s == 'p')
	{
		ft_putstr("0x", len);
		ft_puthex(va_arg(arguman, size_t), 87, 16, len);
	}
	else if (s == 'd' || s == 'i')
		ft_puthex(ft_inttype((va_arg(arguman, int)), len), 55, 10, len);
	else if (s == 'x')
		ft_puthex(va_arg(arguman, unsigned int), 87, 16, len);
	else if (s == 'X')
		ft_puthex(va_arg(arguman, unsigned int), 55, 16, len);
	else if (s == 'u')
		ft_puthex(va_arg(arguman, unsigned int), 55, 10, len);
	else if (s == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguman;
	int		len;

	len = 0;
	va_start(arguman, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_type(*str, arguman, &len);
		}
		else
		{
			len += write(1, str, 1);
		}
		str++;
	}
	va_end(arguman);
	return (len);
}
