/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:59:00 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/09 18:28:08 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenght(long nb)
{
	int	lenght;

	lenght = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		lenght = 1;
	}
	while (nb > 0)
	{
		nb /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = (long)n;
	i = lenght(nb) + 1;
	str = (char *)malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);
	str[--i] = '\0';
	if (nb == 0)
		str[--i] = '0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	i--;
	while (nb > 0)
	{
		str[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (str);
}
