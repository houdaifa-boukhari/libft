/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:11:15 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/11 22:53:22 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(unsigned long nb, int n, int signe)
{
	if (nb >= LONG_MAX / 10 && n > 7)
	{
		if (signe > 0)
			return (-1);
		else if (signe < 0)
			return (0);
	}
	return (1);
}

int	convert(const char *str, int signe)
{
	int	i;
	int	cheack;
	int	result;

	i = 0;
	result = 0;
	cheack = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		cheack = check(result, str[i] - 48, signe);
		if (cheack != -1 && cheack != 0)
			result = result * 10 + (str[i] - 48);
		else if (cheack == -1 || cheack == 0)
			return (cheack);
		i++;
	}
	return (result * signe);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;

	i = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	return (convert(str + i, signe));
}
