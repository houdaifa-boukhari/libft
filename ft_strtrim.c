/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:49:03 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/06 20:08:33 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char *delim)
{
	while (*delim)
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_str;

	start = 0;
	if (!s1)
		return (NULL);
	else if (!set && s1)
		return ((char *)s1);
	end = ft_strlen(s1);
	while (s1[start] && check(s1[start], (char *)set))
		start++;
	while (check(s1[end - 1], (char *)set) && end > start)
		end--;
	new_str = ft_substr(s1, start, end - start);
	if (!new_str)
		return (NULL);
	return (new_str);
}
