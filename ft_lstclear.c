/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:01:29 by username          #+#    #+#             */
/*   Updated: 2026/10/22 14:27:39 by fsewad           ###   ########.fr       */
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
ft_lstclear(&node1, delete);
while (node1 != NULL)
{
printf("# %s\n", (char *) node1->content);
node1 = node1->next;
}
void	delete(void *ptr)
{
	free(ptr);
}

return (0);
}*/
