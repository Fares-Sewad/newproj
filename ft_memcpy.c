/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:38:25 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:49 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		*ptr;

	if (!dest && !src)
		return (NULL);
	sptr = (const unsigned char *) src;
	ptr = dest;
	while (n--)
		*ptr++ = *sptr++;
	return (dest);
}
/*
int main()
{
    char src[] = "42 core student";
    char dest[20] = "0";

    ft_memcpy(dest,src,4);
    //memcpy(dest,src,3);
    printf("dest after = %s\n",dest);

}*/
