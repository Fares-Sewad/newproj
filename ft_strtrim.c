/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:06:02 by username         #+#    #+#              */
/*   Updated: 2026/10/16 16:00:13 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *) s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (char *) & s1[start], end - start + 1);
	return (ptr);
}
/*
int	main(void)
{
char	s1[] = "xxxyxxhelloxxx";
char	set[] = "xy";

printf("\n%s\n", ft_strtrim(s1, set));
}*/
