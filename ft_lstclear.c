/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:57:46 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/10/18 13:45:48 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if(!(*lst) || !lst || !del)
		return ;
	//recurcive the last node
	ft_strclear(&(*lst) -> next,del);
	
	(del)(*lst->content);
	free(*lst);
	*lst = NULL;
}
