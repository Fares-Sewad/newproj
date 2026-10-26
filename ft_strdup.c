/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:40:32 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:05:12 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pt;
	size_t	len;

	len = ft_strlen((char *) s);
	pt = malloc(len + 1);
	if (!pt)
		return (NULL);
	ft_memcpy(pt, s, len + 1);
	return (pt);
}
/*
int main()
{
char src[]="wellcome to 42amman";
printf("%s\n",ft_strdup(src));
//char srcc[]="wellcome to 42amman";
//printf("%s",strdup(srcc));
}*/
