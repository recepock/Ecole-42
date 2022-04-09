/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:18:49 by aocak             #+#    #+#             */
/*   Updated: 2022/02/21 17:31:48 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lens;

	lens = ft_strlen(s);
	while (lens >= 0)
	{
		if (s[lens] == (char )c)
		{
			return ((char *)s + lens);
		}
		lens--;
	}
	return (NULL);
}
/*int main(void)
{
    char r[] = "ahmeht";
    printf("%s",strrchr(r,'h'));
}*/