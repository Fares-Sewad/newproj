/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:41:18 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:05:20 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	j;

	j = 0;
	d = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	while (d < size && dest[d] != '\0')
		d++;
	if (d == size)
		return (size + i);
	while (src[j] != '\0' && j < (size - 1) - d)
	{
		dest[j + d] = src[j];
		j++;
	}
	dest[j + d] = '\0';
	return (i + d);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int	main(void)
{
char	s[] = "Hajeer";
char	d[] = "Haj";
//har	d1[] = "Hajeer";
printf("%u\n", ft_strlcat(d, s, 8));
printf("%s\n", d);
unsigned int	n;

n = strlcat(d1, s, 6);
printf("%s\n",d1);
printf("%d\n", n );

}//	cc -Wall -Wextra -Werror*/
