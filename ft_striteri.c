/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:04:00 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:26:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ftolower(unsigned int n, char *c)
{
	n = n;
	if (*c >= 65 && *c <= 90)
		*c = *c + 32;
}

void	alternate_case(unsigned int n, char *c)
{
	if (n % 2 == 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}
	else
	{
		if (*c >= 'A' && *c <= 'Z')
			*c = *c + 32;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
//char src[]= "42 AmMan";
//f(unsigned int, char) = ftolower(unsigned int, char);
//ft_striteri(src,ftolower);
//printf("%s\n" , src);
char	text[] = "hello world";

printf("befor : %s\n", text);
ft_striteri(text, alternate_case);
printf("after : %s\n", text);
}*/
