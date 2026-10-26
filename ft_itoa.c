/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:35:13 by fsewad            #+#    #+#             */
/*   Updated: 2026/10/26 13:04:13 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calclength(long long num)
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
