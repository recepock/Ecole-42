/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:24:58 by aocak             #+#    #+#             */
/*   Updated: 2022/02/06 13:28:18 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc (size * count);
	if (!p)
		return (NULL);
	ft_bzero (p, size * count);
	return (p);
}
/*int main(void)
{
	char *a;
	a = ft_calloc(8,sizeof(int));
	a = "12345678";
	printf("%c",a[5]);
}
*/