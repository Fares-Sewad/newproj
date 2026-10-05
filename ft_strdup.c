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

char	*ft_strdup(const char *s)
{
	char	*pt;
	size_t	len;

	len = ft_strlen((char *)s);
	pt = (char *)malloc(len + 1);
	printf("#%d",ft_strlen(pt));
	if (!pt)
		return (NULL);
	ft_memcpy(pt, s, len + 1);
	return (pt);
}

int main()
{
    char src[]="wellcome to 42amman";
    printf("%s\n",ft_strdup(src));
    //char srcc[]="wellcome to 42amman";
    //printf("%s",strdup(srcc));
}
