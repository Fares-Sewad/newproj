/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:04:40 by username          #+#    #+#             */
/*   Updated: 2026/10/22 12:15:54 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	ftolower(unsigned int n, char c)
{
	unsigned int j;
	j = n;
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c + j);
}

printf("%s\n" , f);
}*/
