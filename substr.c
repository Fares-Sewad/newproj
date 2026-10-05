/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:27:22 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 18:09:40 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *)&s[start], len + 1);
	return (ptr);
}
int main()
{
    char	*src;
	src = ft_substr("hello", 10, 3);
	printf("%s\n", src);
	free(src);
}
