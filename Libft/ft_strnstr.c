/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:05:46 by aocak             #+#    #+#             */
/*   Updated: 2022/02/03 12:41:43 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	if (!*little)
		return ((char *)big);
	if (*big == 0)
		return (NULL);
	while (len >= ft_strlen(little) && *big)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			i++;
		}
		big++;
		len--;
	}
	return (NULL);
}
/*int main(void)
{
	char a[20]="aaabcabcd";
	char b[15]="c";
	printf("%s", ft_strnstr(a,b,-1));
}*/