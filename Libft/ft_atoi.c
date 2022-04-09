/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:21:19 by aocak             #+#    #+#             */
/*   Updated: 2022/02/20 14:48:56 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{	
	int		eksi;
	long	sonuc;

	sonuc = 0;
	eksi = 1;
	while ((*str) == ' ' || ((*str) >= '\t' && (*str) <= '\r'))
		str++;
	if ('-' == (*str) || (*str) == '+')
	{
		if (*str == '-')
			eksi = eksi * -1;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		sonuc = (sonuc * 10) + (*str - '0');
		if (sonuc * eksi < -2147483648)
			return (0);
		if (sonuc * eksi > +2147483648)
			return (-1);
		str++;
	}
	return (sonuc * eksi);
}
/*
int main(void)
{
	char a[] = "  -54";
	printf("%d", ft_atoi(a));
}
*/