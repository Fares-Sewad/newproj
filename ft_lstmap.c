/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 12:42:50 by username         #+#    #+#              */
/*   Updated: 2026/10/16 16:50:24 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*lst_toupper(void *k)
{
	char	*src;
	char	*dst;
	int		i;

	if (!k)
		return (NULL);
	src = (char *) k;
	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		if (dst[i] >= 'a' && dst[i] <= 'z')
			dst[i] = dst[i] - 32;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	delet(void *ptr)
{
	if (!ptr)
		return ;
	free(ptr);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*head;
	t_list	*last;
	void	*temp;

	head = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		temp = f(lst->content);
		if (!temp)
			return (ft_lstclear(&head, del), NULL);
		ptr = ft_lstnew(temp);
		if (!ptr)
			return (del(temp), ft_lstclear(&head, del), NULL);
		if (!head)
			head = ptr;
		else
			last->next = ptr;
		last = ptr;
		lst = lst->next;
	}
	return (head);
}

/*int	main(void)
{
t_list	*node1, *node2, *node3, *node4, *new;

node1 = ft_lstnew(ft_strdup("fares"));
node2 = ft_lstnew(ft_strdup("mohammed"));
node3 = ft_lstnew(ft_strdup("abdul-hafez"));
node4 = ft_lstnew(ft_strdup("sewad"));
node1->next = node2;
node2->next = node3;
node3->next = node4;
new = ft_lstmap(node2, *lst_toupper, delet);
while (node1 != NULL)
{
printf("# %s\n", (char *) node1->content);
node1 = node1->next;
}
while (new != NULL)
{
printf("$ %s\n", (char *) new->content);
new = new->next;
}
return (0);
}*/
