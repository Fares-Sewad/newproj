/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 09:34:45 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:09:19 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[j] != '\0' && size - 1 > j)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

int	main(void)
{
#include <unistd.h>
#include <stdio.h>
	char	s[] = "42amman";
	char	d[15];

	//printf("%u\n", ft_strlcpy(d, s, 6));
	printf("%u\n", ft_strlcpy(d, s, 6));
}