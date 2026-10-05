/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:31:32 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 18:07:21 by fsewad           ###   ########.fr       */
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
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	ptr = (char *)malloc(len1 + len2 + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len1);
	ft_memcpy(&ptr[len1], s2, len2);
	ptr[len1 + len2] = '\0';
	return (ptr);
}
/*
int main()
{
    char src1[]= "wellcome to 42amman";
    char src2[]= " fares sewad";
    printf("%s",ft_strjoin(src1,src2));
        //ft_bzero(ptr, (len1+len2));
        //printf("1 %d\n",size(ptr));
        //ptr+= '\0';
}*/
