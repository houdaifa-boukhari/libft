/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:42:24 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/10 16:47:24 by hel-bouk         ###   ########.fr       */
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
