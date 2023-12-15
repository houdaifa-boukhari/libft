/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:46:09 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 15:48:38 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}

/*int main()
{
	int nb = 42;
	ft_memset(&nb, 0b11111111, 4);	
	ft_memset(&nb ,0b11111010, 2);
	ft_memset(&nb ,0b11000111, 1);
	printf("%d", nb);
}*/
