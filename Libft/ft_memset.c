/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:04:04 by aocak             #+#    #+#             */
/*   Updated: 2022/02/24 00:03:36 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len > 0)
	{
		*s = c;
		len--;
		s++;
	}
	return (b);
}

/*
int main(void)
{
	char cdizi[] = "Bilgisayar";

	ft_memset(cdizi, 'x', 5);

	printf("cdizi bellek içeriği: %s\n", cdizi);
}
*/