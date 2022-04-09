/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:54:03 by aocak             #+#    #+#             */
/*   Updated: 2022/02/28 03:52:11 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	*len = *len + 1;
}

void	ft_putstr(char *s, int *len)
{
	if (!s)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (*s)
	{
		write(1, s++, 1);
		*len = *len + 1;
	}
}

void	ft_puthex(size_t n, int start, int bolen, int *len)
{
	int		j;
	char	onaltiliksayi[100];

	j = 0;
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		if (n % bolen < 10)
			onaltiliksayi[j++] = 48 + n % bolen;
		else
			onaltiliksayi[j++] = start + n % bolen;
		n = n / bolen;
	}
	onaltiliksayi[j] = 0;
	while (--j >= 0)
		ft_putchar(onaltiliksayi[j], len);
}
