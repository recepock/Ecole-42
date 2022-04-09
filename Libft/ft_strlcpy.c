/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:02:45 by aocak             #+#    #+#             */
/*   Updated: 2022/02/13 11:07:00 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

size_t	ft_strlcpy(char	*dst, const char *src, size_t n)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (n != 0)
	{
		while (*src != '\0' && n-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char	dst[23] = "zzzzzzzzzz";
	char	src[12] = "xxeexxxxx";
	size_t	i;

	i = ft_strlcpy(dst, src, 2);
	printf("%s dizisi ve uzunuğu %zu",dst,i);
}*/
