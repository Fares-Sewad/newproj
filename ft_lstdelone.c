/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:36:37 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:23 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	delete(void *ptr)
{
	if (!ptr)
		return ;
	free(ptr);
}
}*/
