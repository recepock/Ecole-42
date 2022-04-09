/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:03:37 by aocak             #+#    #+#             */
/*   Updated: 2022/01/30 10:03:39 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int main (void)
{
	printf ("%c", ft_isdigit('5'));
}
*/