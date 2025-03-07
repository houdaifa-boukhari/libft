/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:50:45 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 15:50:22 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	while (*s)
		*new_str++ = f(i++,*s++);
	*new_str = '\0';
	return (new_str - i);
}

/*int main()
{
	char str[] = "hello brohers";
	char *s = ft_strmapi(str, &upper);
	printf("%s\n", s);
}*/
