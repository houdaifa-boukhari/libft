/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:35:02 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/08 12:20:51 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenght(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		lenght_total;

	lenght_total = 0;
	if (!s1 || !s2)
		return (NULL);
	lenght_total = lenght(s1) + lenght(s2) + 1;
	new_str = (char *)malloc(sizeof(char) * lenght_total);
	if (new_str == NULL)
		return (NULL);
	while (*s1 != '\0')
		*new_str++ = *s1++;
	while (*s2 != '\0')
		*new_str++ = *s2++;
	*new_str = '\0';
	return (new_str - lenght_total + 1);
}
