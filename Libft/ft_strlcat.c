/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:03:06 by aocak             #+#    #+#             */
/*   Updated: 2022/02/21 17:24:48 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
	while (*src != '\0' && i < dstsize - 1)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
/*int	main(void)
{
	char	dst[23] = "zzzzzzzzzz";
	char	src[12] = "xxeexxxxx";
	size_t	i;

	i = ft_strlcat(dst, src, 10);
	printf("%s dizisi ve uzunuğu %zu",dst,i);
}*/