/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:38:35 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:51 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;

	ptr_dest = dest;
	if (ptr_dest < (unsigned char *) src)
		return (ft_memcpy(dest, src, n));
	else if (ptr_dest > (unsigned char *) src)
	{
		while (n--)
			ptr_dest[n] = ((unsigned char *) src)[n];
	}
	return (dest);
}
/*
int main()
{
    char src[]="fares";
    char dest[30]= "moha";


    printf("  %lu  " , sizeof(dest));
    ft_memmove(dest,src,2);
    //memmove(dest,src,19);
    printf("dest after : %s",dest);

    return 0;
}*/
