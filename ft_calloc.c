/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 08:39:21 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/06 20:17:31 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	if (count == 0 && n == 0 && (count > (SIZE_MAX / n)))
		return (NULL);
	memory = malloc(count * n);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, count * n);
	return (memory);
}