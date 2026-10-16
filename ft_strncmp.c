/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/11 16:28:57 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:29:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
char s01[] = "abdas";
char s02[] = "abdad";

printf("%d", ft_strncmp(s01, s02, 0));

//printf("%d\n" , strncmp(s01, s02, 10));
}//	cc -Wall -Wextra -Werror  */
