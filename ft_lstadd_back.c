/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:50:42 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/22 13:25:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!new || !lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while (ptr -> next != NULL)
		ptr = ptr -> next;
	ptr -> next = new;
}
