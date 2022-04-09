/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:02:37 by aocak             #+#    #+#             */
/*   Updated: 2022/02/02 18:33:16 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			u;

	if (!n || dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	u = 0;
	while (u < n)
	{
		d[u] = s[u];
		u++;
	}
	return (dst);
}

/*
int main(void)
{
	const char	*cp = "Bilgisayar&Programlama";
	char	dest[40];

	ft_memcpy(dest, cp, 40);
	printf("%s\n", dest);

	return(0);
}
*/