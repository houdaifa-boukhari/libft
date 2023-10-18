/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:37:45 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/16 18:13:56 by hel-bouk         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		len_str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = lenght(s1);
	while (check(s1[start], set) && s1[start] != '\0')
		start++;
	while (end > start && check(s1[end - 1], set))
		end--;
	len_str = end - start + 1;
	new_str = (char *)malloc(sizeof(char) * len_str);
	if (new_str == NULL)
		return (NULL);
	while (start < end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}

/*int main()
{
	char s1[] = "lorem ipsum dolor sit amet";
	printf("%s\n",ft_strtrim(s1, "te"));
}*/
