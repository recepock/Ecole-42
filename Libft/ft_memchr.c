/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:44:52 by aocak             #+#    #+#             */
/*   Updated: 2022/02/23 23:50:47 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;

	a = (unsigned char *)s;
	b = (unsigned char )c;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (b == *a)
		{
			return ((void *)a);
		}
		a++;
		n--;
	}
	return (NULL);
}

/*int main(void)
{   
	char a[] = "Bilgisayar";
	printf("%p", ft_memchr(a,'g', 4));
}
*/