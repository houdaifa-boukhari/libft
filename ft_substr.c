/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:34:51 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/16 16:38:15 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lenght(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenght_sub;
	size_t	lenght_src;
	char	*sub;
	size_t	i;

	lenght_sub = 0;
	if (!s)
		return (NULL);
	lenght_src = lenght((char *)s);
	if (start > lenght_src)
		len = 0;
	else if (len > (lenght_src - start))
		lenght_sub = lenght_src - start + 1;
	else
		lenght_sub = len + 1;
	i = 0;
	sub = (char *)malloc(sizeof(char) * lenght_sub);
	if (sub == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
