/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:38:05 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 12:09:31 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*to_find;

	str = (char *)big;
	to_find = (char *)little;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (len--)
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] == str[i + j] && to_find[j] != '\0')
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	src[] = "The most important function of";
	const char	tf[] = "on";

	printf("%s\n", ft_strnstr(src,tf,24));
	
	//printf("%s\n", strstr(s, f));
}//	cc -Wall -Wextra -Werror   */
