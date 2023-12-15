/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:37:54 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 15:52:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void upper(unsigned int i, char *str)
{
	*str -= 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
		f(i++, s++);
}

/*int main()
{
	char str[] = "hello world";
	ft_striteri(str, &upper);
	printf("%s\n", str);
}*/
