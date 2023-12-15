/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:42:24 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 17:47:08 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr)
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
	lst = NULL;
}

/*int main()
{
	t_list *head = NULL;
    t_list *node = malloc(sizeof(t_list));
	node->content = strdup("hello");
	t_list *node1 = malloc(sizeof(t_list));
	node1->content = strdup("world");
	node->next = node1;
	node1->next = NULL;
	head = node;
    ft_lstclear(&head, (void(*)(void *))free_node);
	return 0;
}*/
