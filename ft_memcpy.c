/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:22:20 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/08 09:10:57 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sourc;
	size_t			i;

	sourc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	if (!dst && !sourc)
		return (dst);
	i = 0;
	while (n > i)
	{
		dst[i] = sourc[i];
		i++;
	}
	return (dst);
}
