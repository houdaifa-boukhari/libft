/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:46:20 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/11 11:33:25 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (src[i] && (i < (size - dst_lenght - 1)))
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (src_lenght + dst_lenght);
}
