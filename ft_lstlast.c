/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:02:25 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:02:25 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
t_list	*node1, *node2, *node3;
t_list	*new, *last;

node1 = ft_lstnew("10");
node2 = ft_lstnew("50");
node3 = ft_lstnew("20");
node1->next = node2;
node2->next = node3;
new = ft_lstnew("5");
ft_lstadd_front(&node1, new);
last = ft_lstlast(node1);
printf("%s\n", (char *) last->content);
return (0);
}*/
