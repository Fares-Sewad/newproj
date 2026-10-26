/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:32:55 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:03:50 by fsewad           ###   ########.fr       */
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
