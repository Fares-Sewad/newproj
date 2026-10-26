/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:37:11 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:25 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int	main(void)
{
t_list	*node1, *node2, *node3, *node4;

node1 = ft_lstnew(ft_strdup("fares"));
node2 = ft_lstnew(ft_strdup("mohammed"));
node3 = ft_lstnew(ft_strdup("abdul-hafez"));
node4 = ft_lstnew(ft_strdup("sewad"));
node1->next = node2;
node2->next = node3;
node3->next = node4;
ft_lstiter(node2, lst_toupper);
while (node1 != NULL)
{
printf("# %s\n", (char *) node1->content);
node1 = node1->next;
}

void	lst_toupper(void *k)
{
	char	*c;

	if (!k)
		return ;
	c = k;
	while (*c)
	{
		if (*c >= 97 && *c <= 122)
			*c = *c - 32;
		c++;
	}
}

return (0);
}*/
