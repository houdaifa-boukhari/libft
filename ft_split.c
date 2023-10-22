/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:10:31 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/22 21:40:05 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] != c)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] == c && (str[i + 1] != c && str[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

void	free_str(char **str, int lenght)
{
	int	i;

	i = 0;
	if (str)
	{
		while (i < lenght)
		{
			free(str[i]);
			i++;
		}
		free (str);
	}
}

size_t word_lenght(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char **alocation_split(char const *str, char c, char **new_str, size_t nbr_word)
{
	size_t i;
	size_t start;

	i = 0;
	start = 0;
	while (i < nbr_word)
	{
		while (str[start] != '\0' && str[start] == c)
			start++;
		new_str[i] = ft_substr(str, start, word_lenght(str + start, c));
		if (!new_str[i])
		{
			free_str(new_str, i);
			return(NULL);
		}
		start += word_lenght(str + start,c);
		while (str[start] != '\0' && str[start] == c)
			start++;
		i++;
	}
	new_str[i] = NULL;
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	int	nbr_words;
	char **str;

	if (!s || s[0] == '\0')
	{
		str = (char **)malloc(sizeof(char *));
		if (!str)
			return (NULL);
		str[0] = NULL;
		return (str);
	}

	nbr_words = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (!str)
		return (NULL);
	str = alocation_split(s, c, str, nbr_words);
	return (str);
}

/*int	main()
{
    char **result = ft_split("", 'z');

    if (result) {
        int i = 0;
        while (result[i] != NULL) {
            printf("Word %d: %s\n", i, result[i]);
            i++;
        }

        // Free memory allocated for substrings and the array.
        free_str(result, i);
    } else {
        printf("Error occurred while splitting the string.\n");
    }

    return 0;
}*/
