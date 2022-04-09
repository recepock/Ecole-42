/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:18:13 by aocak             #+#    #+#             */
/*   Updated: 2022/02/23 20:00:04 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	kntrl(int n)
{
	int	say;
	int	i;

	say = n;
	i = 1;
	while (say)
	{
		say /= 10;
		i++;
	}
	i = i + (n <= 0);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = kntrl(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	str[--len] = '\0';
	while (n >= 10)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	str[--len] = n + '0';
	return (str);
}
/*
int main (void)
{
	int c = -53;
	printf("%s", ft_itoa(c));
}*/