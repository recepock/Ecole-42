/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:03:45 by aocak             #+#    #+#             */
/*   Updated: 2022/02/23 17:52:03 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main(void)
{
	printf("%d\n",ft_isprint('4'));
	printf("%d\n",ft_isprint('\t'));
	printf("%d\n",ft_isprint('g'));

	return(0);
}
*/