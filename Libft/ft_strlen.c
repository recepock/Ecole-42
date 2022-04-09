/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:04:12 by aocak             #+#    #+#             */
/*   Updated: 2022/01/30 10:04:15 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	i++;
	return (i);
}

/*
int main(void)
{
	const char *cp = "Bilgisayar";
	int ret;

	ret = ft_strlen(cp);

	printf("%s karakter dizisinin uzunluğu: %d\n", cp, ret);

	return(0);
}
*/