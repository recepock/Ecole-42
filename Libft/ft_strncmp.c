/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:13:41 by aocak             #+#    #+#             */
/*   Updated: 2022/02/02 20:04:06 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == s2)
		return (0);
	while (n > 0)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = ft_strncmp(cp1, cp2, 10);
    printf("%d",ret);
}*/