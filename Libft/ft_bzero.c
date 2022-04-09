/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:02:02 by aocak             #+#    #+#             */
/*   Updated: 2022/02/24 00:01:32 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*b;

	b = (char *)s;
	while (n > 0)
	{
		*b = 0;
		n--;
		b++;
	}
	return ;
}

/*
int main()
{
   char str[100] = "Libc is the standard library.";

	ft_bzero(str, 1);
	printf("%s\n", str);
	
	return 0;
}
*/