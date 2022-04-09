/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aocak <aocak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:48:47 by aocak             #+#    #+#             */
/*   Updated: 2022/02/13 12:18:25 by aocak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*src;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	src = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!src)
		return (NULL);
	while (s1[i] != '\0')
	{
		src[i] = s1[i];
		i++;
	}
	while (s2[j])
		src[i++] = s2[j++];
	src[i] = '\0';
	return (src);
}
/*int main(void)
{
	char a[] = "ahmet";
	char b[] = "samet";
	printf("%s", ft_strjoin(a,b));
}
*/