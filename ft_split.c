/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:10:31 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/11 17:30:28 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] != c)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

void	free_str(char **str , int lenght)
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

char	**ft_split(char const *s, char c)
{
	int	nbr_word;
	int	i;
	int	start;
	int	end;
	int	word_lenght;
	char **str;
	
	i = 0;
	end = 0;
	start = 0;
	nbr_word = count_words((char *)s,c);
	str = (char **)malloc(sizeof(char *) * (nbr_word + 1));
	if (str == NULL)
		return (NULL);
	while (s[end])
	{
		start = end;
		if (s[end] != c)
		{
			while (s[end] != c && s[end] != '\0')
				end++;
			word_lenght = end - start;
			str[i] = (char *)malloc(sizeof(char) * word_lenght + 1);
			if (!str[i])
			{
				free_str(str, i);
				return (NULL);
			}
			ft_memcpy(str[i], &s[start], word_lenght);
			i++;
		}
		else
			end++;
	}
	str[i] = NULL;
	return (str);
}

int main() {
    const char *input_string = "Hello,World,Split,Example";
    char delimiter = ',';

    char **result = ft_split(input_string, delimiter);

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
}
