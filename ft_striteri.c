/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:40:45 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:05:15 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


void	ftolower(unsigned int n, char *c)
{
	unsigned int j;
	j = n;
	j = j + 1;
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

}*/
