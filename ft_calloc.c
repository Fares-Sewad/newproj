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

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = 0;
}

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
    if (nelem != 0 && elsize > ((size_t)-1) / nelem)
		return (NULL);
	ptr = malloc(nelem * elsize);
	if (!ptr)
        return (NULL);
    ft_bzero(ptr,(nelem * elsize));    
	return (ptr);
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
