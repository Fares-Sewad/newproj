/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:04:40 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:26:37 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ftolower(unsigned int n, char c)
{
	n = n;
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *) s);
	ptr = (char *) malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
/*
int main()
{
char *f;
//f(unsigned int, char) = ftolower(unsigned int, char);
f = ft_strmapi("42 AmMan",ftolower);
printf("%s\n" , f);

free(f);

printf("%s\n" , f);
}*/
