/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:46:09 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:05:29 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
/*
static char	ftolower(unsigned int n, char c)
{ 
	unsigned int j;
	j = n;
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c + j);
}
int main()
{

char *f;
//f(unsigned int, char) = ftolower(unsigned int, char);
f = ft_strmapi("42 AmMan",ftolower);
printf("%s\n" , f);

free(f);
printf("%s\n" , f);
}*/
