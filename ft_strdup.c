/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:10:59 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 18:09:56 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sptr;
	unsigned char	*ptr;

	sptr = (unsigned char *) src;
	ptr = dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*ptr++ = *sptr++;
	return ((void *)ptr);
}

char	*ft_strdup(const char *s)
{
	unsigned char	*pt;
	int				i;

	i = 0;
	while (s[i] != '\0')
		i++;
	pt = malloc(i * 1);
	if (pt == NULL)
		return (NULL);
	ft_memcpy (pt, s, i);
	return ((char *)pt);
}
/*
int main()
{
    char src[]="wellcome to 42amman";
    printf("%s\n",ft_strdup(src));
    char srcc[]="wellcome to 42amman";
    printf("%s",strdup(srcc));
}*/
