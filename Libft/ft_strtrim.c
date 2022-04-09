/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:33:48 by aocak             #+#    #+#             */
/*   Updated: 2022/02/15 18:09:11 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ben(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*src;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (s1 && ben(*s1, set))
	{
		s1++;
	}
	len = ft_strlen(s1);
	while (ben(s1[len - 1], set) && len != 0)
	{
		len--;
	}
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (NULL);
	ft_strlcpy(src, s1, len + 1);
	return (src);
}
/*int main(void)
{
	char *a = "x..xx..  xxxa  hxxxm .et.. x..xxxx";
	char *b = ". x";
	printf("%s\n",ft_strtrim(a,b));
}*/