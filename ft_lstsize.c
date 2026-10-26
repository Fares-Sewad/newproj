/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:45:37 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:37 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int	main(void)
{
t_list	*node1, *node2, *node3;
t_list	*new;

node1 = ft_lstnew("10");
node2 = ft_lstnew("50");
node3 = ft_lstnew("20");
node1->next = node2;
node2->next = node3;
new = ft_lstnew("5");
ft_lstadd_front(&node1, new);
printf("%d\n", ft_lstsize(node1));
return (0);
}*/
