/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:36:27 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 18:19:47 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*second;
	t_list	*head;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head != NULL)
	{
		second = head;
		head = head->next;
		del(second->content);
		free(second);
	}
	*lst = NULL;
}

/*int	main(void)
{
t_list	*node1, *node2, *node3, *node4;

node1 = ft_lstnew(ft_strdup("90"));
node2 = ft_lstnew(ft_strdup("50"));
node3 = ft_lstnew(ft_strdup("20"));
node4 = ft_lstnew(ft_strdup("70"));
node1->next = node2;
node2->next = node3;
node3->next = node4;
 
ft_lstclear(&node1,delete);

void	delete(void *ptr)
{
	free(ptr);
}

return (0);
}*/
