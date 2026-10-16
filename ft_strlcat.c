/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/13 18:19:45 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:45:49 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	j;

	j = 0;
	d = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	while (dest[d] != '\0')
		d++;
	if (size <= d)
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
char	d[] = "Hajeer";
//har	d1[] = "Hajeer";
printf("%u\n", ft_strlcat(d, s, 6));
printf("%s\n", d);
unsigned int	n;

n = strlcat(d1, s, 6);
printf("%s\n",d1);
printf("%d\n", n );

}//	cc -Wall -Wextra -Werror*/
