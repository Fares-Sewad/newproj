/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:31:55 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:08:38 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (!(ptr[i] == c))
			i++;
		else
			return ((void *) &ptr[i]);
	}
	return (0);
}
/*
int main()
{
    const char src[] = "wellcome 42 amman core student";
    char *s;
    s = (char *)ft_memchr(src,'4', 10);
    printf("%s",s);
    return 0;
}*/
