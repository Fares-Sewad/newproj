/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:28:57 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:09:27 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return ((unsigned) s1[i] - (unsigned) s2[i]);
		if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
			return ((unsigned) 0);
		i++;
	}
	return ((unsigned) 0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{


	char s01[] = "abdas";
	char s02[] = "abdad";

	printf("%d", ft_strncmp(s01, s02, 0));
	
	//printf("%d\n" , strncmp(s01, s02, 10));
}//	cc -Wall -Wextra -Werror  */
