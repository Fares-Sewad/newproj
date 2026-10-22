/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:31:55 by username          #+#    #+#             */
/*   Updated: 2026/10/22 14:28:20 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *) s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
			return ((void *) & ptr[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
const char src[] = "wellcome 42 amman core student";
char *s;
s = (char *)ft_memchr(src,'4', 10);
printf("%s",s);
return 0;
}*/
