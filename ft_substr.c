/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:05:50 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:05:50 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *) s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	ptr = (char *) malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *) & s[start], len + 1);
	return (ptr);
}
/*int main()
{
char	*src;
src = ft_substr("hello", 10, 3);
printf("%s\n", src);
free(src);
}*/
