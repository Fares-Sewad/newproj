/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:00:29 by username         #+#    #+#              */
/*   Updated: 2026/10/16 15:00:30 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calclength(long long num)
{
	int	co;

	co = 0;
	if (num <= 0)
	{
		num *= -1;
		co++;
	}
	while (num > 0)
	{
		num /= 10;
		co++;
	}
	return (co);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	len;
	long long		num;

	num = n;
	len = calclength(num);
	ptr = (char *) malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (num < 0)
	{
		num *= -1;
		ptr[0] = '-';
	}
	if (num == 0)
		ptr[0] = '0';
	ptr[len] = '\0';
	while (num > 0)
	{
		ptr[--len] = ((num % 10) + '0');
		num /= 10;
	}
	return (ptr);
}
/*
int main()
{
printf("result : %s\n",ft_itoa(0));
}*/
