/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:41:32 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/12 18:28:32 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sourc;
	size_t			i;

	sourc = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	if (!dst && !sourc)
		return (dst);
	if (dst > sourc)
	{
		while (n--)
			dst[n] = sourc[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dst);
}
