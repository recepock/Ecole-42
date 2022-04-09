/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:29:44 by aocak             #+#    #+#             */
/*   Updated: 2022/02/21 17:14:58 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char )c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char )c)
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
    char a[] = "";
    printf("%s", ft_strchr(a,'\0'));
}*/