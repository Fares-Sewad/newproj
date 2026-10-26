/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:35:42 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:16 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (!lst || !new)
		return ;
	back = ft_lstlast(*lst);
	if (!back)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	back->next = new;
}

/*int	main(void)
{
t_list	*node1, *node2, *node3;
t_list	*new, *last, *head;

node1 = ft_lstnew("10");
node2 = ft_lstnew("50");
node3 = ft_lstnew("20");
node1->next = node2;
node2->next = node3;
new = ft_lstnew("5");
ft_lstadd_back(&node1, new);
while (node1 != NULL)
{
printf("%s\n", (char *) node1->content);
//printf("%s\n", (char *) node1->next->content);
node1 = node1->next;
}
return (0);
}*/
