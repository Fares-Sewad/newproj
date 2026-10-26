/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:41:03 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:05:17 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *) s1);
	len2 = ft_strlen((char *) s2);
	ptr = malloc(len1 + len2 + 1);
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
