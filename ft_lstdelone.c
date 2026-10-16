/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:01:45 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:07:57 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete(void *ptr)
{
	if (!ptr)
		return ;
	free(ptr);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
ft_lstdelone(node3, delete);
while (node1 != NULL)
{
printf("%s\n", (char *) node1->content);
node1 = node1->next;
}
return (0);
}*/
