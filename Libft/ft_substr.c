/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:24:38 by aocak             #+#    #+#             */
/*   Updated: 2022/02/13 10:38:06 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*src;

	i = 0;
	if (!s)
		return (NULL);
	if ((start < 0) || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (NULL);
	while (start > 0)
	{
		s++;
		start--;
	}
	while (i < len)
	{
		src[i] = s[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
/*int main(void)
{
    char a[] = "i just want this part #############";
    printf("%s",ft_substr(a,15,2));
}*/