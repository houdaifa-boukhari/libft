/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:44:07 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/10 16:49:53 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !*del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

/*int main()
{
    t_list *node = malloc(sizeof(t_list));
	node->content = strdup("hello");
	node->next = NULL;
	if (node->content)
		printf("%s\n", node->content);
    ft_lstdelone(node, &free_node);
	return 0;
}*/
