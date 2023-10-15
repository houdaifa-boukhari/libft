/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:43:30 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/15 13:48:42 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (0);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write (fd, s, ft_strlen(s));
		write (fd, "\n", 1);
	}
}
