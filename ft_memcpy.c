/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:22:20 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/12 17:44:39 by hel-bouk         ###   ########.fr       */
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

/*test overlaping
int main()
{
	char str[] = "123456789";
	printf("%s\n", str + 4);
	printf("%s\n", str);
	ft_memcpy(str + 4, str, 5);
	printf("%s\n", str + 4);
}*/

/*int main()
{
	int tab[5] = {1,2,3,4,5};
	int str[5];
	ft_memcpy(str,tab, 5 * sizeof(int));
	for (int i = 0; str[i]; i++)
		printf("%d\n", str[i]);
}*/
