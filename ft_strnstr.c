/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:02:55 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/16 16:18:29 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && n > i)
	{
		j = 0;
		while (str[i + j] == find[j] && n > i + j)
		{
			if (find[j + 1] == '\0')
			{
				return ((char *)(str + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
