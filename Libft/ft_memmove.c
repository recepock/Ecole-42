/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:03:55 by aocak             #+#    #+#             */
/*   Updated: 2022/01/30 10:03:58 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!len || dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
		return (dst);
	}
	while (len-- > 0)
		*d++ = *s++;
	return (dst);
}

/*
int main(void)
{
    char    dst[20] ="12345678901234567890";
    char    src[6] = "ARSLAN";
    ft_memmove(dst,src,13);
    printf("%s", dst);
}
*/