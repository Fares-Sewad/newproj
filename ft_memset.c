/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:59:45 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/25 14:50:06 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
int main()
{
    char s[] = "wellcome to 42amman core ST";
    printf("%s \n\n*********\n" , s);
    
    memset(s,'$',4);
    printf("%s \n\n*********\n" , s);
    
    ft_memset(s,'@',4);
    printf("%s " , s);
    return 0; 
}
*/
