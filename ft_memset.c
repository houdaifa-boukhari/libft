/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 08:46:09 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/11 15:33:38 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (n > 0)
	{
		str[i] = (char)c;
		i++;
		n--;
	}
	return (str);
}

/*int main()
{
	int nb = 42;
	ft_memset(&nb, 0b11111111, 4);	
	ft_memset(&nb ,0b11111010, 2);
	ft_memset(&nb ,0b11000111, 1);
	printf("%d", nb);
}*/
