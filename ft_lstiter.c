/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:46:08 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/10 16:50:54 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void edit(void *s)
{
	int i = 0;
	char *str = (char *)s;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main()
{
	t_list *node = malloc(sizeof(t_list));
	node->content = strdup("hello");
	node->next = NULL;
    ft_lstiter(node, &edit);
	printf("%s\n", node->content);
	return 0;
}*/
