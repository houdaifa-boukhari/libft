/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:08:05 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/05 14:43:50 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dest)
{
	size_t	i;
	int		lenght_src;

	lenght_src = 0;
	i = 0;
	while (src[lenght_src])
		lenght_src++;
	if (size_dest > 0)
	{
		while (src[i] != '\0' && size_dest > i + 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght_src);
}
