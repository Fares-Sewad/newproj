/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:11:40 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:08:06 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(nelem * elsize);
	while (i < (nelem * elsize))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int main()
{
    int *pt;
    int i;
    i = 0;
    pt = ft_calloc(7,4);
    //printf("%s",ft_calloc(7, 4));
    pt[0] = 911;
    pt[4] = 67;
    printf("    pt[0] : %d  ***  pt[4] : %d" , pt[0],pt[4]);
    //free(pt);
    printf("\n    pt[0] : %d  ***  pt[4] : %d" , pt[0],pt[4]);
}*/
