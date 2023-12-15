/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:00:29 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/15 17:47:03 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *modifie(void *s)
{
	int i = 0;
	char *str = (char *)s;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return ((void *)str);
}

void free_node(void *head)
{
	free(head);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*data;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		data = f(lst->content);
		node = ft_lstnew(data);
		if (!node)
		{
			del(data);
			ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

/*int main()
{
	t_list *head = NULL;
	t_list *new_head = NULL;
	t_list *node1 = ft_lstnew(strdup("hello"));
	t_list *node2 = ft_lstnew(strdup("brothers"));
	t_list *node3 = ft_lstnew(strdup("let's"));
	t_list *node4 = ft_lstnew(strdup("go to achieve"));
	t_list *node5 = ft_lstnew(strdup("we dreams"));
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	ft_lstadd_back(&head, node5);
	print_list(head);
	printf("--------------\n");
	new_head = ft_lstmap(head, &modifie, &free_node);
	print_list(new_head);
	return 0;
}*/
