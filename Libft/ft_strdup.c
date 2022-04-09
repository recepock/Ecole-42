/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:20:59 by aocak             #+#    #+#             */
/*   Updated: 2022/02/23 23:52:45 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	uzunluk;

	uzunluk = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * uzunluk + 1);
	if (!dst)
		return (0);
	dst[uzunluk] = 0;
	while (uzunluk--)
		dst[uzunluk] = s1[uzunluk];
	return (dst);
}
/*int main(void)
{
	char *a =  "HAHAHA tu me vois pas !";
	char *b;
	b = ft_strdup(a);
	printf ("%s", b);
}
*/