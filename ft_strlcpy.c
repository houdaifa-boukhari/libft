/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:08:05 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/11 11:20:45 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dest)
{
	size_t	i;
	int		lenght_src;

	i = 0;
	lenght_src = ft_strlen(src);
	if (size_dest > 0)
	{
		while (src[i] && size_dest > i + 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenght_src);
}
