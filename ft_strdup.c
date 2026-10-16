/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 11:10:59 by username         #+#    #+#              */
/*   Updated: 2026/10/08 23:32:28 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pt;
	size_t	len;

	len = ft_strlen((char *) s);
	pt = (char *) malloc(len + 1);
	if (!pt)
		return (NULL);
	ft_memcpy(pt, s, len + 1);
	return (pt);
}
/*
int main()
{
char src[]="wellcome to 42amman";
printf("%s\n",ft_strdup(src));
//char srcc[]="wellcome to 42amman";
//printf("%s",strdup(srcc));
}*/
