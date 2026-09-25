/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:04:31 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/25 14:04:37 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>
*/
void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*ptr;

	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	while (*ptr != '\0')
		*ptr++ = 0;
	return ((void *)ptr);
}
/*
int main()
{
    int *pt;
    pt = ft_calloc(5,4);
    pt[0] = 911;
    pt[21] = 7;
    printf("    pt[0] : %d  ***  pt[21] : %d" , pt[0],pt[211]);

}*/
