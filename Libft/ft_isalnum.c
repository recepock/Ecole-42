/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:02:09 by aocak             #+#    #+#             */
/*   Updated: 2022/02/20 13:00:30 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/*
int main(void)
{
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('9'));
	printf("%d\n",ft_isalnum('.'));

	return(0);
}
*/