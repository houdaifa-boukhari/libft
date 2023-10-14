/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:37:45 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/08 19:35:01 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	lenght(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int start, int len_str)
{
	int	i;

	i = 0;
	while (i < len_str)
	{
		dest[i] = src[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		len_str;
	int		start;
	int		end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = lenght(s1) - 1;
	while (check(s1[start], set))
		start++;
	while (end > start && check(s1[end], set))
		end--;
	len_str = end - start + 1;
	new_str = (char *)malloc(sizeof(char) * len_str);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, (char *)s1, start, len_str);
	return (new_str);
}
