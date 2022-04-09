/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:17:59 by aocak             #+#    #+#             */
/*   Updated: 2022/02/21 17:19:34 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*void func(unsigned int i, char *str)
{
	printf("%d. sıra %s\n", i, str);
}

int main()
{
 	char str[] = "Hello.";
 	printf("The result is %s\n", str);
 	ft_striteri(str, func);
 	printf("The result is %s\n", str);
	return 0;
}*/