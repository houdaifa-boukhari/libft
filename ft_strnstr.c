/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:02:55 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/12 14:04:42 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	find_len;

	i = 0;
	if (find[i] == '\0')
		return ((char *)str);
	find_len = ft_strlen(find);
	while (str[i] && n > i)
	{
		if (ft_strncmp(str + i, find, find_len) == 0 && n >= i + find_len)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
