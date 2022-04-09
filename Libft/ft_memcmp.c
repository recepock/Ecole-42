/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:30:25 by aocak             #+#    #+#             */
/*   Updated: 2022/02/02 19:57:08 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (a == b)
		return (0);
	while (n > 0)
	{
		if (*a != *b)
		{
			return (*(unsigned char *)a - *(unsigned char *)b);
		}
		n--;
		a++;
		b++;
	}
	return (0);
}
/*int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = ft_memcmp(cp1, cp2, 10);
    printf("%d",ret);
}*/