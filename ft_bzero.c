/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:06:50 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 17:57:33 by fsewad           ###   ########.fr       */
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
/*
int main()
{
    char str[] = "Hello, world!";
    ft_bzero(str,5);
    printf("\n\nsize of  = %lu\n", sizeof(str));
    for (size_t i = 0; i < sizeof(str); i++)
    {
        printf("str[%zu] = %d (ASCII)\n", i, (unsigned char)str[i]);
    }
    

    return 0;
}*/