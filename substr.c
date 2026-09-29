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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		*ptr;

	if (!dest && !src)
		return (NULL);
	sptr = (const unsigned char *) src;
	ptr = dest;
	while (n--)
		*ptr++ = *sptr++;
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	char		*src;
	int			i;

	src = (char *)s;
	i = 0;
	ptr = malloc (len * 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, &src[start], len);
	return (ptr);
}
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    int i;

    i = 0;
    ptr = malloc (len * 1);
    while (len--)
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    return (ptr);
}

int main()
{
    char src[]= "wellcome to 42amman";
    printf("%s",ft_substr(src,6,8));

}*/
