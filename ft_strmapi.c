/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:50:45 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/06 18:46:22 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	char	*result;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_str == NULL)
		return (NULL);
	result = new_str;
	while (*s)
		*new_str++ = f(i++,*s++);
	*new_str = '\0';
	return (result);
}
