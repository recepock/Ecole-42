/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:02:27 by aocak             #+#    #+#             */
/*   Updated: 2022/02/20 13:00:36 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int main(void)
{
	char a = 'A', b = '.', d = '?';

	printf("%c ascii bir karakter%s\n", a, ft_isascii(a) ? "dir!" : " değildir!");
	printf("%c ascii bir karakter%s\n", b, ft_isascii(b) ? "dir!" : " değildir!");
	printf("%c ascii bir karakter%s\n", d, ft_isascii(d) ? "dir!" : " değildir!");
	printf("%d\n",ft_isascii('g'));
	printf("%d\n",ft_isascii('-'));
	
	return(0);
}
*/
