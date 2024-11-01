/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 06:03:56 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 15:48:11 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*int main()
{
	int tab[5] = {1,2,3,4,5};
	int *tab1 = memchr(tab, 3, 5 * sizeof(int));
	printf ("%zu\n", sizeof(tab1));
	for (int i = 0; i < 3 ; i++)
		printf("%d ", tab1[i]);
}*/
