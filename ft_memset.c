/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:59:45 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 16:26:24 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main()
{
    char s[] = "wellcome to 42amman core ST";
    printf("%s \n\n*********\n" , s);
    
    memset(s,'0',4);
    printf("%s \n\n*********\n" , s);
    
    ft_memset(s,'0',4);
    printf("%s " , s);
    return 0; 
}*/