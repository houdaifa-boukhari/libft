/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:39:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 14:51:09 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (count == 0 && size == 0 && (count > (SIZE_MAX / size)))
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, count * size);
	return (memory);
}
