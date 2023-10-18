/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:46:20 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/15 16:31:39 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_lenght;
	size_t	dst_lenght;
	size_t	i;
	size_t	j;

	i = 0;
	src_lenght = ft_strlen(src);
	dst_lenght = ft_strlen((const char *)dst);
	j = dst_lenght;
	if (dst_lenght >= size)
		return (src_lenght + size);
	while (src[i] && (i < size - dst_lenght - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_lenght + dst_lenght);
}
